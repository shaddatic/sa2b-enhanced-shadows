#pragma once

#include <sa2b/ninja/ninja.h>

struct task;

DataRef(task*, ManagerTp, 0x01A5D144);

FuncPtr(void, __cdecl, AL_CreateShadowTex, (), 0x00540F70);
FuncPtr(NJS_CNK_OBJECT*, __cdecl, AL_AllocateShadowTex, (), 0x00541020); // Be careful of this one...
TaskFuncPtr(AL_ExecShadowTex, 0x005412E0);
TaskFuncPtr(AL_DisplayShadowTex, 0x00541370);
TaskFuncPtr(AL_DestructShadowTex, 0x00541250);

void AL_EntryShadowTex(NJS_POINT3* pos, float scl);