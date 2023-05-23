#pragma once

#include <sa2b/ninja/ninja.h>

struct StartPosition
{
	__int16 Level;
	__int16 Rotation1P;
	__int16 RotationP1;
	__int16 RotationP2;
	NJS_POINT3 Position1P;
	NJS_POINT3 PositionP1;
	NJS_POINT3 PositionP2;
};

struct LevelEndPosition
{
	__int16 Level;
	__int16 Mission2YRotation;
	__int16 Mission3YRotation;
	__int16 field_6;
	NJS_POINT3 Mission2Position;
	NJS_POINT3 Mission3Position;
};

#define MODEXPORT_INFO	DATAEXPORT ModInfo SA2ModInfo
#define MODEXPORT_FUNC	DATAEXPORT void __cdecl

#include <WTypes.h>

#include <sa2b/modloader/SA2Structs.h> // Dummy, does nothing; just disables SA2ModInfo from including it
#include <sa2b/modloader/SA2ModInfo.h>

/* MOD LOADER EXPORT FUNCTIONS *//* Use these to run your mod

MODFUNCTION Init(const char* path, const HelperFunctions& helperFunctions)	// Executed on startup
MODFUNCTION OnFrame()														// Executed every rendered frame
MODFUNCTION OnInput()														// Executed before the game processes input
MODFUNCTION OnControl()														// Executed when the game processes input
MODFUNCTION OnExit(UINT uExitCode, int a1, int a2)							// Executed on game close

*/