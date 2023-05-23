#define _CRT_SECURE_NO_WARNINGS

#include <sa2b/core.h>
#include <sa2b/config.h>
#include <sa2b/memtools.h>

#include <sa2b/src/figure/miles.h> // for mtx_MilesTails

#include "enhanced_shadows.h"

GlobalConfig 
Config;

static float 
OpacityList[] = { 0.25f, 0.3f, 0.375f, 0.5f };

static uint32 
ResolutionList[] = { 256, 512, 1024, 2048, 4096, 8192 };

extern "C" __declspec(dllexport) 
void __cdecl
Init(const char* path, const void*)
{
	config* pconf = ConfigOpen2(path, "config.ini");

	if (ConfigGetInt(pconf, "main", "enable", 1) == 0)
	{
		WriteJump(0x0046FBC0, no_op);
		ConfigClose(pconf);
		return;
	}

	MemToolsInitialize();

	WriteCall(0x0071EA0F, njCnkDrawMotionHook); // Sonic/Shadow

	WriteCall(0x0072E216, njCnkDrawMotionHook); // Knux
	WriteCall(0x0072E28F, njCnkDrawMotionHook);
	WriteCall(0x0072E8A6, njCnkDrawMotionHook); // Rouge
	WriteCall(0x0072E91F, njCnkDrawMotionHook);

	WriteCall(0x00745B63, njCnkDrawMotionHook); // Mechs
	WriteCall(0x00745C11, njCnkDrawMotionHook);

	WriteCall(0x0073E9F5, njCnkDrawMotionHook); // Eggman
	WriteCall(0x0073EA50, njCnkDrawMotionHook);

	WriteCall(0x0075013B, njCnkDrawMotionHook); // Miles
	WriteCall(0x00750196, njCnkDrawMotionHook);
	WritePointer(0x007501B2, &mtx_MilesTails);	// Point shader tails matrix to actual tails matrix
	WritePointer(0x00750230, &mtx_MilesTails);	// ^

	if (ConfigGetInt(pconf, "main", "equipment", 1))
	{
		Config.FlameRingSonic =		ConfigGetInt(pconf, "sonic",	"flame",		1);
		Config.BounceBracelet =		ConfigGetInt(pconf, "sonic",	"bounce",		1);
		Config.MagicHands =			ConfigGetInt(pconf, "sonic",	"magic",		1);
		Config.LightShoes =			ConfigGetInt(pconf, "sonic",	"light",		1);

		Config.FlameRingShadow =	ConfigGetInt(pconf, "shadow",	"flame",		1);
		Config.AirShoes =			ConfigGetInt(pconf, "shadow",	"air",			1);

		Config.ShovelClaw =			ConfigGetInt(pconf, "knuckles",	"shovel",		1);
		Config.AirNecklace =		ConfigGetInt(pconf, "knuckles",	"air",			1);
		Config.HammerGloves =		ConfigGetInt(pconf, "knuckles",	"hammer",		1);
		Config.Sunglasses =			ConfigGetInt(pconf, "knuckles",	"sunglasses",	1);

		Config.PickNails =			ConfigGetInt(pconf, "rouge",	"nails",		1);
		Config.IronBoots =			ConfigGetInt(pconf, "rouge",	"boots",		1);
		Config.TreasureScope =		ConfigGetInt(pconf, "rouge",	"scope",		1);

		Config.BlasterT =			ConfigGetInt(pconf, "miles",	"blaster",		2);
		Config.Bazooka =			ConfigGetInt(pconf, "miles",	"bazooka",		2);
		Config.Booster =			ConfigGetInt(pconf, "miles",	"booster",		1);

		Config.BlasterE =			ConfigGetInt(pconf, "eggman",	"blaster",		2);
		Config.Cannon =				ConfigGetInt(pconf, "eggman",	"cannon",		2);
		Config.Jets =				ConfigGetInt(pconf, "eggman",	"jets",			1);
		Config.Armor =				ConfigGetInt(pconf, "eggman",	"armor",		1);
	}

	int resolution = ConfigGetInt(pconf, "main", "resolution", 1);

	if (resolution != 1)
		WriteValue(0x0041F810, ResolutionList[resolution], uint32);

	int opacity = ConfigGetInt(pconf, "main", "opacity", 0);

	if (opacity != ConfigGetInt(pconf, "main", "_opacity", 0))
	{
		if (EditObjPak(OpacityList[opacity]) == 0)
		{
			ConfigSetInt(pconf, "main", "_opacity", opacity);
			ConfigSave(pconf);
		}
	}

	ConfigClose(pconf);
}

#include <sa2b/modloader.h>

extern "C" __declspec(dllexport) 
ModInfo 
SA2ModInfo = { ModLoaderVer };