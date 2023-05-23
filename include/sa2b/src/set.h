#pragma once

typedef union _UNION_STATUS
{
	float32 fRangeOut;
	sint32 pObjSleepCondition;
}
UNION_STATUS;

typedef struct _OBJ_EDITENTRY
{
	uint16 usID;
	sint16 rotx;
	sint16 roty;
	sint16 rotz;
	float32 xpos;
	float32 ypos;
	float32 zpos;
	float32 xscl;
	float32 yscl;
	float32 zscl;
}
OBJ_EDITENTRY;

typedef struct OBJ_CONDITION
{
	uint8 scCount;
	uint8 scUserFlag;
	sint16 ssCondition;
	task* pTask;
	_OBJ_EDITENTRY* pObjEditEntry;
	_UNION_STATUS unionStatus;
}
OBJ_CONDITION;

typedef struct _OBJ_ITEMENTRY
{
	uint8 ucInitMode;
	uint8 ucLevel;
	sint16 ssAttribute;
	float32 fRange;
	task_exec fnExec;
	char* strObjName;
}
OBJ_ITEMENTRY;

typedef struct _OBJ_ITEMTABLE
{
	sint32 slCount;
	OBJ_ITEMENTRY* pObjItemEntry;
}
OBJ_ITEMTABLE;