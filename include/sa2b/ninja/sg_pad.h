/*
 *  Shinobi Library
 *  Copyright (c) 1998 SEGA
 *
 *       Peripheral
 *
 *  Module  : Library Header File
 *  File    : sg_pad.h
 *  Create  : 1998-03-25
 *  Modify  : 1999-03-01
 *  Version : 1.45
 *  Note    :
 */

#ifndef _SG_PAD_H_
#define _SG_PAD_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* #include <sa2b/ninja/sg_xpt.h> */

/*
 *  DEFINES / MACROS
 */

/******** �|�[�g�ԍ��萔 ***************************************************/
/******** Control port number **********************************************/
#define PDD_PORT_A0    0                   /* Port A0                      */
#define PDD_PORT_A1    1                   /* Port A1                      */
#define PDD_PORT_A2    2                   /* Port A2                      */
#define PDD_PORT_A3    3                   /* Port A3                      */
#define PDD_PORT_A4    4                   /* Port A4                      */
#define PDD_PORT_A5    5                   /* Port A5                      */
#define PDD_PORT_B0    6                   /* Port B0                      */
#define PDD_PORT_B1    7                   /* Port B1                      */
#define PDD_PORT_B2    8                   /* Port B2                      */
#define PDD_PORT_B3    9                   /* Port B3                      */
#define PDD_PORT_B4   10                   /* Port B4                      */
#define PDD_PORT_B5   11                   /* Port B5                      */
#define PDD_PORT_C0   12                   /* Port C0                      */
#define PDD_PORT_C1   13                   /* Port C1                      */
#define PDD_PORT_C2   14                   /* Port C2                      */
#define PDD_PORT_C3   15                   /* Port C3                      */
#define PDD_PORT_C4   16                   /* Port C4                      */
#define PDD_PORT_C5   17                   /* Port C5                      */
#define PDD_PORT_D0   18                   /* Port D0                      */
#define PDD_PORT_D1   19                   /* Port D1                      */
#define PDD_PORT_D2   20                   /* Port D2                      */
#define PDD_PORT_D3   21                   /* Port D3                      */
#define PDD_PORT_D4   22                   /* Port D4                      */
#define PDD_PORT_D5   23                   /* Port D5                      */

/******** �{�^���E���o�[�T�|�[�g��� ***************************************/
/******** Which button does controller have ? ******************************/
#define PDD_DEV_SUPPORT_AY2   (1 << 21)    /* �A�i���O��Y2������           */
                                           /* Analog axis Y2               */
#define PDD_DEV_SUPPORT_AX2   (1 << 20)    /* �A�i���O��X2������           */
                                           /* Analog axis X2               */
#define PDD_DEV_SUPPORT_AY1   (1 << 19)    /* �A�i���O��Y1������           */
                                           /* Analog axis Y1               */
#define PDD_DEV_SUPPORT_AX1   (1 << 18)    /* �A�i���O��X1������           */
                                           /* Analog axis X1               */
#define PDD_DEV_SUPPORT_AL    (1 << 17)    /* �A�i���O��L������            */
                                           /* Analog trigger L             */
#define PDD_DEV_SUPPORT_AR    (1 << 16)    /* �A�i���O��R������            */
                                           /* Analog trigger R             */
#define PDD_DEV_SUPPORT_KRB   (1 << 15)    /* �f�W�^���\���L�[B�E������    */
                                           /* Right button B               */
#define PDD_DEV_SUPPORT_KLB   (1 << 14)    /* �f�W�^���\���L�[B��������    */
                                           /* Left button B                */
#define PDD_DEV_SUPPORT_KDB   (1 << 13)    /* �f�W�^���\���L�[B��������    */
                                           /* Down button B                */
#define PDD_DEV_SUPPORT_KUB   (1 << 12)    /* �f�W�^���\���L�[B�������    */
                                           /* Up button B                  */
#define PDD_DEV_SUPPORT_TD    (1 << 11)    /* D�{�^��������                */
                                           /* D button                     */
#define PDD_DEV_SUPPORT_TX    (1 << 10)    /* X�{�^��������                */
                                           /* X button                     */
#define PDD_DEV_SUPPORT_TY    (1 <<  9)    /* Y�{�^��������                */
                                           /* Y button                     */
#define PDD_DEV_SUPPORT_TZ    (1 <<  8)    /* Z�{�^��������                */
                                           /* Z button                     */
#define PDD_DEV_SUPPORT_KR    (1 <<  7)    /* �f�W�^���\���L�[A�E������    */
                                           /* Right button A               */
