#pragma once

#include <sa2b/ninja/ninja.h>

typedef struct task task;

struct CNK_VN_VERTEX
{
	NJS_POINT3 Pos;
	NJS_POINT3 Normal;
};

struct AL_VERTEX_INFO
{
	NJS_POINT3 Velo;
	float Weight;
	float Spring;
	float Friction;
};

struct al_model
{
	int* VList;
	__int16* PList;
	NJS_POINT3 Center;
	float Radius;
	__int16 OrgTexId[4];
	int PListSize;
	int nbVertex;
	CNK_VN_VERTEX* pVertex;
	NJS_POINT3* pOrgVertexPos;
	NJS_POINT3* pOrgVertexNormal;
	AL_VERTEX_INFO* pVertexInfo;
};

struct AL_BUYO_PARAM
{
	float Spring1;
	float Spring2;
	float Friction1;
	float Friction2;
	float MaxDiff;
	float MaxSpd;
	float Weight1;
	float Weight2;
	float Weight3;
	NJS_POINT3 Center;
};

struct al_object
{
	uint32 EvalFlags;
	al_model* pModel;
	float Pos[3];
	sint32 Ang[3];
	float Scl[3];
	al_object* pChild;
	al_object* pSibling;
	al_object* pParent;
	NJS_POINT3 diff;
	NJS_POINT3 GlobalAimPos;
	NJS_POINT3 OrgPos;
	NJS_POINT3 Velo;
	NJS_POINT3 OrgAng;
	NJS_POINT3 AngSpd;
	float Weight;
	float Spring;
	float Friction;
	sint32 NoBuyoFlag;
	sint32 CalcBuyoPosFlag;
	cnkobj* pPartsObject;
	cnkobj* pItemObject;
	NJS_TEXLIST* pItemTexlist;
	float ItemScale;
	sint32 ItemActiveFlag;
	sint32 ItemOffsetFlag;
	NJS_POINT3 ItemOffsetPos;
	Angle3 ItemOffsetAng;
	float(*pOldMatrix)[16];
	AL_BUYO_PARAM* pBuyoParam;
	void* DisplayList;
};

struct AL_GROUP_OBJECT_LIST
{
	cnkobj* child[40];
	cnkobj* normal[40];
	cnkobj* swim[40];
	cnkobj* fly[40];
	cnkobj* run[40];
	cnkobj* power[40];
};

/* INLINE FUNC CALLS */

void	AL_GetObjectList(al_object* pSrcObject, al_object** List);

/* FUNC POINTERS */

FuncPtr(sint32, __cdecl, GetList, (al_object* pSrcObject, al_object** List, int num), 0x0056BC90);

FuncPtr(al_object*, __cdecl, AL_CopyChaoObject, (cnkobj* pSrcObject, cnkobj* pChildObject, al_object* pParentObject), 0x0056BED0);
FuncPtr(sint32, __cdecl, AL_CreateOrgVertexList, (al_object* pObject), 0x0056C800);

FuncPtr(sint32, __cdecl, AL_ShapeInit, (task* tp), 0x0056C9D0);

/* DATA POINTERS */

DataRef(float, ratio_h, 0x01DB1068);
DataRef(float, inv_ratio_h, 0x01DB1088);

DataRef(float, ratio_v, 0x01DB1084);
DataRef(float, inv_ratio_v, 0x01DB1070);

DataRef(float, ratio_g, 0x01DB102C);
DataRef(float, inv_ratio_g, 0x01DB1028);

DataRef(float, div_ratio_h, 0x01DB109C);
DataRef(float, div_ratio_v, 0x01DB108C);

DataRef(float, col_ratio_h, 0x01DB1038);
DataRef(float, col_ratio_v, 0x01DB1060);
DataRef(float, col_ratio_g, 0x01DB1054);

DataRef(float, col_inv_ratio_h, 0x01DB1098);
DataRef(float, col_inv_ratio_v, 0x01DB106C);
DataRef(float, col_inv_ratio_g, 0x01DB1078);

DataRef(float, col_div_ratio_h, 0x01DB1034);
DataRef(float, col_div_ratio_v, 0x01DB1030);

DataRef(al_object**, CurrObjectList, 0x01DB1074);

DataRef(cnkobj**, ZeroObjectList, 0x01DB1050);
DataRef(cnkobj**, NormalObjectList, 0x01DB105C);
DataRef(cnkobj**, HorizonObjectList, 0x01DB107C);
DataRef(cnkobj**, VerticalObjectList, 0x01DB1064);

DataRef(cnkobj**, ZeroObjectListH, 0x01DB1048);
DataRef(cnkobj**, NormalObjectListH, 0x01DB1058);
DataRef(cnkobj**, HorizonObjectListH, 0x01DB103C);
DataRef(cnkobj**, VerticalObjectListH, 0x01DB1090);

DataRef(cnkobj**, ZeroObjectListD, 0x01DB1080);
DataRef(cnkobj**, NormalObjectListD, 0x01DB1044);
DataRef(cnkobj**, HorizonObjectListD, 0x01DB1094);
DataRef(cnkobj**, VerticalObjectListD, 0x01DB104C);