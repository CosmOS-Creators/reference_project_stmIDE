/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file alarmCfg.c
*********************************************************************************
<!--                  alarmCfg Unit Local Group Definition                    -->
*********************************************************************************
** @defgroup Local_alarmCfg Local
** @ingroup alarmCfg_unit
** @brief alarmCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "alarmCfg.h"
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
  * @defgroup Macros_alarmCfg_c Macros
  * @ingroup Local_alarmCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_alarmCfg_c
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
  * @defgroup Variables_alarmCfg_c Variables
  * @ingroup Local_alarmCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
CosmOS_AlarmVariableType AlarmsCore0Var[ALARM_CORE_0_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO
{
    {
        ALARM_STATE_ENUM__DISABLED,    /* CosmOS_AlarmStateType state */
        0,    /* BitWidthType timer */
    },
    {
        ALARM_STATE_ENUM__DISABLED,    /* CosmOS_AlarmStateType state */
        0,    /* BitWidthType timer */
    },
    {
        ALARM_STATE_ENUM__DISABLED,    /* CosmOS_AlarmStateType state */
        0,    /* BitWidthType timer */
    },
};
CosmOS_AlarmVariableType AlarmsCore1Var[ALARM_CORE_1_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO
{
    {
        ALARM_STATE_ENUM__DISABLED,    /* CosmOS_AlarmStateType state */
        0,    /* BitWidthType timer */
    },
    {
        ALARM_STATE_ENUM__DISABLED,    /* CosmOS_AlarmStateType state */
        0,    /* BitWidthType timer */
    },
    {
        ALARM_STATE_ENUM__DISABLED,    /* CosmOS_AlarmStateType state */
        0,    /* BitWidthType timer */
    },
    {
        ALARM_STATE_ENUM__DISABLED,    /* CosmOS_AlarmStateType state */
        0,    /* BitWidthType timer */
    },
};
/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_AlarmConfigurationType AlarmsCore0CfgConst[ALARM_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &AlarmsCore0Var
            [ALARM_0_PROGRAM_0_CORE_0_ID],    /* CosmOS_AlarmVariableType * const var */
        &ThreadsSchedulablesCfgConst
            [SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_0_ID],    /* CosmOS_SchedulableConfigurationType * const schedulableCfg */
    },
    {
        &AlarmsCore0Var
            [ALARM_1_PROGRAM_1_CORE_0_ID],    /* CosmOS_AlarmVariableType * const var */
        &ThreadsSchedulablesCfgConst
            [SCHEDULABLE_THREAD_0_PROGRAM_1_CORE_0_ID],    /* CosmOS_SchedulableConfigurationType * const schedulableCfg */
    },
    {
        &AlarmsCore0Var
            [ALARM_2_PROGRAM_2_CORE_0_ID],    /* CosmOS_AlarmVariableType * const var */
        &ThreadsSchedulablesCfgConst
            [SCHEDULABLE_THREAD_0_PROGRAM_2_CORE_0_ID],    /* CosmOS_SchedulableConfigurationType * const schedulableCfg */
    },
};
const CosmOS_AlarmConfigurationType AlarmsCore1CfgConst[ALARM_CORE_1_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &AlarmsCore1Var
            [ALARM_0_PROGRAM_0_CORE_1_ID],    /* CosmOS_AlarmVariableType * const var */
        &ThreadsSchedulablesCfgConst
            [SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_1_ID],    /* CosmOS_SchedulableConfigurationType * const schedulableCfg */
    },
    {
        &AlarmsCore1Var
            [ALARM_1_PROGRAM_1_CORE_1_ID],    /* CosmOS_AlarmVariableType * const var */
        &ThreadsSchedulablesCfgConst
            [SCHEDULABLE_THREAD_0_PROGRAM_1_CORE_1_ID],    /* CosmOS_SchedulableConfigurationType * const schedulableCfg */
    },
    {
        &AlarmsCore1Var
            [ALARM_2_PROGRAM_1_CORE_1_ID],    /* CosmOS_AlarmVariableType * const var */
        &ThreadsSchedulablesCfgConst
            [SCHEDULABLE_THREAD_1_PROGRAM_1_CORE_1_ID],    /* CosmOS_SchedulableConfigurationType * const schedulableCfg */
    },
    {
        &AlarmsCore1Var
            [ALARM_3_PROGRAM_2_CORE_1_ID],    /* CosmOS_AlarmVariableType * const var */
        &ThreadsSchedulablesCfgConst
            [SCHEDULABLE_THREAD_0_PROGRAM_2_CORE_1_ID],    /* CosmOS_SchedulableConfigurationType * const schedulableCfg */
    },
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_alarmCfg_c
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
  * @defgroup Apis_alarmCfg_c API's
  * @ingroup Local_alarmCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_alarmCfg_c Getters
  * @ingroup Apis_alarmCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_alarmCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_alarmCfg_c Setters
  * @ingroup Apis_alarmCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_alarmCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_alarmCfg_c General
  * @ingroup Apis_alarmCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_alarmCfg_c
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