/*
	Ninja Library
	
	COPYRIGHT (C) SEGA ENTERSRISES,LTD.
*/

#ifndef _NINJA_DEF_H_
#define _NINJA_DEF_H_

/*--------------------------------------*/
/*      BIT                             */
/*--------------------------------------*/
enum {
	_BIT0,  _BIT1,  _BIT2,  _BIT3,  _BIT4,  _BIT5,  _BIT6,  _BIT7,
	_BIT8,  _BIT9,  _BIT10, _BIT11, _BIT12, _BIT13, _BIT14, _BIT15,
	_BIT16, _BIT17, _BIT18, _BIT19, _BIT20, _BIT21, _BIT22, _BIT23,
	_BIT24, _BIT25, _BIT26, _BIT27, _BIT28, _BIT29, _BIT30, _BIT31
};

#define BIT_0   (1<<_BIT0)
#define BIT_1   (1<<_BIT1)
#define BIT_2   (1<<_BIT2)
#define BIT_3   (1<<_BIT3)
#define BIT_4   (1<<_BIT4)
#define BIT_5   (1<<_BIT5)
#define BIT_6   (1<<_BIT6)
#define BIT_7   (1<<_BIT7)
#define BIT_8   (1<<_BIT8)
#define BIT_9   (1<<_BIT9)
#define BIT_10  (1<<_BIT10)
#define BIT_11  (1<<_BIT11)
#define BIT_12  (1<<_BIT12)
#define BIT_13  (1<<_BIT13)
#define BIT_14  (1<<_BIT14)
#define BIT_15  (1<<_BIT15)
#define BIT_16  (1<<_BIT16)
#define BIT_17  (1<<_BIT17)
#define BIT_18  (1<<_BIT18)
#define BIT_19  (1<<_BIT19)
#define BIT_20  (1<<_BIT20)
#define BIT_21  (1<<_BIT21)
#define BIT_22  (1<<_BIT22)
#define BIT_23  (1<<_BIT23)
#define BIT_24  (1<<_BIT24)
#define BIT_25  (1<<_BIT25)
#define BIT_26  (1<<_BIT26)
#define BIT_27  (1<<_BIT27)
#define BIT_28  (1<<_BIT28)
#define BIT_29  (1<<_BIT29)
#define BIT_30  (1<<_BIT30)
#define BIT_31  (1<<_BIT31)


/*--------------------------------------*/
/*      Basic Define                    */
/*--------------------------------------*/
typedef int			Int;

typedef sint32		Angle;

typedef float32		NJS_MATRIX[12];

typedef float32		NJS_FOG_TABLE[128];

/*--------------------------------------*/
/*      SCREEN RESOLUTION               */
/*--------------------------------------*/
#define NJD_DSP_NTSC		(0x0)
#define NJD_DSP_VGA			(0x1)
#define NJD_DSP_PAL			(0x2)

#define NJD_DSP_NONINTER 	(0x00)
#define NJD_DSP_INTER    	(0x04)
#define NJD_DSP_PSINTER  	(0x08)

#define NJD_DSP_WIDTH_320	(0x000)
#define NJD_DSP_WIDTH_640	(0x010)

#define NJD_DSP_HEIGHT_240	(0x000)
#define NJD_DSP_HEIGHT_480	(0x020)

#define NJD_DSP_320x240		(NJD_DSP_WIDTH_320|NJD_DSP_HEIGHT_240)
#define NJD_DSP_640x240		(NJD_DSP_WIDTH_640|NJD_DSP_HEIGHT_240)
#define NJD_DSP_320x480		(NJD_DSP_WIDTH_320|NJD_DSP_HEIGHT_480)
#define NJD_DSP_640x480		(NJD_DSP_WIDTH_640|NJD_DSP_HEIGHT_480)

#define NJD_DSP_ANTI	(0x00010000)	

#define	NJD_RESOLUTION_VGA					(NJD_DSP_VGA)
#define	NJD_RESOLUTION_320x240_NTSCNI		(NJD_DSP_NTSC|NJD_DSP_NONINTER|NJD_DSP_320x240)
#define	NJD_RESOLUTION_320x240_NTSCI		(NJD_DSP_NTSC|NJD_DSP_INTER   |NJD_DSP_320x240)
#define	NJD_RESOLUTION_640x240_NTSCNI		(NJD_DSP_NTSC|NJD_DSP_NONINTER|NJD_DSP_640x240)
#define	NJD_RESOLUTION_640x240_NTSCI		(NJD_DSP_NTSC|NJD_DSP_INTER   |NJD_DSP_640x240)
#define	NJD_RESOLUTION_320x480_NTSCNI_FF 	(NJD_DSP_NTSC|NJD_DSP_NONINTER|NJD_DSP_320x480)
#define	NJD_RESOLUTION_320x480_NTSCNI		(NJD_DSP_NTSC|NJD_DSP_PSINTER |NJD_DSP_320x480)
#define	NJD_RESOLUTION_320x480_NTSCI		(NJD_DSP_NTSC|NJD_DSP_INTER   |NJD_DSP_320x480)
#define	NJD_RESOLUTION_640x480_NTSCNI_FF 	(NJD_DSP_NTSC|NJD_DSP_NONINTER|NJD_DSP_640x480)
#define NJD_RESOLUTION_640x480_NTSCNI	 	(NJD_DSP_NTSC|NJD_DSP_PSINTER |NJD_DSP_640x480)
#define	NJD_RESOLUTION_640x480_NTSCI		(NJD_DSP_NTSC|NJD_DSP_INTER   |NJD_DSP_640x480)
#define	NJD_RESOLUTION_320x240_PALNI		(NJD_DSP_PAL |NJD_DSP_NONINTER|NJD_DSP_320x240)
#define	NJD_RESOLUTION_320x240_PALI			(NJD_DSP_PAL |NJD_DSP_INTER   |NJD_DSP_320x240)
#define	NJD_RESOLUTION_640x240_PALNI		(NJD_DSP_PAL |NJD_DSP_NONINTER|NJD_DSP_640x240)
#define	NJD_RESOLUTION_640x240_PALI			(NJD_DSP_PAL |NJD_DSP_INTER   |NJD_DSP_640x240)
#define	NJD_RESOLUTION_320x480_PALNI_FF		(NJD_DSP_PAL |NJD_DSP_NONINTER|NJD_DSP_320x480)
#define	NJD_RESOLUTION_320x480_PALNI		(NJD_DSP_PAL |NJD_DSP_PSINTER |NJD_DSP_320x480)
#define	NJD_RESOLUTION_320x480_PALI			(NJD_DSP_PAL |NJD_DSP_INTER   |NJD_DSP_320x480)
#define	NJD_RESOLUTION_640x480_PALNI_FF		(NJD_DSP_PAL |NJD_DSP_NONINTER|NJD_DSP_640x480)
#define	NJD_RESOLUTION_640x480_PALNI		(NJD_DSP_PAL |NJD_DSP_PSINTER |NJD_DSP_640x480)
#define	NJD_RESOLUTION_640x480_PALI			(NJD_DSP_PAL |NJD_DSP_INTER   |NJD_DSP_640x480)

