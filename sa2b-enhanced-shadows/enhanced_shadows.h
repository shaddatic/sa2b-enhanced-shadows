#pragma once

typedef struct
{
	struct {
		int FlameRing;
		int BounceBracelet;
		int MagicHands;
		int LightShoes;
	} Sonic;

	struct {
		int FlameRing;
		int AirShoes;
	} Shadow;

	struct {
		int ShovelClaw;
		int AirNecklace;
		int HammerGloves;
		int Sunglasses;
	} Knuckles;

	struct {
		int PickNails;
		int IronBoots;
		int TreasureScope;
	} Rouge;

	struct {
		int Blaster;
		int Bazooka;
		int Booster;
	} Miles;

	struct {
		int Blaster;
		int Cannon;
		int Jets;
		int Armor;
	} Eggman;
}
GlobalConfig;

extern	GlobalConfig Config;

void	njCnkDrawMotionHook();

int		EditObjPak(float32 shadowOpacity);