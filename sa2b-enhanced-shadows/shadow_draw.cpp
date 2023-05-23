#define _CRT_SECURE_NO_WARNINGS

#include <sa2b/core.h>

#include <sa2b/src/player.h>

#include <sa2b/src/figure/sonic.h>
#include <sa2b/src/figure/shadow.h>
#include <sa2b/src/figure/miles.h>
#include <sa2b/src/figure/knuckles.h>
#include <sa2b/src/figure/rouge.h>
#include <sa2b/src/figure/ewalker.h>
#include <sa2b/src/figure/twalker.h>

#include "enhanced_shadows.h"

int
GetCharacterPlayer(int character)
{
	return (int)(playerpwp[1] && playerpwp[1]->ch_num == character);
}

void
DrawSonicShadow(NJS_MOTION* motion, float frame)
{
	SONIC_WORK* spwp = (SONIC_WORK*)playerpwp[GetCharacterPlayer(ADV2_PLNO_SONIC)];
	pSonicWork = spwp;

	njCnkSetMotionCallback(SonicMotionCallBack);
	njCnkDrawMotion(CHAR_OBJECTS[0].pObject, motion, frame);

	if (Config.Sonic.FlameRing && spwp->pwk.equipment & PL_EQUIP_SONIC_FLAMERING)
	{
		njSetMatrix(0, &mtx_SonicHandR);
		njCnkDrawModel(CHAR_OBJECTS[25].pObject->model);
	}

	if (Config.Sonic.BounceBracelet && spwp->pwk.equipment & PL_EQUIP_SONIC_BOUNCEBRACELET)
	{
		njSetMatrix(0, &mtx_SonicHandL);
		njCnkDrawModel(CHAR_OBJECTS[26].pObject->model);
	}

	if (Config.Sonic.MagicHands && spwp->pwk.equipment & PL_EQUIP_SONIC_MAGICHANDS)
	{
		njSetMatrix(0, &mtx_SonicHandL);
		njCnkDrawObject(CHAR_OBJECTS[27].pObject);
	}

	if (Config.Sonic.LightShoes && spwp->pwk.equipment & PL_EQUIP_SONIC_LIGHTSHOES)
	{
		njSetMatrix(0, &mtx_SonicFootL);
		njCnkDrawObject(CHAR_OBJECTS[14].pObject);

		njSetMatrix(0, &mtx_SonicFootR);
		njCnkDrawObject(CHAR_OBJECTS[13].pObject);
	}

	njCnkSetMotionCallback(0);
}

void
DrawShadowShadow(NJS_MOTION* motion, float frame)
{
	SONIC_WORK* spwp = (SONIC_WORK*)playerpwp[GetCharacterPlayer(ADV2_PLNO_SHADOW)];
	pSonicWork = spwp;

	njCnkSetMotionCallback(ShadowMotionCallBack);
	njCnkDrawMotion(CHAR_OBJECTS[65].pObject, motion, frame);

	if (Config.Shadow.FlameRing && spwp->pwk.equipment & PL_EQUIP_SHADOW_FLAMERING) // Flame Ring
	{
		njSetMatrix(0, &mtx_SonicHandR);
		njCnkDrawModel(CHAR_OBJECTS[100].pObject->model);
	}

	if (Config.Shadow.AirShoes && spwp->pwk.equipment & PL_EQUIP_SHADOW_AIRSHOES) // Air Shoes
	{
		njSetMatrix(0, &mtx_SonicFootL);
		njCnkDrawObject(CHAR_OBJECTS[79].pObject);

		njSetMatrix(0, &mtx_ShadowFootR);
		njCnkDrawObject(CHAR_OBJECTS[78].pObject);
	}

	njCnkSetMotionCallback(0);
}