#define	NJD_RESOLUTION_VGA_ANTI					(NJD_RESOLUTION_VGA				 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x240_NTSCNI_ANTI		(NJD_RESOLUTION_320x240_NTSCNI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x240_NTSCI_ANTI		(NJD_RESOLUTION_320x240_NTSCI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x240_NTSCNI_ANTI		(NJD_RESOLUTION_640x240_NTSCNI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x240_NTSCI_ANTI		(NJD_RESOLUTION_640x240_NTSCI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x480_NTSCNI_FF_ANTI 	(NJD_RESOLUTION_320x480_NTSCNI_FF|NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x480_NTSCNI_ANTI		(NJD_RESOLUTION_320x480_NTSCNI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x480_NTSCI_ANTI		(NJD_RESOLUTION_320x480_NTSCI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x480_NTSCNI_FF_ANTI 	(NJD_RESOLUTION_640x480_NTSCNI_FF|NJD_DSP_ANTI)
#define NJD_RESOLUTION_640x480_NTSCNI_ANTI	 	(NJD_RESOLUTION_640x480_NTSCNI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x480_NTSCI_ANTI		(NJD_RESOLUTION_640x480_NTSCI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x240_PALNI_ANTI		(NJD_RESOLUTION_320x240_PALNI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x240_PALI_ANTI		(NJD_RESOLUTION_320x240_PALI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x240_PALNI_ANTI		(NJD_RESOLUTION_640x240_PALNI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x240_PALI_ANTI		(NJD_RESOLUTION_640x240_PALI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x480_PALNI_FF_ANTI	(NJD_RESOLUTION_320x480_PALNI_FF |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x480_PALNI_ANTI		(NJD_RESOLUTION_320x480_PALNI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_320x480_PALI_ANTI		(NJD_RESOLUTION_320x480_PALI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x480_PALNI_FF_ANTI	(NJD_RESOLUTION_640x480_PALNI_FF |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x480_PALNI_ANTI		(NJD_RESOLUTION_640x480_PALNI	 |NJD_DSP_ANTI)
#define	NJD_RESOLUTION_640x480_PALI_ANTI		(NJD_RESOLUTION_640x480_PALI	 |NJD_DSP_ANTI)

#define NJD_RESOLUTION_320x240_VGA       	(NJD_DSP_VGA |NJD_DSP_NONINTER|NJD_DSP_320x240)
#define NJD_RESOLUTION_320x480_VGA       	(NJD_DSP_VGA |NJD_DSP_NONINTER|NJD_DSP_320x480)
#define NJD_RESOLUTION_640x240_VGA       	(NJD_DSP_VGA |NJD_DSP_NONINTER|NJD_DSP_640x240)
#define NJD_RESOLUTION_320x240_VGA_ANTI       	(NJD_RESOLUTION_320x240_VGA		 |NJD_DSP_ANTI)
#define NJD_RESOLUTION_320x480_VGA_ANTI       	(NJD_RESOLUTION_320x480_VGA		 |NJD_DSP_ANTI)
#define NJD_RESOLUTION_640x240_VGA_ANTI       	(NJD_RESOLUTION_640x240_VGA		 |NJD_DSP_ANTI)

#define NJD_VIDEO_MASK	(0x00000003)
#define NJD_DSP_MASK	(0x00000FFF)
#define NJD_WIDTH_MASK 	(NJD_DSP_WIDTH_640)
#define NJD_HEIGHT_MASK	(NJD_DSP_HEIGHT_480)

/*--------------------------------------*/
/*      FRAME BUFFER MODE               */
/*--------------------------------------*/
#define	NJD_FRAMEBUFFER_MODE_RGB565				0
#define	NJD_FRAMEBUFFER_MODE_RGB555				1
#define	NJD_FRAMEBUFFER_MODE_ARGB1555			3
#define	NJD_FRAMEBUFFER_MODE_RGB888				4
#define	NJD_FRAMEBUFFER_MODE_ARGB8888			5

/*--------------------------------------*/
/*      COLOR MODE		               */
/*--------------------------------------*/
#define NJD_ARC1_NORMAL			(0x00000002)
#define NJD_ARC1_TEXTURE		(0x0000000A)
#define NJD_ARC1_NORMAL_FLAT	(0x00000000)
#define NJD_ARC1_TEXTURE_FLAT	(0x00000008)

#define NJD_ARC1_HIGHLIGHT		(0x00000004)
#define NJD_ARC1_OPAQUE			(0x00080000)
#define NJD_ARC1_TRANS			(0x02100000)
#define NJD_ARC1_INTENSITY		(0x00000020)
#define NJD_ARC1_PACKED			(0x00000000)
#define NJD_ARC1_FLOAT			(0x00000010)

#define NJD_ARC1_UV32_FLOAT		(0x00000000)
#define NJD_ARC1_UV16_FLOAT		(0x00000001)

