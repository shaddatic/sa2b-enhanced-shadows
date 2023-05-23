/*
	Custom Ninja Library

	COPYRIGHT No-one probably lol
*/

/*
*	This header file contains Ninja data not actually directly included in the original libraries
*/

#ifndef _NINJA_MISC_H_
#define _NINJA_MISC_H_

/*
*	Data References
*/

DataRef(uint32, __control_3d_flag_,		0x01DEB6A4);
DataRef(uint32, __constant_attr_and_,	0x01DEB6A8);
DataRef(uint32, __constant_attr_or_,	0x01DEB6A0);

/*
*	Function Pointers
*/

FuncPtr(void, __cdecl, _njCnkTransformObject, (NJS_CNK_OBJECT* object, int(__cdecl* callback)(NJS_CNK_MODEL*)), 0x42EB30);

/*
*	User Functions
*/

sint32 njCnkModelClip(NJS_CNK_MODEL* model);

/*
*	Remade Functions
*/

void	SaveControl3D();
void	LoadControl3D();

void	OnControl3D(uint32 flag);
void	OffControl3D(uint32 flag);

void	SaveConstantAttr();
void	LoadConstantAttr();

void	OnConstantAttr(uint32 soc_and, uint32 soc_or);
void	OffConstantAttr(uint32 soc_and, uint32 soc_or);

/*
*	User Function Pointers
*/

#ifdef SAMT_INCLUDE_USER_PTRS

extern const void* njCnkModelClip_p;

#endif

#endif /* _NINJA_MISC_H_ */