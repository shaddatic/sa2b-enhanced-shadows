#pragma once

#include <sa2b/src/task.h>

enum eCCL_FORM
{
	CCLForm_Sphere,
	CCLForm_Cyl1,
	CCLForm_Cyl2,
	CCLForm_Cube1,
	CCLForm_Cube2,
	CCLForm_Capsule = 0x6,
	CCLForm_Wall = 0x9
};

enum eCCL_LIST
{
	CCLList_Players,
	CCLList_Projectiles,
	CCLList_Targetable,
	CCLList_Enemies,
	CCLList_Regular,
	CCLList_Unknown_5,
	CCLList_Rings,
	CCLList_Unknown_7,
	CCLList_Unknown_8,
	CCLList_Chao
};

struct CCL_INFO
{
	char kind; // an identifier for colliding entities
	uint8 form;
	char push;
	char damage;
	unsigned int attr;
	NJS_POINT3 center;
	float a;
	float b;
	float c;
	float d;
	int angx;
	int angy;
	int angz;
};

struct c_colli_hit_info
{
	sint8 my_num;
	sint8 hit_num;
	uint16 flag;
	taskwk* hit_twp;
};

struct colliwk
{
	uint16 id;
	sint16 nbHit;
	uint16 flag;
	uint16 nbInfo;
	float32 colli_range;
	CCL_INFO* info;
	c_colli_hit_info hit_info[16]; // the first 16 entities that collide with this
	NJS_POINT3 normal;
	task* mytask;
	sint16 my_num;
	sint16 hit_num;
	colliwk* hit_cwp; // the first colliding object
};

FuncPtr(c_colli_hit_info*, __cdecl, CCL_IsHitKindEx, (task* tp, uint8 kind), 0x486760);

sint32	CCL_Init(task* tp, CCL_INFO* info, sint32 nbInfo, uint8 id);
void	CCL_Entry(task* tp);

///

taskwk* CCL_IsHitKind(task* tp, uint8 kind);
task*	CCL_IsHitKind2(task* tp, uint8 kind);

bool32	CCL_IsPushed(taskwk* twp);