#define	NJD_COLOR_MODE_NORMAL						(NJD_ARC1_NORMAL|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_TEXTURE						(NJD_ARC1_TEXTURE|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_FLAT_NORMAL					(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_FLAT_TEXTURE					(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_NORMAL				(NJD_ARC1_NORMAL|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_TEXTURE			(NJD_ARC1_TEXTURE|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_NORMAL		(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_TEXTURE		(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_NORMAL_TRANS					(NJD_ARC1_NORMAL|NJD_ARC1_TRANS|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_TEXTURE_TRANS				(NJD_ARC1_TEXTURE|NJD_ARC1_TRANS|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_FLAT_NORMAL_TRANS			(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_TRANS|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_FLAT_TEXTURE_TRANS			(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_TRANS|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_NORMAL_TRANS		(NJD_ARC1_NORMAL|NJD_ARC1_TRANS|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_TEXTURE_TRANS		(NJD_ARC1_TEXTURE|NJD_ARC1_TRANS|NJD_ARC1_FLOAT|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_NORMAL_TRANS	(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_TRANS|NJD_ARC1_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_TEXTURE_TRANS	(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_TRANS|NJD_ARC1_FLOAT|NJD_ARC1_HIGHLIGHT)

#define	NJD_COLOR_MODE_TEXTURE_UV16							(NJD_ARC1_TEXTURE|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT|NJD_ARC1_UV16_FLOAT)
#define	NJD_COLOR_MODE_FLAT_TEXTURE_UV16					(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT|NJD_ARC1_UV16_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_TEXTURE_UV16				(NJD_ARC1_TEXTURE|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT|NJD_ARC1_HIGHLIGHT|NJD_ARC1_UV16_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_TEXTURE_UV16			(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_FLOAT|NJD_ARC1_HIGHLIGHT|NJD_ARC1_UV16_FLOAT)
#define	NJD_COLOR_MODE_TEXTURE_TRANS_UV16					(NJD_ARC1_TEXTURE|NJD_ARC1_TRANS|NJD_ARC1_FLOAT|NJD_ARC1_UV16_FLOAT)
#define	NJD_COLOR_MODE_FLAT_TEXTURE_TRANS_UV16				(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_TRANS|NJD_ARC1_FLOAT|NJD_ARC1_UV16_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_TEXTURE_TRANS_UV16			(NJD_ARC1_TEXTURE|NJD_ARC1_TRANS|NJD_ARC1_FLOAT|NJD_ARC1_HIGHLIGHT|NJD_ARC1_UV16_FLOAT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_TEXTURE_TRANS_UV16	(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_TRANS|NJD_ARC1_FLOAT|NJD_ARC1_HIGHLIGHT|NJD_ARC1_UV16_FLOAT)


#define	NJD_COLOR_MODE_INTENSITY_NORMAL							(NJD_ARC1_NORMAL|NJD_ARC1_OPAQUE|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_INTENSITY_TEXTURE						(NJD_ARC1_TEXTURE|NJD_ARC1_OPAQUE|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_FLAT_INTENSITY_NORMAL					(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_FLAT_INTENSITY_TEXTURE					(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_HIGHLIGHT_INTENSITY_NORMAL				(NJD_ARC1_NORMAL|NJD_ARC1_OPAQUE|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_HIGHLIGHT_INTENSITY_TEXTURE				(NJD_ARC1_TEXTURE|NJD_ARC1_OPAQUE|NJD_ARC1_INTENSITY|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_INTENSITY_NORMAL			(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_INTENSITY_TEXTURE			(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_INTENSITY|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_INTENSITY_NORMAL_TRANS					(NJD_ARC1_NORMAL|NJD_ARC1_TRANS|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_INTENSITY_TEXTURE_TRANS					(NJD_ARC1_TEXTURE|NJD_ARC1_TRANS|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_FLAT_INTENSITY_NORMAL_TRANS				(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_TRANS|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_FLAT_INTENSITY_TEXTURE_TRANS				(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_TRANS|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_HIGHLIGHT_INTENSITY_NORMAL_TRANS			(NJD_ARC1_NORMAL|NJD_ARC1_TRANS|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_HIGHLIGHT_INTENSITY_TEXTURE_TRANS		(NJD_ARC1_TEXTURE|NJD_ARC1_TRANS|NJD_ARC1_INTENSITY|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_INTENSITY_NORMAL_TRANS	(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_TRANS|NJD_ARC1_INTENSITY)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_INTENSITY_TEXTURE_TRANS	(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_TRANS|NJD_ARC1_INTENSITY|NJD_ARC1_HIGHLIGHT)

#define	NJD_COLOR_MODE_PACKED_NORMAL						(NJD_ARC1_NORMAL|NJD_ARC1_OPAQUE|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_PACKED_TEXTURE						(NJD_ARC1_TEXTURE|NJD_ARC1_OPAQUE|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_FLAT_PACKED_NORMAL					(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_FLAT_PACKED_TEXTURE					(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_HIGHLIGHT_PACKED_NORMAL				(NJD_ARC1_NORMAL|NJD_ARC1_OPAQUE|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_HIGHLIGHT_PACKED_TEXTURE				(NJD_ARC1_TEXTURE|NJD_ARC1_OPAQUE|NJD_ARC1_PACKED|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_PACKED_NORMAL			(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_PACKED_TEXTURE		(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_OPAQUE|NJD_ARC1_PACKED|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_PACKED_NORMAL_TRANS					(NJD_ARC1_NORMAL|NJD_ARC1_TRANS|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_PACKED_TEXTURE_TRANS					(NJD_ARC1_TEXTURE|NJD_ARC1_TRANS|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_FLAT_PACKED_NORMAL_TRANS				(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_TRANS|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_FLAT_PACKED_TEXTURE_TRANS			(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_TRANS|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_HIGHLIGHT_PACKED_NORMAL_TRANS		(NJD_ARC1_NORMAL|NJD_ARC1_TRANS|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_HIGHLIGHT_PACKED_TEXTURE_TRANS		(NJD_ARC1_TEXTURE|NJD_ARC1_TRANS|NJD_ARC1_PACKED|NJD_ARC1_HIGHLIGHT)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_PACKED_NORMAL_TRANS	(NJD_ARC1_NORMAL_FLAT|NJD_ARC1_TRANS|NJD_ARC1_PACKED)
#define	NJD_COLOR_MODE_HIGHLIGHT_FLAT_PACKED_TEXTURE_TRANS	(NJD_ARC1_TEXTURE_FLAT|NJD_ARC1_TRANS|NJD_ARC1_PACKED|NJD_ARC1_HIGHLIGHT)