#define PDD_DEV_SUPPORT_KL    (1 <<  6)    /* �f�W�^���\���L�[A��������    */
                                           /* Left button A                */
#define PDD_DEV_SUPPORT_KD    (1 <<  5)    /* �f�W�^���\���L�[A��������    */
                                           /* Down button A                */
#define PDD_DEV_SUPPORT_KU    (1 <<  4)    /* �f�W�^���\���L�[A�������    */
                                           /* UP button A                  */
#define PDD_DEV_SUPPORT_ST    (1 <<  3)    /* �X�^�[�g�{�^��������         */
                                           /* Start button                 */
#define PDD_DEV_SUPPORT_TA    (1 <<  2)    /* A�{�^��������                */
                                           /* A button                     */
#define PDD_DEV_SUPPORT_TB    (1 <<  1)    /* B�{�^��������                */
                                           /* B button                     */
#define PDD_DEV_SUPPORT_TC    (1 <<  0)    /* C�{�^��������                */
                                           /* C button                     */

/******** �{�^���萔 *******************************************************/
/******** Button ***********************************************************/
#define PDD_DGT_TL    (1 << 17)            /* L�{�^��(�G�~�����[�V����)    */
                                           /* L button(emulation)          */
#define PDD_DGT_TR    (1 << 16)            /* R�{�^��(�G�~�����[�V����)    */
                                           /* R button(emulation)          */
#define PDD_DGT_KRB   (1 << 15)            /* �f�W�^���\���L�[B�E          */
                                           /* Right button B               */
#define PDD_DGT_KLB   (1 << 14)            /* �f�W�^���\���L�[B��          */
                                           /* Left button B                */
#define PDD_DGT_KDB   (1 << 13)            /* �f�W�^���\���L�[B��          */
                                           /* Down button B                */
#define PDD_DGT_KUB   (1 << 12)            /* �f�W�^���\���L�[B��          */
                                           /* Up button B                  */
#define PDD_DGT_TD    (1 << 11)            /* D�{�^��                      */
                                           /* D button                     */
#define PDD_DGT_TX    (1 << 10)            /* X�{�^��                      */
                                           /* X button                     */
#define PDD_DGT_TY    (1 <<  9)            /* Y�{�^��                      */
                                           /* Y button                     */
#define PDD_DGT_TZ    (1 <<  8)            /* Z�{�^��                      */
                                           /* Z button                     */
#define PDD_DGT_KR    (1 <<  7)            /* �f�W�^���\���L�[A�E          */
                                           /* Right button A               */
#define PDD_DGT_KL    (1 <<  6)            /* �f�W�^���\���L�[A��          */
                                           /* Left button A                */
#define PDD_DGT_KD    (1 <<  5)            /* �f�W�^���\���L�[A��          */
                                           /* Down button A                */
#define PDD_DGT_KU    (1 <<  4)            /* �f�W�^���\���L�[A��          */
                                           /* Up button A                  */
#define PDD_DGT_ST    (1 <<  3)            /* �X�^�[�g�{�^��               */
                                           /* Start button                 */
#define PDD_DGT_TA    (1 <<  2)            /* A�{�^��                      */
                                           /* A button                     */
#define PDD_DGT_TB    (1 <<  1)            /* B�{�^��                      */
                                           /* B button                     */
#define PDD_DGT_TC    (1 <<  0)            /* C�{�^��                      */
                                           /* C button                     */

/******** �G���[�萔 *******************************************************/
/******** Error code *******************************************************/
#define PDD_ERR_OK       0x00000000        /* �G���[�Ȃ�                   */
                                           /* No error                     */
#define PDD_ERR_RETRY    0xff0000fc        /* Transmit Again�ɂ�郊�g���C */
                                           /* Retry error                  */
#define PDD_ERR_GENERIC  0xff000000        /* ����`�G���[                 */
                                           /* Undefined error              */

/******** �_�����[�h�萔 ***************************************************/
/******** Logic mode *******************************************************/
#define PDD_PLOGIC_ACTIVE    0             /* ���_��(�f�t�H���g)           */
                                           /* Active logic(default)        */
#define PDD_PLOGIC_NEGATIVE  1             /* ���_��                       */
                                           /* Negative logic               */

/******** Maple ���[�h�萔 *************************************************/
/******** Maple mode *******************************************************/
#define PDD_MODE_TYPE_A      1             /* Maple�^�C�vA(SET4�p)         */
                                           /* Maple type A (fot SET4)      */
#define PDD_MODE_TYPE_B      0             /* Maple�^�C�vB(SET5�ȍ~�p)     */
                                           /* Maple type B (fot SET5,DC)   */