void
DrawKnucklesShadow(NJS_MOTION* motion, float frame)
{
	KNUCKLES_WORK* kwp = (KNUCKLES_WORK*)playerpwp[GetCharacterPlayer(ADV2_PLNO_KNUCKLES)];
	pKnucklesWork = kwp;

	njCnkSetMotionCallback(KnucklesMotionCallBack);
	njCnkDrawMotion(CHAR_OBJECTS[142].pObject, motion, frame);

	njPushMatrixEx();

	if (Config.Knuckles.Sunglasses && kwp->pwk.equipment & PL_EQUIP_KNUCKLES_SUNGLASSES)
	{
		NJS_CNK_OBJECT* pobj = CHAR_OBJECTS[161].pObject->child;

		njSetMatrix(0, &mtx_KnucklesHead);
		njTranslateEx((NJS_VECTOR*)pobj->pos);

		if (kwp->someHeadAng != 0x2000)
			njRotateZ(0, kwp->someHeadAng - 0x2000);

		njCnkDrawModel(pobj->model);
	}

	if (Config.Knuckles.AirNecklace && kwp->pwk.equipment & PL_EQUIP_KNUCKLES_AIRNECKLACE)
	{
		njSetMatrix(0, &mtx_KnucklesBody);
		njCnkDrawObject(CHAR_OBJECTS[168].pObject);
	}

	if ((Config.Knuckles.ShovelClaw || Config.Knuckles.HammerGloves) && kwp->pwk.equipment & (PL_EQUIP_KNUCKLES_HAMMERGLOVES | PL_EQUIP_KNUCKLES_SHOVELCLAW))
	{
		njSetMatrix(0, &mtx_KnucklesHandL);
		if (Config.Knuckles.ShovelClaw && kwp->pwk.equipment & PL_EQUIP_KNUCKLES_SHOVELCLAW)
		{
			njCnkDrawObject(CHAR_OBJECTS[162].pObject);
		}
		if (Config.Knuckles.HammerGloves && kwp->pwk.equipment & PL_EQUIP_KNUCKLES_HAMMERGLOVES)
		{
			njCnkDrawObject(CHAR_OBJECTS[164].pObject);
		}
		njSetMatrix(0, &mtx_KnucklesHandR);
		if (Config.Knuckles.ShovelClaw && kwp->pwk.equipment & PL_EQUIP_KNUCKLES_SHOVELCLAW)
		{
			njCnkDrawObject(CHAR_OBJECTS[163].pObject);
		}
		if (Config.Knuckles.HammerGloves && kwp->pwk.equipment & PL_EQUIP_KNUCKLES_HAMMERGLOVES)
		{
			njCnkDrawObject(CHAR_OBJECTS[165].pObject);
		}
	}

	njPopMatrixEx();

	njCnkSetMotionCallback(0);
}

void
DrawRougeShadow(NJS_MOTION* motion, float frame)
{
	KNUCKLES_WORK* rwp = (KNUCKLES_WORK*)playerpwp[GetCharacterPlayer(ADV2_PLNO_ROUGE)];
	pKnucklesWork = rwp;

	njCnkSetMotionCallback(RougeMotionCallBack);
	njCnkDrawMotion(CHAR_OBJECTS[171].pObject, motion, frame);

	njPushMatrixEx();

	if (Config.Rouge.TreasureScope && rwp->pwk.equipment & PL_EQUIP_ROUGE_TREASURESCOPE)
	{
		NJS_CNK_OBJECT* pobj = CHAR_OBJECTS[205].pObject;

		njSetMatrix(0, &mtx_KnucklesHead);
		njCnkDrawModel(pobj->model);

		pobj = pobj->child;

		njTranslateEx((NJS_VECTOR*)pobj->pos);

		if (rwp->someHeadAng != 0x2000)
			njRotateZ(0, rwp->someHeadAng - 0x2000);

		njCnkDrawModel(pobj->model);
	}

	if (Config.Rouge.IronBoots && rwp->pwk.equipment & PL_EQUIP_ROUGE_IRONBOOTS)
	{
		njSetMatrix(0, &mtx_KnucklesHandL);
		njCnkDrawObject(CHAR_OBJECTS[201].pObject);
		njSetMatrix(0, &mtx_KnucklesHandR);
		njCnkDrawObject(CHAR_OBJECTS[203].pObject);
	}

	if (Config.Rouge.PickNails && rwp->pwk.equipment & PL_EQUIP_ROUGE_PICKNAILS)
	{
		njSetMatrix(0, &mtx_RougeBootL);
		njCnkDrawObject(CHAR_OBJECTS[199].pObject);
		njSetMatrix(0, &mtx_RougeBootR);
		njCnkDrawObject(CHAR_OBJECTS[195].pObject);
	}

	njPopMatrixEx();

	njCnkSetMotionCallback(0);
}