/*--------------------------------------*/
/*      Render Mode Define              */
/*--------------------------------------*/
/* Culling Mode */
#define NJD_POLYGON_NOCULLING        0
#define NJD_POLYGON_CULLINGSMALL     1
#define NJD_POLYGON_CULLINGACW       2
#define NJD_POLYGON_CULLINGCW        3

/* Color Blending Mode */
/* Target */
#define NJD_SOURCE_COLOR                     0
#define NJD_DESTINATION_COLOR                1
/* Mode */
#define NJD_COLOR_BLENDING_BOTHINVALPHA     0
#define NJD_COLOR_BLENDING_BOTHSRCALPHA     1
#define NJD_COLOR_BLENDING_DESTALPHA        2
#define NJD_COLOR_BLENDING_DESTCOLOR        3
#define NJD_COLOR_BLENDING_INVDESTALPHA     4
#define NJD_COLOR_BLENDING_INVDESTCOLOR     5
#define NJD_COLOR_BLENDING_INVSRCALPHA      6
#define NJD_COLOR_BLENDING_INVSRCCOLOR      7
#define NJD_COLOR_BLENDING_SRCALPHA         8
#define NJD_COLOR_BLENDING_SRCCOLOR         9
#define NJD_COLOR_BLENDING_ONE              10
#define NJD_COLOR_BLENDING_ZERO             11

/* Texture Shading Mode */
#define NJD_TEX_SHADING_MODE_MODULATE       0
#define NJD_TEX_SHADING_MODE_DECALALPHA     1
#define NJD_TEX_SHADING_MODE_MODULATEALPHA  2
#define NJD_TEX_SHADING_MODE_DECAL		    3

/* UserClippingMode */
#define NJD_CLIP_DISABLE					0
#define NJD_CLIP_RESERVE					1
#define NJD_CLIP_INSIDE						2
#define NJD_CLIP_OUTSIDE					3

/*--------------------------------------*/
/*      SYSTEM ATTR SIZE                */
/*--------------------------------------*/
#define NJD_SYS_ATTR_SIZE 					192

/*--------------------------------------*/
/*      FATAL ERROR CALL BACK           */
/*--------------------------------------*/
#define NJD_FATAL_ERR_NOQEUE_INTR			(1)
#define NJD_FATAL_ERR_OVERFLW_VTXBUF		(2)
#define NJD_FATAL_ERR_TOO_MANY_VTX			(3)
#define NJD_FATAL_ERR_V_NOT_RESPOND			(4)

/*--------------------------------------*/
/*      Texture Define                  */
/*--------------------------------------*/
/* Texture Size */
#define NJD_TEXSIZE_1					1
#define NJD_TEXSIZE_2					2
#define NJD_TEXSIZE_4					4
#define NJD_TEXSIZE_8					8
#define NJD_TEXSIZE_16					16
#define NJD_TEXSIZE_32					32
#define NJD_TEXSIZE_64					64
#define NJD_TEXSIZE_128					128
#define NJD_TEXSIZE_256					256
#define NJD_TEXSIZE_512					512
#define NJD_TEXSIZE_1024				1024

/* Texture Attr */
/*
|31 -  21|20 - 17|16          |15 - 0|
 texattr reserved texcontinue  pvmentryId
*/
#define NJD_TEXATTR_TYPE_FILE			0
#define NJD_TEXATTR_CACHE				BIT_31
#define NJD_TEXATTR_TYPE_MEMORY			BIT_30
#define NJD_TEXATTR_BOTH				BIT_29
#define NJD_TEXATTR_TYPE_FRAMEBUFFER	BIT_28

#define NJD_TEXATTR_READAREA_MASK		(BIT_31|BIT_29)
#define NJD_TEXATTR_READTYPE_MASK		(BIT_30|BIT_28)

#define NJD_TEXATTR_PALGLOBALINDEX		BIT_24
#define NJD_TEXATTR_GLOBALINDEX			BIT_23
#define NJD_TEXATTR_AUTOMIPMAP			BIT_22
#define	NJD_TEXATTR_AUTODITHER			BIT_21
#define NJD_TEXATTR_MASK				0xFFFE0000

#define NJD_TEXATTR_TEXCONTINUE			BIT_16


/*
	texaddr
	|31 - 26|25   -     0|
	  bank    globalIndex
*/
#define NJD_TEXBANK_SHIFT			(26)
#define NJD_TEXBANK_MASK			(0xFC000000)
#define NJD_TEXPALGLOBAL_MASK		(0x03FFFFFF)

/* Texture Color Format */
#define NJD_TEXFMT_ARGB_1555            (0x00)
#define NJD_TEXFMT_RGB_565              (0x01)
#define NJD_TEXFMT_ARGB_4444            (0x02)
#define NJD_TEXFMT_YUV_422				(0x03)
#define NJD_TEXFMT_BUMP					(0x04)
#define NJD_TEXFMT_RGB_555				(0x05)
#define NJD_TEXFMT_ARGB_8888 			(0x06)
#define NJD_TEXFMT_YUV_420	 			(0x06)
#define NJD_TEXFMT_COLOR_MASK			(0xFF)

#define NJD_TEXFMT_TWIDDLED	            (0x0100)
#define NJD_TEXFMT_TWIDDLED_MM	        (0x0200)
#define NJD_TEXFMT_VQ	                (0x0300)
#define NJD_TEXFMT_VQ_MM	            (0x0400)
#define NJD_TEXFMT_PALETTIZE4	        (0x0500)
#define NJD_TEXFMT_PALETTIZE4_MM	    (0x0600)
#define NJD_TEXFMT_PALETTIZE8	        (0x0700)
#define NJD_TEXFMT_PALETTIZE8_MM	    (0x0800)
#define NJD_TEXFMT_RECTANGLE	        (0x0900)
#define NJD_TEXFMT_STRIDE	            (0x0B00)
#define NJD_TEXFMT_TWIDDLED_RECTANGLE	(0x0D00)
#define NJD_TEXFMT_ABGR					(0x0E00)
#define NJD_TEXFMT_ABGR_MM				(0x0F00)

