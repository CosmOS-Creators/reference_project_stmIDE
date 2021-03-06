/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file threadCfg.c
*********************************************************************************
<!--                  threadCfg Unit Local Group Definition                   -->
*********************************************************************************
** @defgroup Local_threadCfg Local
** @ingroup threadCfg_unit
** @brief threadCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "threadCfg.h"
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
  * @defgroup Macros_threadCfg_c Macros
  * @ingroup Local_threadCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_threadCfg_c
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
  * @defgroup Variables_threadCfg_c Variables
  * @ingroup Local_threadCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
CosmOS_ThreadVariableType
    ThreadsProgram0Core0Var[THREAD_PROGRAM_0_CORE_0_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
CosmOS_ThreadVariableType
    ThreadsProgram1Core0Var[THREAD_PROGRAM_1_CORE_0_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
CosmOS_ThreadVariableType
    ThreadsProgram0Core1Var[THREAD_PROGRAM_0_CORE_1_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
CosmOS_ThreadVariableType
    ThreadsProgram1Core1Var[THREAD_PROGRAM_1_CORE_1_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
CosmOS_ThreadVariableType
    ThreadsProgram2Core1Var[THREAD_PROGRAM_2_CORE_1_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
CosmOS_ThreadVariableType
    ThreadsProgram2Core0Var[THREAD_PROGRAM_2_CORE_0_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
CosmOS_ThreadVariableType
    ThreadsProgram3Core0Var[THREAD_PROGRAM_3_CORE_0_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
CosmOS_ThreadVariableType
    ThreadsProgram3Core1Var[THREAD_PROGRAM_3_CORE_1_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
CosmOS_ThreadVariableType
    ThreadsProgram4Core0Var[THREAD_PROGRAM_4_CORE_0_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        NULL,    /* CosmOS_MutexVariableType *blockingMutexVar */
        NULL,    /* CosmOS_MutexVariableType *blockingSemaphoreVar */
    },
};
/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_ThreadConfigurationType
    ThreadsProgram0Core0CfgConst[THREAD_PROGRAM_0_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram0Core0Var[THREAD_0_PROGRAM_0_CORE_0_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_0_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_0_CORE_0_PRIORITY,    /* const BitWidthType priority */
    },
};
const CosmOS_ThreadConfigurationType
    ThreadsProgram1Core0CfgConst[THREAD_PROGRAM_1_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram1Core0Var[THREAD_0_PROGRAM_1_CORE_0_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_1_CORE_0_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_1_CORE_0_PRIORITY,    /* const BitWidthType priority */
    },
};
const CosmOS_ThreadConfigurationType
    ThreadsProgram0Core1CfgConst[THREAD_PROGRAM_0_CORE_1_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram0Core1Var[THREAD_0_PROGRAM_0_CORE_1_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_1_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_0_CORE_1_PRIORITY,    /* const BitWidthType priority */
    },
};
const CosmOS_ThreadConfigurationType
    ThreadsProgram1Core1CfgConst[THREAD_PROGRAM_1_CORE_1_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram1Core1Var[THREAD_0_PROGRAM_1_CORE_1_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_1_CORE_1_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_1_CORE_1_PRIORITY,    /* const BitWidthType priority */
    },
    {
        &ThreadsProgram1Core1Var[THREAD_1_PROGRAM_1_CORE_1_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_1_PROGRAM_1_CORE_1_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_1_PROGRAM_1_CORE_1_PRIORITY,    /* const BitWidthType priority */
    },
};
const CosmOS_ThreadConfigurationType
    ThreadsProgram2Core1CfgConst[THREAD_PROGRAM_2_CORE_1_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram2Core1Var[THREAD_0_PROGRAM_2_CORE_1_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_2_CORE_1_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_2_CORE_1_PRIORITY,    /* const BitWidthType priority */
    },
};
const CosmOS_ThreadConfigurationType
    ThreadsProgram2Core0CfgConst[THREAD_PROGRAM_2_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram2Core0Var[THREAD_0_PROGRAM_2_CORE_0_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_2_CORE_0_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_2_CORE_0_PRIORITY,    /* const BitWidthType priority */
    },
};
const CosmOS_ThreadConfigurationType
    ThreadsProgram3Core0CfgConst[THREAD_PROGRAM_3_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram3Core0Var[THREAD_0_PROGRAM_3_CORE_0_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_3_CORE_0_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_3_CORE_0_PRIORITY,    /* const BitWidthType priority */
    },
    {
        &ThreadsProgram3Core0Var[THREAD_1_PROGRAM_3_CORE_0_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_1_PROGRAM_3_CORE_0_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_1_PROGRAM_3_CORE_0_PRIORITY,    /* const BitWidthType priority */
    },
    {
        &ThreadsProgram3Core0Var[THREAD_2_PROGRAM_3_CORE_0_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_2_PROGRAM_3_CORE_0_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_2_PROGRAM_3_CORE_0_PRIORITY,    /* const BitWidthType priority */
    },
};
const CosmOS_ThreadConfigurationType
    ThreadsProgram3Core1CfgConst[THREAD_PROGRAM_3_CORE_1_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram3Core1Var[THREAD_0_PROGRAM_3_CORE_1_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_3_CORE_1_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_3_CORE_1_PRIORITY,    /* const BitWidthType priority */
    },
};
const CosmOS_ThreadConfigurationType
    ThreadsProgram4Core0CfgConst[THREAD_PROGRAM_4_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsProgram4Core0Var[THREAD_0_PROGRAM_4_CORE_0_ID],    /* const CosmOS_ThreadVariableType * const var */
        &ThreadsSchedulablesCfgConst[SCHEDULABLE_THREAD_0_PROGRAM_4_CORE_0_ID],    /* const CosmOS_SchedulableConfigurationType * const schedulable */
        THREAD_0_PROGRAM_4_CORE_0_PRIORITY,    /* const BitWidthType priority */
    },
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_threadCfg_c
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
  * @defgroup Apis_threadCfg_c API's
  * @ingroup Local_threadCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_threadCfg_c Getters
  * @ingroup Apis_threadCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_threadCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_threadCfg_c Setters
  * @ingroup Apis_threadCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_threadCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_threadCfg_c General
  * @ingroup Apis_threadCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_threadCfg_c
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