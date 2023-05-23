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

config* GetDisableUpgradeModelsConfig();

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
		config* pupgradeconf = GetDisableUpgradeModelsConfig();

		if (pupgradeconf)
		{
			Config.Sonic.FlameRing =		!ConfigGetBool(pupgradeconf, "Sonic",	"DisableFlameRing",		true);
			Config.Sonic.BounceBracelet =	!ConfigGetBool(pupgradeconf, "Sonic",	"DisableBounceBracelet", true);
			Config.Sonic.MagicHands =		!ConfigGetBool(pupgradeconf, "Sonic",	"DisableMagicGloves",	true);
			Config.Sonic.LightShoes =		!ConfigGetBool(pupgradeconf, "Sonic",	"DisableLightShoes",	true);

			Config.Shadow.FlameRing =		!ConfigGetBool(pupgradeconf, "Shadow",	"DisableFlameRing",		true);
			Config.Shadow.AirShoes =		!ConfigGetBool(pupgradeconf, "Shadow",	"DisableAirShoes",		true);

			Config.Knuckles.ShovelClaw =	!ConfigGetBool(pupgradeconf, "Knuckles", "DisableShovelClaw",	true);
			Config.Knuckles.AirNecklace =	!ConfigGetBool(pupgradeconf, "Knuckles", "DisableAirNecklace",	true);
			Config.Knuckles.HammerGloves =	!ConfigGetBool(pupgradeconf, "Knuckles", "DisableHammerGloves", true);
			Config.Knuckles.Sunglasses =	!ConfigGetBool(pupgradeconf, "Knuckles", "DisableSunglasses",	true);

			Config.Rouge.PickNails =		!ConfigGetBool(pupgradeconf, "Rouge",	"DisablePickNails",		true);
			Config.Rouge.IronBoots =		!ConfigGetBool(pupgradeconf, "Rouge",	"DisableIronBoots",		true);
			Config.Rouge.TreasureScope =	!ConfigGetBool(pupgradeconf, "Rouge",	"DisableTreasureScope", true);

			Config.Miles.Blaster =			!ConfigGetBool(pupgradeconf, "Tails",	"DisableLaserBlaster",	true) ? 2 : 1;
			Config.Miles.Bazooka =			!ConfigGetBool(pupgradeconf, "Tails",	"DisableBazooka",		true) ? 2 : 1;
			Config.Miles.Booster =			!ConfigGetBool(pupgradeconf, "Tails",	"DisableBooster",		true);

			Config.Eggman.Blaster =			!ConfigGetBool(pupgradeconf, "Eggman",	"DisableLaserBlaster",	true) ? 2 : 1;
			Config.Eggman.Cannon =			!ConfigGetBool(pupgradeconf, "Eggman",	"DisableLargeCannon",	true) ? 2 : 1;
			Config.Eggman.Jets =			!ConfigGetBool(pupgradeconf, "Eggman",	"DisableJetEngine",		true);
			Config.Eggman.Armor =			!ConfigGetBool(pupgradeconf, "Eggman",	"DisableProtectiveArmor", true);
			
			ConfigClose(pupgradeconf);
		}
		else
		{
			Config.Sonic.FlameRing = 1;
			Config.Sonic.BounceBracelet = 1;
			Config.Sonic.MagicHands = 1;
			Config.Sonic.LightShoes = 1;

			Config.Shadow.FlameRing = 1;
			Config.Shadow.AirShoes = 1;

			Config.Knuckles.ShovelClaw = 1;
			Config.Knuckles.AirNecklace = 1;
			Config.Knuckles.HammerGloves = 1;
			Config.Knuckles.Sunglasses = 1;

			Config.Rouge.PickNails = 1;
			Config.Rouge.IronBoots = 1;
			Config.Rouge.TreasureScope = 1;

			Config.Miles.Blaster = 2;
			Config.Miles.Bazooka = 2;
			Config.Miles.Booster = 1;

			Config.Eggman.Blaster = 2;
			Config.Eggman.Cannon = 2;
			Config.Eggman.Jets = 1;
			Config.Eggman.Armor = 1;
		}
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

#include <windows.h>

config*
GetDisableUpgradeModelsConfig()
{
	HMODULE shadow = GetModuleHandle(L"SA2DisableUpgradeModels");

	if (!shadow)
		return NULL;

	ansi path[MAX_PATH];

	GetModuleFileNameA(shadow, path, MAX_PATH);

	ansi* lastslash = NULL;

	for (int i = 0; path[i] != '\0'; ++i)
	{
		if (path[i] == '/' || path[i] == '\\')
			lastslash = &path[i];
	}

	if (lastslash)
		*lastslash = '\0';

	return ConfigOpen2(path, "config.ini");
}

#include <sa2b/modloader.h>

extern "C" __declspec(dllexport) 
ModInfo 
SA2ModInfo = { ModLoaderVer };