#define NJD_TEXFMT_SMALLVQ              (0x1000)
#define NJD_TEXFMT_SMALLVQ_MM           (0x1100)

#define NJD_TEXFMT_TYPE_MASK           	(0xFF00)

#define NJD_TEXMEM_FREESIZE				(0x00000000)
#define NJD_TEXMEM_MAXBLOCK				(0x00000001)
#define NJD_TEXMEM_MAXSIZE				(0x00000002)

#define NJD_TEXERR_OTHER				(1)
#define NJD_TEXERR_FILEOPEN				(2)
#define NJD_TEXERR_EXTND				(3)
#define NJD_TEXERR_HEADER				(4)
#define NJD_TEXERR_FILELOAD				(5)
#define NJD_TEXERR_SURFACE				(6)
#define NJD_TEXERR_MAINMEMORY			(7)
#define NJD_TEXERR_TEXMEMLOAD			(8)
#define NJD_TEXERR_GLOBALINDEX			(9)

#define NJD_START_GLOBALINEX 			(0xFFFFFFEF)
#define NJD_GLOBAXINDEX_FIRST_VAL 		(0xFFFFFFFF)
#define NJD_BANK_FIRST_VAL 				(0xFFFFFFFF)

#define NJD_TEXMEMFLAG_CACHE			BIT_0
#define NJD_TEXMEMFLAG_TEXMEM			BIT_1

#define NJD_GD_SECT_SIZE 		2048

/* Palette Color bpp */
#define NJD_TEXPALETTE_16BPP	16
#define NJD_TEXPALETTE_32BPP	32

#define NJD_TEX_STAT_READ 	0
#define NJD_TEX_STAT_END   	1
#define NJD_TEX_STAT_OPEN 	2
#define NJD_TEX_STAT_RWAIT 	4
#define NJD_TEX_STAT_LOAD 	5
#define NJD_TEX_STAT_LWAIT 	6
#define NJD_TEX_STAT_CLOSE 	7
#define NJD_TEX_STAT_ERR   -1

/* Pixelformat */
#define NJD_PIXELFORMAT_ARGB1555		(0x00000000)
#define NJD_PIXELFORMAT_RGB565			(0x08000000)
#define NJD_PIXELFORMAT_ARGB4444		(0x10000000)
#define NJD_PIXELFORMAT_YUV422			(0x18000000)
#define NJD_PIXELFORMAT_BUMP			(0x20000000)
#define NJD_PIXELFORMAT_PALETTIZED_4BPP	(0x28000000)
#define NJD_PIXELFORMAT_PALETTIZED_8BPP	(0x30000000)

/* Surfaceflag */
#define NJD_SURFACEFLAGS_MIPMAPED		BIT_0
#define NJD_SURFACEFLAGS_CHROMAKEYFIX	BIT_1
#define NJD_SURFACEFLAGS_TWIDDLED		BIT_2
#define NJD_SURFACEFLAGS_VQ				BIT_3
#define NJD_SURFACEFLAGS_STRIDE			BIT_4
#define NJD_SURFACEFLAGS_PALETTIZED		BIT_5

/*--------------------------------------*/
/*      Model Define                    */
/*--------------------------------------*/
#define NJD_EVAL_UNIT_POS  BIT_0     /* ignore translation */
#define NJD_EVAL_UNIT_ANG  BIT_1     /* ignore rotation */
#define NJD_EVAL_UNIT_SCL  BIT_2     /* ignore scaling */
#define NJD_EVAL_HIDE      BIT_3    /* do not draw model */
#define NJD_EVAL_BREAK     BIT_4     /* terminate tracing children */
#define NJD_EVAL_ZXY_ANG   BIT_5 
#define NJD_EVAL_SKIP		BIT_6
#define NJD_EVAL_SHAPE_SKIP	BIT_7
#define NJD_EVAL_CLIP		BIT_8
#define NJD_EVAL_MASK       0x1ff 

/* SRC Alpha Instr(31-29) */
#define NJD_SA_ZERO			(0) 					 /* 0 zero                */
#define NJD_SA_ONE			(BIT_29)				 /* 1 one   	          */
#define NJD_SA_OTHER		(BIT_30)				 /* 2 Other Color		  */
#define NJD_SA_INV_OTHER	(BIT_30|BIT_29)			 /* 3 Inverse Other Color */
#define NJD_SA_SRC 			(BIT_31)		         /* 4 SRC Alpha	          */
#define NJD_SA_INV_SRC		(BIT_31|BIT_29)	         /* 5 Inverse SRC Alpha   */
#define NJD_SA_DST			(BIT_31|BIT_30)			 /* 6 DST Alpha           */
#define NJD_SA_INV_DST		(BIT_31|BIT_30|BIT_29)   /* 7 Inverse DST Alpha   */
#define NJD_SA_MASK			(BIT_31|BIT_30|BIT_29)	 /* MASK          		  */

/* DST Alpha Instr(28-26) */
#define NJD_DA_ZERO			(0) 					 /* 0 zero                */
#define NJD_DA_ONE			(BIT_26) 				 /* 1 one   	          */
#define NJD_DA_OTHER		(BIT_27)				 /* 2 Other Color		  */
#define NJD_DA_INV_OTHER	(BIT_27|BIT_26)			 /* 3 Inverse Other Color */
#define NJD_DA_SRC 			(BIT_28)				 /* 4 SRC Alpha	          */
#define NJD_DA_INV_SRC		(BIT_28|BIT_26)			 /* 5 Inverse SRC Alpha   */
#define NJD_DA_DST			(BIT_28|BIT_27)			 /* 6 DST Alpha           */
#define NJD_DA_INV_DST		(BIT_28|BIT_27|BIT_26)	 /* 7 Inverse DST Alpha   */
#define NJD_DA_MASK			(BIT_28|BIT_27|BIT_26)	 /* MASK		          */

