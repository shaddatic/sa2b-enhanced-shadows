#pragma once

#define BhavFuncPtr(NAME, ADDR) FuncPtr(sint32, __cdecl, NAME, (task* tp), ADDR)

struct task;

typedef sint32(__cdecl* BHV_FUNC)(task*);

enum  : sint32
{
	BHV_RET_CONTINUE,
	BHV_RET_FINISH,
	BHV_RET_THINK,
	BHV_RET_BREAK,
};

void	AL_SetBehavior(task* tp, BHV_FUNC bhav);

void	AL_SetBehaviorWithTimer(task* tp, BHV_FUNC bhav, int timer);

void	AL_SetNextBehavior(task* tp, BHV_FUNC bhav);

/* BEHAVIOR FUNCTIONS */


/* albhv_common */


/* albhv_sleep */

BhavFuncPtr(ALBHV_Climb, 0x00562EB0);
BhavFuncPtr(ALBHV_Swim, 0x00562330);
BhavFuncPtr(ALBHV_JumpToPond, 0x005A0F40);
BhavFuncPtr(ALBHV_Glide, 0x005630C0);
BhavFuncPtr(ALBHV_SwimPuha, 0x00562160);

BhavFuncPtr(ALBHV_NoticePlayer, 0x005634D0);
BhavFuncPtr(ALBHV_Eat, 0x005607C0);

BhavFuncPtr(ALBHV_TurnToFruit, 0x00569240);