#pragma once

#include <sa2b/src/Chao/al_behavior.h>

// CreateEggSucceed
// ALBHV_BornPon
// ALBHV_BornKyoro
// DecideNextType
// MayuExecutor
// MayuDisplayerSub
// MayuDestructor
// AL_CanISucceed
TaskFuncPtr(MayuDisplayer, 0x568A70);

FuncUsr(void, CreateMayu, (task* tp, char kind), 0x00568CD0)
{
	__asm
	{
		movzx eax, [kind]
		push eax
		mov eax, [tp]
		call CreateMayu_p
		add esp, 4
	}
}

BhavFuncPtr(ALBHV_Mayu, 0x00568D30);
BhavFuncPtr(ALBHV_Dead, 0x00568F60);