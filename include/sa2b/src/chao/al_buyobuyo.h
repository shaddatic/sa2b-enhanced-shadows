#pragma once

/*
*	Abstracted Structs
*/

typedef struct task			task;

typedef struct al_object	al_object;

/*
*	Includes
*/

#include <sa2b/ninja/ninja.h>

/*
*	Enums
*/

/*
*	Structs
*/

struct AL_MOTION_INFO
{
	void*	mdata;
	float32 CurrFrame;
	uint32	nbFrame;
	void*	mdataLink;
	float32 CurrFrameLink;
	uint32	nbFrameLink;
	float32 LinkRatio;
};

/*
*	Data References
*/

DataRef(sint16,			tree_counter,	0x01AED2D4);
DataRef(AL_MOTION_INFO, MtnInfo,		0x01A276A8);

/*
*	Data Pointers
*/

/*
*	Data Arrays
*/

DataAry(NJS_VECTOR,		VertexVelo,		0x01DBD960, [256]);

/*
*	Function Pointers
*/

FuncPtr(void, __cdecl, AL_SetCurrMatrixSub, (al_object* pObject),			0x0056F010);

FuncPtr(void, __cdecl, AL_BuyoBuyoControl, (task* tp),						0x0056FC20);
FuncPtr(void, __cdecl, AL_BuyoBuyoObject, (task* tp, al_object* pObject),	0x0056F5C0);

/*
*	User Functions
*/

void	AL_InitCalcMotionMatrix(task* tp);

void	AL_CalcMotionMartix(al_object* pObject); // Not a typo
void	AL_CalcMotionMatrixTranslate(al_object* pObject);
void	AL_CalcMotionMatrixRotation(al_object* pObject);

void	AL_SetCurrMatrix(task* tp);

void	AL_CalcShadowPos(task* tp);

/*
*	Remade Functions
*/

/*
*	User Function Pointers
*/

#ifdef SAMT_INCLUDE_USER_PTRS

extern const void* AL_InitCalcMotionMatrix_p;

extern const void* AL_CalcMotionMartix_p;
extern const void* AL_CalcMotionMartixTranslate_p;
extern const void* AL_CalcMotionMartixRotation_p;

extern const void* AL_SetCurrMatrix_p;

extern const void* AL_CalcShadowPos_p;

#endif