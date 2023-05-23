#pragma once

struct taskwk;

TaskFuncPtr(ALO_HorseExecutor, 0x00580BC0);

FuncUsr(taskwk*, ALO_HorseCreateTask, (const NJS_POINT3* pPos), 0x00580F30)
{
	taskwk* result;
	__asm
	{
		mov ebx, [pPos]
		call ALO_HorseCreateTask_p
		mov result, eax
	}
	return result;
}