/******** �K�����[�h�萔 ***************************************************/
/******** Gun mode *********************************************************/
#define PDD_GUNMODE_OFF   0x00000000       /* �ʏ탂�[�h                   */
                                           /* Normal mode (not gun mode)   */
#define PDD_GUNMODE_A     0x00000001       /* PORT A�K�����[�h             */
                                           /* Port A gun mode              */
#define PDD_GUNMODE_B     0x00000002       /* PORT B�K�����[�h             */
                                           /* Port B gun mode              */
#define PDD_GUNMODE_C     0x00000004       /* PORT C�K�����[�h             */
                                           /* Port C gun mode              */
#define PDD_GUNMODE_D     0x00000008       /* PORT D�K�����[�h             */
                                           /* Port D gun mode              */
#define PDD_GUNMODE_ALL   0x0000000f       /* �S�|�[�g�K�����[�h           */
                                           /* All ports gun mode           */

/******** ���[�N�e�ʌv�Z ***************************************************/
/******** Calculate work size **********************************************/
#define PDM_WORK_SIZE(num) ((num) * 1024 * 2)


/*
 *  PERIPHERAL INFO
 */

/******** �y���t�F�����^�C�v ***********************************************/
/******** Peripheral type **************************************************/
#define PDD_DEVTYPE_CONTROLLER   (1 << 0)  /* �R���g���[��                 */
                                           /* Controller                   */
#define PDD_DEVTYPE_STORAGE      (1 << 1)  /* �X�g���[�W                   */
                                           /* Storage                      */
#define PDD_DEVTYPE_LCD          (1 << 2)  /* LCD                          */
                                           /* LCD                          */
#define PDD_DEVTYPE_TIMER        (1 << 3)  /* �^�C�}                       */
                                           /* Timer                        */
#define PDD_DEVTYPE_SOUNDINPUT   (1 << 4)  /* ��������                     */
                                           /* Sound input device           */
#define PDD_DEVTYPE_KEYBOARD     (1 << 6)  /* �L�[�{�[�h                   */
                                           /* Keyboard                     */
#define PDD_DEVTYPE_LIGHTGUN     (1 << 7)  /* ���C�g�K��                   */
                                           /* Light gun controller         */
#define PDD_DEVTYPE_VIBRATION    (1 << 8)  /* �U���f�o�C�X                 */
                                           /* Vibration device             */

/******** �G���A�R�[�h *****************************************************/
/******** Area code ********************************************************/
#define PDD_DEVAREA_USA          (1 << 0)  /* �k�A�����J�n��               */
                                           /* North America                */
#define PDD_DEVAREA_JAPAN        (1 << 1)  /* ���{�n��                     */
                                           /* Japan                        */
#define PDD_DEVAREA_ASIA         (1 << 2)  /* �A�W�A�n��                   */
                                           /* Asia                         */
#define PDD_DEVAREA_EUROPE       (1 << 3)  /* ���[���b�p�n��               */
                                           /* Europe                       */
#define PDD_DEVAREA_RESERVED1    (1 << 4)  /* �\��n��1                    */
                                           /* Reserved area 1              */
#define PDD_DEVAREA_RESERVED2    (1 << 5)  /* �\��n��2                    */
                                           /* Reserved area 2              */
#define PDD_DEVAREA_RESERVED3    (1 << 6)  /* �\��n��3                    */
                                           /* Reserved area 3              */
#define PDD_DEVAREA_RESERVED4    (1 << 7)  /* �\��n��4                    */
                                           /* Reserved area 4              */

/******** �R�l�N�^�̌��� ***************************************************/
/******** Connector direction **********************************************/
#define PDD_CONDIR_TOPSIDE       0         /* ��                           */
                                           /* Top side                     */
#define PDD_CONDIR_BOTTOMSIDE    1         /* ��                           */
                                           /* Bottom side                  */
#define PDD_CONDIR_LEFTSIDE      2         /* ��                           */
                                           /* Left side                    */
#define PDD_CONDIR_RIGHTSIDE     3         /* �E                           */
                                           /* Right side                   */


/*
 *  TYPEDEFS
 */

