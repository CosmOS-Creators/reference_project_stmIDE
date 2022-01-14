/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file schedulerCfg.c
*********************************************************************************
<!--                 schedulerCfg Unit Local Group Definition                 -->
*********************************************************************************
** @defgroup Local_schedulerCfg Local
** @ingroup schedulerCfg_unit
** @brief schedulerCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "taskCfg.h"
#include "alarmCfg.h"
#include "schedulerCfg.h"
#include "schedulerScheduleTableCfg.h"
#include "schedulerThreadListCfg.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_schedulerCfg_c Macros
  * @ingroup Local_schedulerCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_schedulerCfg_c
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
  * @defgroup Variables_schedulerCfg_c Variables
  * @ingroup Local_schedulerCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
CosmOS_SchedulerVariableType SchedulersVar[SCHEDULER_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {                                                         /* SchedulersCfgConst[SCHEDULER_CORE_0_ID] */
        RESCHEDULE_TRIGGER_STATE_ENUM__SYSTEM,    /* CosmOS_RescheduleTriggerStateType rescheduleTriggerState */
        0,    /* BitWidthType curentTick */
        0,    /* BitWidthType priorTickStep */
        0,    /* BitWidthType scheduleTableIterator */
        0,    /* BitWidthType threadListIterator */
        SCHEDULER_STATE_ENUM__NOT_STARTED,    /* CosmOS_SchedulerStateType schedulerState */
        0,    /* BitWidthType nextSyncTick */
        False,    /* CosmOS_BooleanType syncInitState */
        0,    /* BitWidthType timerOffset */
    },
    {                                                         /* SchedulersCfgConst[SCHEDULER_CORE_1_ID] */
        RESCHEDULE_TRIGGER_STATE_ENUM__SYSTEM,    /* CosmOS_RescheduleTriggerStateType rescheduleTriggerState */
        0,    /* BitWidthType curentTick */
        0,    /* BitWidthType priorTickStep */
        0,    /* BitWidthType scheduleTableIterator */
        0,    /* BitWidthType threadListIterator */
        SCHEDULER_STATE_ENUM__NOT_STARTED,    /* CosmOS_SchedulerStateType schedulerState */
        0,    /* BitWidthType nextSyncTick */
        False,    /* CosmOS_BooleanType syncInitState */
        0,    /* BitWidthType timerOffset */
    },
};
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_SchedulerConfigurationType
    SchedulersCfgConst[SCHEDULER_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {                                                           /* SchedulersCfgConst[SCHEDULER_CORE_0_ID] */
        &SchedulersVar[SCHEDULER_CORE_0_ID],    /* CosmOS_SchedulerVariableType * var */
        ScheduleTableScheduler0CfgConst,    /* const CosmOS_ScheduleTableConfigurationType * scheduleTable */
        SchedulerThreadListScheduler0CfgConst,    /* const CosmOS_ThreadListConfigurationType * const threadList */
        HYPERTICK_SCHEDULER_0,    /* const BitWidthType hyperTick */
        PREEMPTTICK_SCHEDULER_0,    /* const BitWidthType preemptTick */
        SCHEDULETABLE_SCHEDULER_0_ELEMENT_NUM,    /* const BitWidthType scheduleTableElementsNum */
        SCHEDULERTHREADLIST_SCHEDULER_0_ELEMENT_NUM,    /* const BitWidthType threadListElementsNum */
        LAST_TO_FIRST_TASK_TICK_SCHEDULER_0,    /* const BitWidthType lastToFirstTaskTicks */
        SYNCTICKS_SCHEDULER_0,    /* const BitWidthType syncTicks */
        FIRST_SYNC_TASK_STARTTICK_SCHEDULER_0,    /* const BitWidthType firstSyncTaskStartTick */
        MAX_TIMER_TICK_SCHEDULER_0,    /* const BitWidthType maxTimerTick */
        TIMER_TICK_COUNT_SCHEDULER_0,    /* const BitWidthType timerTickCount */
        &TasksProgram0Core0CfgConst[TASK_1_PROGRAM_0_CORE_0_ID],    /* const CosmOS_TaskConfigurationType * const idleTask */
        AlarmsCore0CfgConst,    /* CosmOS_AlarmConfigurationType * const alarmCfgs */
    },
    {                                                           /* SchedulersCfgConst[SCHEDULER_CORE_1_ID] */
        &SchedulersVar[SCHEDULER_CORE_1_ID],    /* CosmOS_SchedulerVariableType * var */
        ScheduleTableScheduler1CfgConst,    /* const CosmOS_ScheduleTableConfigurationType * scheduleTable */
        SchedulerThreadListScheduler1CfgConst,    /* const CosmOS_ThreadListConfigurationType * const threadList */
        HYPERTICK_SCHEDULER_1,    /* const BitWidthType hyperTick */
        PREEMPTTICK_SCHEDULER_1,    /* const BitWidthType preemptTick */
        SCHEDULETABLE_SCHEDULER_1_ELEMENT_NUM,    /* const BitWidthType scheduleTableElementsNum */
        SCHEDULERTHREADLIST_SCHEDULER_1_ELEMENT_NUM,    /* const BitWidthType threadListElementsNum */
        LAST_TO_FIRST_TASK_TICK_SCHEDULER_1,    /* const BitWidthType lastToFirstTaskTicks */
        SYNCTICKS_SCHEDULER_1,    /* const BitWidthType syncTicks */
        FIRST_SYNC_TASK_STARTTICK_SCHEDULER_1,    /* const BitWidthType firstSyncTaskStartTick */
        MAX_TIMER_TICK_SCHEDULER_1,    /* const BitWidthType maxTimerTick */
        TIMER_TICK_COUNT_SCHEDULER_1,    /* const BitWidthType timerTickCount */
        &TasksProgram0Core1CfgConst[TASK_1_PROGRAM_0_CORE_1_ID],    /* const CosmOS_TaskConfigurationType * const idleTask */
        AlarmsCore1CfgConst,    /* CosmOS_AlarmConfigurationType * const alarmCfgs */
    },
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_schedulerCfg_c
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
  * @defgroup Apis_schedulerCfg_c API's
  * @ingroup Local_schedulerCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_schedulerCfg_c Getters
  * @ingroup Apis_schedulerCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_schedulerCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_schedulerCfg_c Setters
  * @ingroup Apis_schedulerCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_schedulerCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_schedulerCfg_c General
  * @ingroup Apis_schedulerCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_schedulerCfg_c
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