/* filter mode */
#define NJD_FILTER_POINT	(0)
#define NJD_FILTER_BILINEAR	(BIT_13)
#define NJD_FILTER_TRILINEAR	(BIT_14)
#define NJD_FILTER_BLEND	(BIT_14|BIT_13)
#define NJD_FILTER_MASK		(BIT_14|BIT_13)

/* Mip-Map 'D' adjust */
#define NJD_D_025	(BIT_8)						/* 0.25		*/
#define NJD_D_050	(BIT_9)						/* 0.50		*/
#define NJD_D_075	(BIT_9|BIT_8)				/* 0.75		*/
#define NJD_D_100	(BIT_10)					/* 1.00		*/
#define NJD_D_125	(BIT_10|BIT_8)				/* 1.25		*/
#define NJD_D_150	(BIT_10|BIT_9)				/* 1.50		*/
#define NJD_D_175	(BIT_10|BIT_9|BIT_8)		/* 1.75		*/
#define NJD_D_200	(BIT_11)					/* 2.00		*/
#define NJD_D_225	(BIT_11|BIT_8)				/* 2.25		*/
#define NJD_D_250	(BIT_11|BIT_9)				/* 2.50		*/
#define NJD_D_275	(BIT_11|BIT_9|BIT_8)		/* 2.75		*/
#define NJD_D_300	(BIT_11|BIT_10)		        /* 3.00		*/
#define NJD_D_325	(BIT_11|BIT_10|BIT_8)		/* 3.25		*/
#define NJD_D_350	(BIT_11|BIT_10|BIT_9)		/* 3.50		*/
#define NJD_D_375	(BIT_11|BIT_10|BIT_9|BIT_8)	/* 3.75		*/
#define NJD_D_MASK	(BIT_11|BIT_10|BIT_9|BIT_8)	/* MASK	        */

/* flags */
#define NJD_FLAG_IGNORE_LIGHT		(BIT_25)
#define NJD_FLAG_USE_FLAT			(BIT_24)
#define NJD_FLAG_DOUBLE_SIDE		(BIT_23)
#define NJD_FLAG_USE_ENV			(BIT_22)
#define NJD_FLAG_USE_TEXTURE		(BIT_21)
#define NJD_FLAG_USE_ALPHA			(BIT_20)
#define NJD_FLAG_IGNORE_SPECULAR	(BIT_19)
#define NJD_FLAG_FLIP_U				(BIT_18)
#define NJD_FLAG_FLIP_V				(BIT_17)
#define NJD_FLAG_CLAMP_U			(BIT_16)
#define NJD_FLAG_CLAMP_V			(BIT_15)
#define NJD_FLAG_USE_ANISOTROPIC	(BIT_12)
#define NJD_FLAG_PICK				(BIT_7)

/* Mask for flip and clamp */
#define NJD_FLAG_FLIP_MASK  (NJD_FLAG_FLIP_U| NJD_FLAG_FLIP_V)
#define NJD_FLAG_CLAMP_MASK  (NJD_FLAG_CLAMP_U|NJD_FLAG_CLAMP_V)

/* Mask for the flags evaluated by H/W */
#define NJD_FLAG_HARD_MASK (NJD_FLAG_USE_ALPHA	        \
	| NJD_FLAG_FLIP_MASK|NJD_FLAG_CLAMP_MASK        \
	| NJD_FLAG_USE_ANISOTROPIC)

/* Mask for the flags evaluated by the library */
#define NJD_FLAG_SOFT_MASK ( NJD_FLAG_IGNORE_LIGHT	\
	|NJD_FLAG_PICK| NJD_FLAG_USE_TEXTURE		\
	| NJD_FLAG_DOUBLE_SIDE| NJD_FLAG_USE_ENV	\
	| NJD_FLAG_USE_FLAT)

/* Mask for entire flag */
#define NJD_FLAG_MASK (NJD_FLAG_HARD_MASK		\
	| NJD_FLAG_SOFT_MASK)

/* Default user mask */
#define NJD_DEFAULT_USER_MASK	(BIT_2|BIT_1|BIT_0)

/* Default systm mask */
#define NJD_DEFAULT_SYS_MASK	(~NJD_DEFAULT_USER_MASK)

/* Mask for the field sent direcly to the H/W */
#define NJD_SYS_HARD_MASK (NJD_SA_MASK|NJD_SD_MASK	 \
    |NJD_FOG_MASK|NJD_FLAG_HARD_MASK		 	 \
    |NJD_D_MASK|NJD_FILTER_MASK)
 

/* meshset type bits (type_addrId 14-15 bit) */
#define NJD_MESHSET_3           0x0000  /* polygon3 meshset         */
#define NJD_MESHSET_4           0x4000  /* polygon4 meshset         */
#define NJD_MESHSET_N           0x8000  /* polygonN meshset         */
#define NJD_MESHSET_TRIMESH     0xc000  /* trimesh meshset          */
#define NJD_MESHSET_MASK        0xc000  /* meshset type mask        */

/* meshset trimesh end bit */
#define NJD_TRIMESH_END         0x8000  /* trimesh end bit          */

/* Callback bits (attr_texId 30-31 bit */
#define	NJD_POLYGON_CALLBACK	(BIT_31)			/* polygon callback		*/
#define	NJD_MATERIAL_CALLBACK	(BIT_30)			/* material callback	*/
#define	NJD_CALLBACK_MASK		(BIT_31 | BIT_30)	/* callback mask		*/

/*--------------------------------------*/
/*      Motion define                   */
/*--------------------------------------*/
/* motion type bits */

