#pragma once

#define SE(BANK, INDX) ((BANK * 0x1000) + INDX)

#include <sa2b/ninja/ninja.h>

void	SE_Call(int SoundID, void* ptask, char unk, char volume);

void	SE_Call_TIMER(int SoundID, void* pTask, char Unk, signed char Volume, __int16 PlayTime);

sint8	SE_CallV2(int SoundID, NJS_POINT3* Location, void* pTask, char a4, char Volume);

sint8	SE_CallV2_TIMER(void* pTask, int SoundID, NJS_POINT3* Location, char a4, char Volume, __int16 TimerSomething);

char	SE_CallV2_Loop(void* task, int SoundID, NJS_POINT3* pPos, sint8 volume);

uint32* SE_Add_Volume(__int8 a1, void* a2, int a3);

uint32* SE_Add_Pitch(signed __int16 Pitch, void* pTask, int SoundID);