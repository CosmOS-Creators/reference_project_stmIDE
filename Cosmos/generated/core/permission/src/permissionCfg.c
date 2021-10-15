/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file permissionCfg.c
*********************************************************************************
<!--                permissionCfg Unit Local Group Definition                -->
*********************************************************************************
** @defgroup Local_permissionCfg Local
** @ingroup permissionCfg_unit
** @brief permissionCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "permissionCfg.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_permissionCfg Macros
  * @ingroup Local_permissionCfg
  * @{
********************************************************************************/
#define BITLOCK_ID_PLACEMENT_8BIT(id)   id,id,id,id,id,id,id,id,

#define BITLOCK_ID_PLACEMENT_16BIT(id)  id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id,

#define BITLOCK_ID_PLACEMENT_32BIT(id)  id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id,

#define BITLOCK_ID_PLACEMENT_64BIT(id)  id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id, \
                                        id,id,id,id,id,id,id,id,
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Macros_permissionCfg
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Stop                           **
********************************************************************************/
/********************************************************************************
**                              Variables | Start                              **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Variables_permissionCfg Variables
  * @ingroup Local_permissionCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const unsigned char SchedulableIdToBitLock[((SCHEDULABLE_NUM/(sizeof(BitWidthType)*8)) + 1)*(sizeof(BitWidthType)*8)] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BITLOCK_ID_PLACEMENT_32BIT(0)
};


const BitWidthType BitLockBuffer0ReadCfgConst[BITLOCK_BUFFER_0_READ_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b00000000000000000000000010001000,
};
const BitWidthType BitLockBuffer1ReadCfgConst[BITLOCK_BUFFER_0_READ_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b00000000000000000000000010001000,
};
const BitWidthType BitLockBuffer2ReadCfgConst[BITLOCK_BUFFER_2_READ_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b00000000000000000000000010101000,
};
const BitWidthType BitLockBuffer3ReadCfgConst[BITLOCK_BUFFER_3_READ_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b00000000000000000000000000000000,
};


const BitWidthType BitLockBuffer0WriteCfgConst[BITLOCK_BUFFER_0_WRITE_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b00000000000000000000000001000001,
};
const BitWidthType BitLockBuffer1WriteCfgConst[BITLOCK_BUFFER_0_WRITE_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b00000000000000000000000001000001,
};
const BitWidthType BitLockBuffer2WriteCfgConst[BITLOCK_BUFFER_2_WRITE_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b00000000000000000000000001100001,
};
const BitWidthType BitLockBuffer3WriteCfgConst[BITLOCK_BUFFER_3_WRITE_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b00000000000000000001111111111111,
};


const BitWidthType BitLockBuffer0ReadCfgInvertedConst[BITLOCK_BUFFER_0_READ_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b11111111111111111111111101110111,
};
const BitWidthType BitLockBuffer1ReadCfgInvertedConst[BITLOCK_BUFFER_0_READ_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b11111111111111111111111101110111,
};
const BitWidthType BitLockBuffer2ReadCfgInvertedConst[BITLOCK_BUFFER_2_READ_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b11111111111111111111111101010111,
};
const BitWidthType BitLockBuffer3ReadCfgInvertedConst[BITLOCK_BUFFER_3_READ_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b11111111111111111111111111111111,
};


const BitWidthType BitLockBuffer0WriteCfgInvertedConst[BITLOCK_BUFFER_0_WRITE_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b11111111111111111111111110111110,
};
const BitWidthType BitLockBuffer1WriteCfgInvertedConst[BITLOCK_BUFFER_0_WRITE_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b11111111111111111111111110111110,
};
const BitWidthType BitLockBuffer2WriteCfgInvertedConst[BITLOCK_BUFFER_2_WRITE_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b11111111111111111111111110011110,
};
const BitWidthType BitLockBuffer3WriteCfgInvertedConst[BITLOCK_BUFFER_3_WRITE_ELEMENTS_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	0b11111111111111111110000000000000,
};


const CosmOS_PermissionsConfigurationType PermissionsBuffer0ReadCfgConst __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BitLockBuffer0ReadCfgConst,
	BitLockBuffer0ReadCfgInvertedConst,
};
const CosmOS_PermissionsConfigurationType PermissionsBuffer1ReadCfgConst __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BitLockBuffer1ReadCfgConst,
	BitLockBuffer1ReadCfgInvertedConst,
};
const CosmOS_PermissionsConfigurationType PermissionsBuffer2ReadCfgConst __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BitLockBuffer2ReadCfgConst,
	BitLockBuffer2ReadCfgInvertedConst,
};
const CosmOS_PermissionsConfigurationType PermissionsBuffer3ReadCfgConst __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BitLockBuffer3ReadCfgConst,
	BitLockBuffer3ReadCfgInvertedConst,
};



const CosmOS_PermissionsConfigurationType PermissionsBuffer0WriteCfgConst __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BitLockBuffer0WriteCfgConst,
	BitLockBuffer0WriteCfgInvertedConst,
};
const CosmOS_PermissionsConfigurationType PermissionsBuffer1WriteCfgConst __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BitLockBuffer1WriteCfgConst,
	BitLockBuffer1WriteCfgInvertedConst,
};
const CosmOS_PermissionsConfigurationType PermissionsBuffer2WriteCfgConst __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BitLockBuffer2WriteCfgConst,
	BitLockBuffer2WriteCfgInvertedConst,
};
const CosmOS_PermissionsConfigurationType PermissionsBuffer3WriteCfgConst __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
	BitLockBuffer3WriteCfgConst,
	BitLockBuffer3WriteCfgInvertedConst,
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_permissionCfg
********************************************************************************/
/********************************************************************************
**                              Variables | Stop                               **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/********************************************************************************
  * DOXYGEN DEF GROUP                                                          **
  * *************************************************************************//**
  * @defgroup Apis_permissionCfg_c API's
  * @ingroup Local_permissionCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_permissionCfg_c Getters
  * @ingroup Apis_permissionCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_permissionCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_permissionCfg_c Setters
  * @ingroup Apis_permissionCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_permissionCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_permissionCfg_c General
  * @ingroup Apis_permissionCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_permissionCfg_c
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                        Function Definitions | Start                         **
********************************************************************************/
/********************************************************************************
**                        Function Definitions | Stop                          **
********************************************************************************/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/