/******** �y���t�F�������\���� *******************************************/
/******** Peripheral information structure *********************************/
typedef struct {
	uint32 type;                /* �y���t�F�����̃^�C�v                    */
	                            /* Peripheral type                         */
	uint32 reserved[3];         /* �\��                                    */
	                            /* Reserved                                */
	uint8 is_root;              /* ���[�g�f�o�C�X���ǂ�����\��            */
	                            /* Is root device ?                        */
	uint8 area_code;            /* �G���A�R�[�h                            */
	                            /* Area code                               */
	uint8 connector_dir[2];     /* �R�l�N�^�̌���                          */
	                            /* Connector direction                     */
	char product_name[32];      /* ���i��                                  */
	                            /* Product name                            */
	char license[64];           /* ���C�Z���X                              */
	                            /* License string                          */
	uint16 stdby_pow;           /* �X�^���o�C����d��                      */
	                            /* Standby power                           */
	uint16 max_pow;             /* �ő����d��                            */
	                            /* Max power                               */
} PDS_PERIPHERALINFO;

/******** �y���t�F�����f�[�^�\���� *****************************************/
/******** Peripheral structure *********************************************/
typedef struct {
	uint32 id;                            /* �f�o�C�XID(�Q�Ƃ��Ȃ��ŉ�����)*/
	                                      /* Device ID(Please do not refer)*/
	uint32 support;                       /* �{�^���̃T�|�[�g���          */
	                                      /* Buttons controller has        */
	uint32 on;                            /* ���݉�����Ă���{�^��        */
	                                      /* Buttons pressed               */
	uint32 off;                           /* ���ݕ�����Ă���{�^��        */
	                                      /* Buttons released              */
#ifdef USE_UNION
	union {
		Uint32 push;                      /* ���݉����ꂽ�u�Ԃɂ���{�^��  */
		                                  /* Buttons pressed now(edge)     */
#endif
		uint32 press;
#ifdef USE_UNION
	};
#endif
#ifdef USE_UNION
	union {
		Uint32 pull;                      /* ���ݕ����ꂽ�u�Ԃɂ���{�^��  */
		                                  /* Buttons released now(edge     */
#endif
		uint32 release;
#ifdef USE_UNION
	};
#endif
	uint16 r;                             /* ���f�[�^R     (     0�`255  ) */
	                                      /* R Trigger     (     0- 255  ) */
	uint16 l;                             /* ���f�[�^L     (     0�`255  ) */
	                                      /* L Trigger     (     0- 255  ) */
	sint16 x1;                            /* ���f�[�^X1    (  -128�`127  ) */
	                                      /* Axis X1       (  -128- 127  ) */
	sint16 y1;                            /* ���f�[�^Y1    (  -128�`127  ) */
	                                      /* Axis Y1       (  -128- 127  ) */
	sint16 x2;                            /* ���f�[�^X2    (  -128�`127  ) */
	                                      /* Axis X2       (  -128- 127  ) */
	sint16 y2;                            /* ���f�[�^Y2    (  -128�`127  ) */
	                                      /* Axis Y2       (  -128- 127  ) */
	char* name;                           /* �f�o�C�X����                  */
	                                      /* Controller name               */
	void* extend;                         /* �g���f�[�^�A�h���X            */
	                                      /* Extended data address         */
	uint32 old;                           /* �\��                          */
	                                      /* Reserved                      */
	PDS_PERIPHERALINFO* info;             /* �y���t�F�������ւ̃|�C���^  */
	                                      /* Pointer to peripheral info.   */
} PDS_PERIPHERAL;


/*--------------------------------------------------------------------------*/

/*
 *  PROTOTYPES
 */

void pdInitPeripheral(sint32 logic, void* recvbuf, void* sendbuf);
void pdInitPeripheralEx(sint32 logic, sint32* permap,
							void** recvbuf, void* sendbuf, sint32 num);
void pdExitPeripheral(void);
void pdExecPeripheralServer(void);
void pdExecPeripheralServerUser(void);
const PDS_PERIPHERAL* pdGetPeripheral(uint32 port);
sint32 pdGetPeripheralError(uint32 port);
const PDS_PERIPHERALINFO* pdGetPeripheralInfo(uint32 port);
void pdSetMode(sint32 mode);
sint32 pdGetMode(void);
void pdSetOptimize(uint32 count);
uint32 pdGetOptimize(void);
void pdSetThreshold(uint8 on, uint8 off);

void pdGunEnter(uint32 portbit);
void pdGunLeave(void);
sint32 pdGunCheck(void);
void pdGunGetPosition(sint32* x, sint32* y);
sint32 pdGunGetLatchedPort(void);
void pdGunSetFlashColor(uint32 color);
uint32 pdGunGetFlashColor(void);
void pdGunSetRapid(uint32 port, uint32 num);
void pdGunSetTrigger(uint32 port);
void pdGunSetCallback(sint32 (*func)(void));

/*--------------------------------------------------------------------------*/


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _SG_PAD_H_ */
