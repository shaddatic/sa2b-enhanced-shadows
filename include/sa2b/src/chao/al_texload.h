#pragma once

#include <sa2b/ninja/ninja.h>

sint32 AL_LoadTex(const ansi* filename, NJS_TEXLIST* pTexlist, uint16 lev);// lev = 0 global, 1 stage

sint32 AL_ReleaseTex(uint16 lev);