void
DrawEggWalkerShadow(NJS_MOTION* motion, float frame)
{
	EWALKER_WORK* ewwp = (EWALKER_WORK*)playerpwp[GetCharacterPlayer(ADV2_PLNO_EGGWALKER)];
	pEWalkerWork = ewwp;

	njCnkSetMotionCallback(EggWalkerMotionCallBack);
	njCnkDrawMotion(CHAR_OBJECTS[248].pObject, motion, frame);

	if (Config.Eggman.Blaster)
	{
		const int num = Config.Eggman.Blaster == 2 && (ewwp->pwk.equipment & PL_EQUIP_EGGMAN_LASERBLASTER) ? 260 : 258;

		NJS_CNK_OBJECT* blaster = CHAR_OBJECTS[num].pObject;

		njSetMatrix(0, &mtx_EWalkerLaserBlaster); // Laser Blaster
		while (blaster)
		{
			njTranslateEx((NJS_POINT3*)&blaster->pos);
			njRotateEx(blaster->ang, 0);
			if (blaster->model)
				njCnkDrawModel(blaster->model);

			blaster = blaster->child;
		}
	}

	if (Config.Eggman.Cannon)
	{
		njSetMatrix(0, &mtx_EWalkerLargeCannon);
		if (Config.Eggman.Cannon == 2 && ewwp->pwk.equipment & PL_EQUIP_EGGMAN_LARGECANNON) // Large Cannon
		{
			njTranslate(0, 1.0f - njCos(ewwp->CannonRecoil), 0, 0);
			njCnkDrawObject(CHAR_OBJECTS[263].pObject);
		}
		else
		{
			njCnkDrawObject(CHAR_OBJECTS[266].pObject);
		}
	}

	if (Config.Eggman.Jets && ewwp->pwk.equipment & PL_EQUIP_EGGMAN_JETENGINE) // Jets
	{
		njPushMatrix(mtx_EWalkerJetEngineL);
		njCnkDrawObject(CHAR_OBJECTS[274].pObject);

		njSetMatrix(0, &mtx_EWalkerJetEngineR);
		njCnkDrawObject(CHAR_OBJECTS[276].pObject);

		njPopMatrixEx();
	}

	if (Config.Eggman.Armor && ewwp->pwk.equipment & PL_EQUIP_EGGMAN_PROTECTIVEARMOR) // Armor
	{
		njPushMatrix(mtx_EWalkerProtectiveArmor);
		njCnkDrawObject(CHAR_OBJECTS[278].pObject);
		njPopMatrixEx();
	}

	njCnkSetMotionCallback(0);
}

