/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file channelCfg.c
*********************************************************************************
<!--                  channelCfg Unit Local Group Definition                  -->
*********************************************************************************
** @defgroup Local_channelCfg Local
** @ingroup channelCfg_unit
** @brief channelCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "channelCfg.h"
#include "permissionCfg.h"
#include "schedulableCfg.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_channelCfg Macros
  * @ingroup Local_channelCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_channelCfg
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
  * @defgroup Variables_channelCfg Variables
  * @ingroup Local_channelCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
unsigned char channel0SendPool[CHANNEL_0_SEND_POOL_SIZE] __OS_VARS_SECTION;
unsigned char channel0ReplyPool[CHANNEL_0_REPLY_POOL_SIZE] __OS_VARS_SECTION;
unsigned char channel1SendPool[CHANNEL_1_SEND_POOL_SIZE] __OS_VARS_SECTION;
unsigned char channel1ReplyPool[CHANNEL_1_REPLY_POOL_SIZE] __OS_VARS_SECTION;
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
CosmOS_ChannelVariableType ChannelsVar[CHANNEL_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        False,
        CHANNEL_POOL_STATE_ENUM__WAITING_TO_BE_PROCESSED,
        0,
        NULL,
        False,
        CHANNEL_POOL_STATE_ENUM__EMPTY,
        0,
    },
    {
        False,
        CHANNEL_POOL_STATE_ENUM__WAITING_TO_BE_PROCESSED,
        0,
        NULL,
        False,
        CHANNEL_POOL_STATE_ENUM__EMPTY,
        0,
    },
};
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_ChannelConfigurationType
    ChannelsCfgConst[CHANNEL_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ChannelsVar[CHANNEL_0_ID],
        CHANNEL_0_ID,
        channel0SendPool,
        channel0ReplyPool,
        CHANNEL_0_SEND_POOL_SIZE,
        CHANNEL_0_REPLY_POOL_SIZE,
        &PermissionsChannel0SendCfgConst,
        &PermissionsChannel0ReplyCfgConst,
		SEMAPHORE_2_ID,
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_3_CORE_0_ID],
    },
    {
        &ChannelsVar[CHANNEL_1_ID],
        CHANNEL_1_ID,
        channel1SendPool,
        channel1ReplyPool,
        CHANNEL_1_SEND_POOL_SIZE,
        CHANNEL_1_REPLY_POOL_SIZE,
        &PermissionsChannel1SendCfgConst,
        &PermissionsChannel1ReplyCfgConst,
		SEMAPHORE_3_ID,
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_1_PROGRAM_3_CORE_0_ID],
    },
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_channelCfg
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
  * @defgroup Apis_channelCfg_c API's
  * @ingroup Local_channelCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_channelCfg_c Getters
  * @ingroup Apis_channelCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_channelCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_channelCfg_c Setters
  * @ingroup Apis_channelCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_channelCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_channelCfg_c General
  * @ingroup Apis_channelCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_channelCfg_c
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