#define NJD_MTYPE_POS_0			BIT_0
#define NJD_MTYPE_ANG_1			BIT_1
#define NJD_MTYPE_SCL_2			BIT_2
#define NJD_MTYPE_VEC_3			BIT_3
#define NJD_MTYPE_VERT_4		BIT_4
#define NJD_MTYPE_NORM_5		BIT_5
#define	NJD_MTYPE_TARGET_3		BIT_6
#define	NJD_MTYPE_ROLL_6		BIT_7
#define	NJD_MTYPE_ANGLE_7		BIT_8
#define	NJD_MTYPE_RGB_8			BIT_9
#define	NJD_MTYPE_INTENSITY_9	BIT_10
#define	NJD_MTYPE_SPOT_10		BIT_11
#define	NJD_MTYPE_POINT_10		BIT_12
#define NJD_MTYPE_QUAT_1        BIT_13

#define NJD_MTYPE_LINER         0x0000    /* use liner                */
#define NJD_MTYPE_SPLINE        0x0040    /* use spline               */
#define NJD_MTYPE_USER          0x0080    /* use user function        */
#define NJD_MTYPE_MASK          0x00c0    /* motion function mask     */

/*--------------------------------------*/
/*      Light define                    */
/*--------------------------------------*/
/* light type */
#define NJD_CONSTANT            0x00    /* constant                 */
#define NJD_AMBIENT             0x01    /* ambient                  */
#define NJD_DIR_LIGHT           0x02    /* directional light        */
#define NJD_POINT_LIGHT         0x04    /* point light              */
#define NJD_SPOT_LIGHT          0x08    /* spot light               */
#define NJD_SPEC_DIR            0x10    /* dir. light's specular    */
#define NJD_SPEC_POINT          0x20    /* point light's specular   */
#define NJD_USER_LIGHT          0x40    /* user-defined funcion     */
#define NJD_SIMPLE_LIGHT        0x80    /* simplified funcion       */
#define NJD_BLOCK_LIGHT	        0xc0    /* calculated by model      */

#define NJD_LAMBERT_DIR         NJD_AMBIENT|NJD_DIR_LIGHT
										/* dir. light's Lambertian  */
#define NJD_LAMBERT_POINT       NJD_AMBIENT|NJD_POINT_LIGHT
										/* point light's Lambertian */
#define NJD_PHONG_DIR           NJD_AMBIENT|NJD_DIR_LIGHT|NJD_SPEC_DIR
										/* dir. light's Phong       */
#define NJD_PHONG_POINT         NJD_AMBIENT|NJD_POINT_LIGHT|NJD_SPEC_POINT
										/* point light's Phong      */

/* light's ON-OFF flags */
#define NJD_LIGHT_OFF           0       /* turning off a light      */
#define NJD_LIGHT_ON            1       /* turning on a light       */

/* the number of light */
#define NJD_LIGHT_MAX           32      /* the maximum of lights    */
#define NJD_LIGHT_MIN           0       /* the minimum of lights    */


/*--------------------------------------*/
/*      Attribute define                */
/*--------------------------------------*/

#define NJD_DRAW_MASK           0x0000000f  /* Mask for Drawing Attribute   */

#define NJD_DRAW_NORMAL         0x00000000  /* Draw Normally                */
#define NJD_DRAW_FAN            0x00000001  /* Draw Radially                */
#define NJD_DRAW_CONNECTED      0x00000002  /* Draw Continuously            */
#define NJD_DRAW_INSCRIBED      0x00000010  /* Draw Inscribed Circle        */
#define NJD_FILL                0x00000020  /* Fill Polygon                 */
#define NJD_TRANSPARENT         0x00000040  /* Be Transparent               */
#define NJD_CALC_LIGHT          0x40000000  /* Put under the Light Effect   */
#define NJD_USE_TEXTURE         0x80000000  /* Use Texture                  */


/*--------------------------------------*/
/*      Scroll define                   */
/*--------------------------------------*/
/* cell size */
#define NJD_CELL_8              8
#define NJD_CELL_16             16
#define NJD_CELL_32             32
#define NJD_CELL_64             64
#define NJD_CELL_128            128
#define NJD_CELL_256            256

/* the maximum of scroll's value */
#define NJD_CELL_NUM_MAX        0xFFFF  /* the maximum of cell's number */
#define NJD_MAP_W_MAX           0xFF    /* the maximum of map's width   */
#define NJD_MAP_H_MAX           0xFF    /* the muximum of map's height  */
#define NJD_MAP_MAX             (NJD_MAP_W_MAX*NJD_MAP_H_MAX)
										/* the muximum of map           */

/* 3d control */
#define	NJD_CONTROL_3D_DISP_AXIS			BIT_0
#define	NJD_CONTROL_3D_NO_CLIP_CHECK		BIT_1
#define	NJD_CONTROL_3D_CONSTANT_ATTR		BIT_2
#define	NJD_CONTROL_3D_ENABLE_ALPHA			BIT_3
#define	NJD_CONTROL_3D_CONSTANT_MATERIAL	BIT_4
#define	NJD_CONTROL_3D_OFFSET_MATERIAL		BIT_5
#define	NJD_CONTROL_3D_DEPTH_QUEUE			BIT_6
#define	NJD_CONTROL_3D_VERTEX_OFFSET		BIT_7
#define	NJD_CONTROL_3D_MODEL_CLIP			BIT_8
#define	NJD_CONTROL_3D_CONSTANT_TEXTURE_MATERIAL BIT_9
#define	NJD_CONTROL_3D_SHADOW				BIT_10
#define	NJD_CONTROL_3D_CNK_CONSTANT_ATTR	BIT_11
#define	NJD_CONTROL_3D_SHADOW_OPAQUE		BIT_12
#define	NJD_CONTROL_3D_TRANS_MODIFIER		BIT_13
#define	NJD_CONTROL_3D_USE_PUNCHTHROUGH		BIT_14
#define	NJD_CONTROL_3D_CNK_BLEND_MODE		BIT_15
#define	NJD_CONTROL_3D_DISABLE_NEAR_CLIP	BIT_16
#define	NJD_CONTROL_3D_ENV_UV_SCROLL		BIT_17

#define	NJD_CONTROL_3D_MIRROR_MODEL			BIT_31