void
DrawTornadoShadow(NJS_MOTION* motion, float frame)
{
	EWALKER_WORK* ewwp = (EWALKER_WORK*)playerpwp[GetCharacterPlayer(ADV2_PLNO_TORNADO)];
	pEWalkerWork = ewwp;

	njCnkSetMotionCallback(TornadoMotionCallBack);
	njCnkDrawMotion(CHAR_OBJECTS[293].pObject, motion, frame);

	if (Config.Miles.Blaster)
	{
		const int num = Config.Miles.Blaster == 2 && (ewwp->pwk.equipment & PL_EQUIP_MILES_LASERBLASTER) ? 306 : 304;

		NJS_CNK_OBJECT* blaster = CHAR_OBJECTS[num].pObject;
		njSetMatrix(0, &mtx_EWalkerLaserBlaster);
		while (blaster)	// laser blaster
		{
			njTranslateEx((NJS_POINT3*)&blaster->pos);
			njRotateEx(blaster->ang, 0);
			if (blaster->model)
				njCnkDrawModel(blaster->model);

			blaster = blaster->child;
		}
	}

	if (Config.Miles.Bazooka)
	{
		NJS_CNK_OBJECT* bazooka;
		njSetMatrix(0, &mtx_TornadoBazooka);	// Bazooka
		if (Config.Miles.Bazooka == 2 && ewwp->pwk.equipment & PL_EQUIP_MILES_BAZOOKA)
		{
			bazooka = CHAR_OBJECTS[309].pObject;
			njTranslateEx((NJS_POINT3*)&bazooka->pos);
			njRotateEx(bazooka->ang, 0);
			njCnkDrawModel(bazooka->model);
			bazooka = bazooka->child;
			njTranslateEx((NJS_POINT3*)&bazooka->pos);
			njRotateEx(bazooka->ang, 0);
			njTranslate(0, 0, (njCos(ewwp->CannonRecoil) - 1.0f) * 1.25f, 0);
		}
		else
		{
			bazooka = CHAR_OBJECTS[312].pObject;
			njTranslateEx((NJS_POINT3*)&bazooka->pos);
			njRotateEx(bazooka->ang, 0);
		}
		njCnkDrawModel(bazooka->model);
	}

	if (Config.Miles.Booster && ewwp->pwk.equipment & PL_EQUIP_MILES_BOOSTER) // Booster
	{
		njPushMatrix(mtx_TornadoBoosterL);
		njCnkDrawObject(CHAR_OBJECTS[319].pObject);

		njSetMatrix(0, &mtx_TornadoBoosterR);
		njCnkDrawObject(CHAR_OBJECTS[321].pObject);

		njPopMatrixEx();
	}

	njCnkSetMotionCallback(0);
}

void
DrawEggmanShadow(NJS_MOTION* motion, float frame)
{
	njCnkDrawMotion(CHAR_OBJECTS[230].pObject, motion, frame);
}

void
DrawMilesShadow(NJS_MOTION* motion, float frame)
{
	pMilesWork = (MILES_WORK*)playerpwp[GetCharacterPlayer(ADV2_PLNO_TAILS)];

	njCnkSetMotionCallback(MilesMotionCallBack);
	njCnkDrawMotion(CHAR_OBJECTS[208].pObject, motion, frame);
}

void __cdecl
_CnkDrawMotionHook(NJS_CNK_OBJECT* object, NJS_MOTION* motion, float frame)
{
	if (object == CHAR_OBJECTS[48].pObject) // Sonic
	{
		DrawSonicShadow(motion, frame);
		return;
	}

	if (object == CHAR_OBJECTS[123].pObject) // Shadow
	{
		DrawShadowShadow(motion, frame);
		return;
	}

	if (object == CHAR_OBJECTS[142].pObject) // Knuckes
	{
		DrawKnucklesShadow(motion, frame);
		return;
	}

	if (object == CHAR_OBJECTS[171].pObject) // Rouge
	{
		DrawRougeShadow(motion, frame);
		return;
	}

	if (object == CHAR_OBJECTS[463].pObject || object == CHAR_OBJECTS[248].pObject) // Mech Eggman
	{
		DrawEggWalkerShadow(motion, frame);
		return;
	}

	if (object == CHAR_OBJECTS[464].pObject || object == CHAR_OBJECTS[293].pObject) // Mech Tails
	{
		DrawTornadoShadow(motion, frame);
		return;
	}

	if (object == CHAR_OBJECTS[527].pObject) // Eggman
	{
		DrawEggmanShadow(motion, frame);
		return;
	}

	if (object == CHAR_OBJECTS[528].pObject) // Miles
	{
		DrawMilesShadow(motion, frame);
		return;
	}

	njCnkDrawMotion(object, motion, frame);
}

void __declspec(naked)
njCnkDrawMotionHook()
{
	__asm
	{
		push[esp + 08h] // frame
		push ecx		// motion
		push[esp + 0Ch] // object

		call _CnkDrawMotionHook

		add esp, 4		// object
		pop ecx			// motion
		add esp, 4		// frame
		retn
	}
}