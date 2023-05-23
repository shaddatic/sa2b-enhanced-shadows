#pragma once

typedef struct task		task;
typedef struct taskwk	taskwk;
typedef struct motionwk	motionwk;
typedef struct forcewk	forcewk;
typedef struct anywk	anywk;

#define taskwk_def \
char mode; \
char smode; \
char id; \
char btimer; \
__int16 flag; \
__int16 wtimer; \
Angle3 ang; \
NJS_POINT3 pos; \
NJS_POINT3 scl; \
colliwk* cwp

#include <sa2b/ninja/ninja.h>

struct colliwk;
struct OBJ_CONDITION;

enum tasklevel : sint32
{
	LEV_0,
	LEV_1,
	LEV_2,
	LEV_3,
	LEV_4,
	LEV_5,
	LEV_6,
	LEV_C,
	LEV_M
};

struct taskwk
{
	char mode; // Action
	char smode; // Next Action
	char id;
	char btimer; // Index
	__int16 flag;
	__int16 wtimer;
	Angle3 ang;
	NJS_POINT3 pos;
	NJS_POINT3 scl;
	colliwk* cwp;
};

struct motionwk
{
	NJS_POINT3 spd;
	NJS_POINT3 acc;
	Angle3 ang_aim;
	Angle3 ang_spd;
	float force;	// rad
	float accel;	// height
	float frict;	// weight
};
/*
struct forcewk
{
	void(__cdecl* call_back)(task*, taskwk*, forcewk*);
	Angle3 ang_spd;
	NJS_POINT3 pos_spd;
};
*/
#pragma pack(push, 8)
struct forcewk
{
	void(__cdecl* call_back)(task*, taskwk*, forcewk*);
	Angle3 ang_spd;
	NJS_POINT3 pos_spd;
};
#pragma pack(pop)


struct anywk
{
	union {
		uint8 ub[16];
		sint8 sb[16];
		uint16 uw[8];
		sint16 sw[8];
		uint32 ul[4];
		sint32 sl[4];
		float32 f[4];
		void* ptr[4];
	}
	work;
};

typedef void(__cdecl* task_exec)(struct task*);

struct task
{
	struct task*	next;		/* Next Task */
	struct task*	last;		/* Last Task */
	struct task*	ptp;		/* Parent Task */
	struct task*	ctp;		/* Child Task */
	task_exec		exec;		/* Executor */
	task_exec		disp;		/* Displayer */
	task_exec		dest;		/* Destructor */
	task_exec		disp1;		/* Displayer 1 */
	task_exec		disp2;		/* Displayer 2 (Sorted) */
	task_exec		disp3;		/* Displayer 3 */
	task_exec		disp4;		/* Displayer 4 */
	task_exec		shad;		/* Shadow Displayer 5 */
	OBJ_CONDITION*	ocp;
	taskwk*			twp;		/* Task Work */
	motionwk*		mwp;		/* Motion Work */
	forcewk*		fwp;		/* Force Work */
	anywk*			awp;		/* Any Work */
	char*			name;
	char*			name2;
	void*			sdp;
};

DataAry(task*, btp, 0x1A5A254, [8]);

TaskFuncPtr(DestroyTask, 0x046F720);

FuncPtr(task*, __cdecl, CreateChildTask, (sint16 im, task_exec exec, task* tp), 0x470C00);

#define TELE_NUL 0x00
#define TELE_MWK 0x01
#define TELE_TWK 0x02
#define TELE_FWK 0x04
#define TELE_AWK 0x08
#define TELE_ALL 0x0F

task*	CreateElementalTask(uint8 im, sint32 level, task_exec exec, const ansi* name);

void	FreeTask(task* tp);

void	no_op(task* tp);