/* clipping */
#define	NJD_CLIP_NEAR			BIT_0
#define	NJD_CLIP_FAR			BIT_1
#define	NJD_CLIP_LEFT			BIT_2
#define	NJD_CLIP_RIGHT			BIT_3
#define	NJD_CLIP_TOP			BIT_4
#define	NJD_CLIP_BOTTOM			BIT_5
#define	NJD_CLIP_SCREEN			(NJD_CLIP_LEFT|NJD_CLIP_RIGHT|NJD_CLIP_TOP|NJD_CLIP_BOTTOM)

/* sprite */
#define	NJD_SPRITE_ANGLE			BIT_0
#define	NJD_SPRITE_COLOR			BIT_1
#define	NJD_SPRITE_HFLIP			BIT_2
#define	NJD_SPRITE_VFLIP			BIT_3
#define	NJD_SPRITE_HVFLIP			( NJD_SPRITE_HFLIP | NJD_SPRITE_VFLIP )
#define	NJD_SPRITE_SCALE			BIT_4
#define	NJD_SPRITE_ALPHA			BIT_5

/* texture */
#define	NJD_TEXTUREFILTER_POINT_SAMPLE	0
#define	NJD_TEXTUREFILTER_BILINEAR		1
#define	NJD_TEXTUREFILTER_TRILINEAR		2

#define	NJD_TEXTURECLAMP_NOCLAMP		0
#define	NJD_TEXTURECLAMP_CLAMP_V		1
#define	NJD_TEXTURECLAMP_CLAMP_U		2
#define	NJD_TEXTURECLAMP_CLAMP_UV		3

#define	NJD_TEXTUREFLIP_NOFLIP			0
#define	NJD_TEXTUREFLIP_FLIP_V			1
#define	NJD_TEXTUREFLIP_FLIP_U			2
#define	NJD_TEXTUREFLIP_FLIP_UV			3

/*--------------------------------------*/
/*      Matrix                          */
/*--------------------------------------*/
typedef float32 *NJS_MATRIX_PTR;

enum {M00, M01, M02, M03,
	  M10, M11, M12, M13,
	  M20, M21, M22, M23,
	  M30, M31, M32, M33};




/*--------------------------------------*/
/*      MACRO                           */
/*--------------------------------------*/
/*
 *  COLOR MACRO
 */
#define NJM_COLOR_A(col)        ((col) >> 24)
#define NJM_COLOR_R(col)        (((col) >> 16) & 0xFF)
#define NJM_COLOR_G(col)        (((col) >> 8) & 0xFF)
#define NJM_COLOR_B(col)        ((col) & 0xFF)

/*
 *  ANGLE MACRO
 */
#define NJD_PI  3.141592

#define NJM_DEG_RAD(n)  ((n) * NJD_PI / 180.0)
															/*  deg �� rad  */
#define NJM_DEG_ANG(n)  ((Angle)(((n) * 65536.0) / 360.0))
															/*  deg �� ang  */
#define NJM_RAD_ANG(n)  ((Angle)(((n) * 65536.0) / (2 * NJD_PI)))
															/*  rad �� ang  */
#define NJM_RAD_DEG(n)  ((n) * 180.0 / NJD_PI)
															/*  rad �� deg  */
#define NJM_ANG_DEG(n)  ((n) * 360.0 / 65536.0)
															/*  ang �� deg  */
#define NJM_ANG_RAD(n)  ((n) * (2 * NJD_PI) / 65536.0)
															/*  ang �� rad  */
/*
 *	MAX MIN MACRO
 */
#define NJM_MAX(a,b) ((a)>(b)?(a):(b))
#define NJM_MIN(a,b) ((a)<(b)?(a):(b))

/*
 *  SCROLL MACRO
 */
#define NJM_MAP(celnum,u,v)	(((celnum) << 16 | (u) << 8 | (v)))
#define NJM_MAPCELL(map)	(((map) >> 16)&0x0000FFFF)
#define NJM_MAPU(map)	(((map) >> 8)&0x000000FF)
#define NJM_MAPV(map)	((map)&0x000000FF)

/*
 *  LIGHT MACRO
 */
#define NJM_LIGHT_INIT_VECTOR(l)	(l)->vctr                /*  NJS_LIGHT *l */
#define NJM_LIGHT_INIT_POINT(l)		(l)->pnt
#define NJM_LIGHT_MATRIX(l)			(l)->mtrx

#define NJM_LIGHT_VECTOR(l)	((l)->ltcal).lvctr
#define NJM_LIGHT_POINT(l)	((l)->ltcal).lpnt
#define NJM_LIGHT_AMB(l)	((l)->ltcal).amb
#define NJM_LIGHT_DIF(l)	((l)->ltcal).dif
#define NJM_LIGHT_SPC(l)	((l)->ltcal).spc
#define NJM_LIGHT_EXP(l)	((l)->ltcal).exp

#define NJM_LIGHT_COLOR(l)	((l)->attr).argb


/*
 *  DEBUG MACRO
 */
#define NJM_LOCATION(x,y)	((x)<<16|(y))
#define NJM_GET_X(n)        ((sint16)((n)>>16))
#define NJM_GET_Y(n)        ((sint16)((n)&0x0000FFFF))

/*
 *  TEXTURE MACRO
 */
#define NJM_BANKGLOBALINDEX(bank,globalIndex)	(((bank) << NJD_TEXBANK_SHIFT)|((globalIndex)&NJD_TEXPALGLOBAL_MASK))

#define NJM_TEXTURE_WIDTH(texlist,n) (((NJS_TEXMEMLIST*)(texlist)->textures[(n)].texaddr)->texinfo.texsurface.nWidth)
#define NJM_TEXTURE_HEIGHT(texlist,n) (((NJS_TEXMEMLIST*)(texlist)->textures[(n)].texaddr)->texinfo.texsurface.nHeight)
#define NJM_TEXTURE_GLOBALINDEX(texlist,n) (((NJS_TEXMEMLIST*)(texlist)->textures[(n)].texaddr)->globalIndex)
#define NJM_TEXTURE_SIZE(texlist,n) (((NJS_TEXMEMLIST*)(texlist)->textures[(n)].texaddr)->texinfo.texsurface.TextureSize)

#endif /* _NINJA_DEF_H_ */
