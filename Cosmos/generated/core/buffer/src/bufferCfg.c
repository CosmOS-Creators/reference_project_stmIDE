/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file bufferCfg.c
*********************************************************************************
<!--                  bufferCfg Unit Local Group Definition                   -->
*********************************************************************************
** @defgroup Local_bufferCfg Local
** @ingroup bufferCfg_unit
** @brief bufferCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "bufferCfg.h"
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
  * @defgroup Macros_bufferCfg Macros
  * @ingroup Local_bufferCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_bufferCfg
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
  * @defgroup Variables_bufferCfg Variables
  * @ingroup Local_bufferCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
unsigned char buffer0Arr[BUFFER_0_SIZE] __OS_VARS_SECTION;
unsigned char buffer1Arr[BUFFER_1_SIZE] __OS_VARS_SECTION;
unsigned char buffer2Arr[BUFFER_2_SIZE] __OS_VARS_SECTION;
unsigned char buffer3Arr[BUFFER_3_SIZE] __OS_VARS_SECTION;
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
CosmOS_BufferVariableType BuffersVar[BUFFER_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        0,
        0,
        0,
    },
    {
        0,
        0,
        0,
    },
    {
        0,
        0,
        0,
    },
    {
        0,
        0,
        0,
    },
};
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_BufferConfigurationType
    BuffersCfgConst[BUFFER_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &BuffersVar[BUFFER_0_ID],
        buffer0Arr,
        BUFFER_0_ID,
        BUFFER_0_SIZE,
        &PermissionsBuffer0ReadCfgConst,
        &PermissionsBuffer0WriteCfgConst,
		True,
		2,
    },
    {
        &BuffersVar[BUFFER_1_ID],
        buffer1Arr,
        BUFFER_1_ID,
        BUFFER_1_SIZE,
        &PermissionsBuffer1ReadCfgConst,
        &PermissionsBuffer1WriteCfgConst,
		True,
		3,
    },
    {
        &BuffersVar[BUFFER_2_ID],
        buffer2Arr,
        BUFFER_2_ID,
        BUFFER_2_SIZE,
        &PermissionsBuffer2ReadCfgConst,
        &PermissionsBuffer2WriteCfgConst,
		True,
		4,
    },
    {
        &BuffersVar[BUFFER_3_ID],
        buffer3Arr,
        BUFFER_3_ID,
        BUFFER_3_SIZE,
        &PermissionsBuffer3ReadCfgConst,
        &PermissionsBuffer3WriteCfgConst,
		True,
		5,
    },
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_bufferCfg
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
  * @defgroup Apis_bufferCfg_c API's
  * @ingroup Local_bufferCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_bufferCfg_c Getters
  * @ingroup Apis_bufferCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_bufferCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_bufferCfg_c Setters
  * @ingroup Apis_bufferCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_bufferCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_bufferCfg_c General
  * @ingroup Apis_bufferCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_bufferCfg_c
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