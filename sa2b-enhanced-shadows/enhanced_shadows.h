#pragma once

typedef struct
{
	int FlameRingSonic;
	int BounceBracelet;
	int MagicHands;
	int LightShoes;

	int FlameRingShadow;
	int AirShoes;

	int ShovelClaw;
	int AirNecklace;
	int HammerGloves;
	int Sunglasses;

	int PickNails;
	int IronBoots;
	int TreasureScope;

	int BlasterT;
	int Bazooka;
	int Booster;

	int BlasterE;
	int Cannon;
	int Jets;
	int Armor;
}
GlobalConfig;

extern	GlobalConfig Config;

void	njCnkDrawMotionHook();

int		EditObjPak(float32 shadowOpacity);