/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file osEventCfg.c
*********************************************************************************
<!--                  osEventCfg Unit Local Group Definition                  -->
*********************************************************************************
** @defgroup Local_osEventCfg Local
** @ingroup osEventCfg_unit
** @brief osEventCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "osEventCfg.h"
/* GENERATED interfaces */
#include "CILinterrupt.h"
#include "channel.h"
#include "channel.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_osEventCfg_c Macros
  * @ingroup Local_osEventCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_osEventCfg_c
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
  * @defgroup Variables_osEventCfg_c Variables
  * @ingroup Local_osEventCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
unsigned char osEventDataPool[OS_EVENT_DATAPOOL_SIZE] __OS_VARS_SECTION;

CosmOS_BooleanType __OS_VARS_SECTION handleCoresArr[CORE_NUM] IS_INITIALIZED_TO { False };

CosmOS_OsEventVariableType OsEventVar __OS_VARS_SECTION
IS_INITIALIZED_TO{                       /* osEventVar */
    0,    /* BitWidthType event */
};
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_GenericVoidType EventsFuncConst[EVENTS_FUNC_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
    (CosmOS_GenericVoidType)CILinterrupt_contextSwitchRoutineTrigger,
    (CosmOS_GenericVoidType)channel_signalizeServer,
    (CosmOS_GenericVoidType)channel_signalizeClient,
};

const CosmOS_OsEventConfigurationType OsEventCfg __OS_CONSTS_SECTION
IS_INITIALIZED_TO{                       /* osEventCfg */
    &OsEventVar,    /* CosmOS_OsVariableType * const var */
    handleCoresArr,    /* CosmOS_BooleanType * const handleCores */
    SPINLOCK_8_ID,    /* const BitWidthType spinlockId */
    EventsFuncConst,    /* const CosmOS_GenericVoidType * const eventFuncs */
    EVENTS_FUNC_NUM,    /* const BitWidthType numberOfEventFuncs */
    osEventDataPool,    /* unsigned char * const dataPool */
    OS_EVENT_DATAPOOL_SIZE,    /* const BitWidthType dataPoolSize */
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_osEventCfg_c
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
  * @defgroup Apis_osEventCfg_c API's
  * @ingroup Local_osEventCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_osEventCfg_c Getters
  * @ingroup Apis_osEventCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_osEventCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_osEventCfg_c Setters
  * @ingroup Apis_osEventCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_osEventCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_osEventCfg_c General
  * @ingroup Apis_osEventCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_osEventCfg_c
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