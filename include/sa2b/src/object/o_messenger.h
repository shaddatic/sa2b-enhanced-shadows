#pragma once

struct task;

TaskFuncPtr(ObjectMessengerCreate, 0x6C0780);
TaskFuncPtr(ObjectMessengerExec, 0x006BE2E0);
TaskFuncPtr(ObjectMessengerDestructor, 0x006C0970);

FuncUsr(sint32, LoadMsgFile_Omochao, (const char* a1), 0x006BD650)
{
	int result;
	__asm
	{
		mov eax, [a1]
		call LoadMsgFile_Omochao_p
		mov result, eax
	}
	return result;
}

FuncPtr(int, __cdecl, UnloadMsgFile_Omochao, (), 0x006BD5D0);