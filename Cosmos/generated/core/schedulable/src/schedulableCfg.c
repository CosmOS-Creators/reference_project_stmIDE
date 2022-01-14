/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file schedulableCfg.c
*********************************************************************************
<!--                schedulableCfg Unit Local Group Definition                -->
*********************************************************************************
** @defgroup Local_schedulableCfg Local
** @ingroup schedulableCfg_unit
** @brief schedulableCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "schedulableCfg.h"
#include "cosmosApiInternal.h"
#include "stackCfg.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_schedulableCfg_c Macros
  * @ingroup Local_schedulableCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_schedulableCfg_c
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
  * @defgroup Variables_schedulableCfg_c Variables
  * @ingroup Local_schedulableCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
CosmOS_SchedulableVariableType TasksSchedulablesVar[TASK_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        SCHEDULABLE_STATE_ENUM__READY,    /* CosmOS_SchedulableStateType state */
        STACK_TASK_0_PROGRAM_0_CORE_0_HIGH_ADDRESS,    /* StackPointerType stackPointer */
    },
    {
        SCHEDULABLE_STATE_ENUM__READY,    /* CosmOS_SchedulableStateType state */
        STACK_TASK_0_PROGRAM_0_CORE_1_HIGH_ADDRESS,    /* StackPointerType stackPointer */
    },
    {
        SCHEDULABLE_STATE_ENUM__READY,    /* CosmOS_SchedulableStateType state */
        STACK_TASK_1_PROGRAM_0_CORE_0_HIGH_ADDRESS,    /* StackPointerType stackPointer */
    },
    {
        SCHEDULABLE_STATE_ENUM__READY,    /* CosmOS_SchedulableStateType state */
        STACK_TASK_1_PROGRAM_0_CORE_1_HIGH_ADDRESS,    /* StackPointerType stackPointer */
    },
};

CosmOS_SchedulableVariableType
    ThreadsSchedulablesVar[THREAD_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        SCHEDULABLE_STATE_ENUM__READY,    /* CosmOS_SchedulableStateType state */
        STACK_THREAD_0_PROGRAM_0_CORE_0_HIGH_ADDRESS,    /* StackPointerType stackPointer */
    },
    {
        SCHEDULABLE_STATE_ENUM__READY,    /* CosmOS_SchedulableStateType state */
        STACK_THREAD_0_PROGRAM_0_CORE_1_HIGH_ADDRESS,    /* StackPointerType stackPointer */
    },
    {
        SCHEDULABLE_STATE_ENUM__READY,    /* CosmOS_SchedulableStateType state */
        STACK_THREAD_1_PROGRAM_0_CORE_0_HIGH_ADDRESS,    /* StackPointerType stackPointer */
    },
    {
        SCHEDULABLE_STATE_ENUM__READY,    /* CosmOS_SchedulableStateType state */
        STACK_THREAD_1_PROGRAM_0_CORE_1_HIGH_ADDRESS,    /* StackPointerType stackPointer */
    },
};
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_SchedulableConfigurationType
    TasksSchedulablesCfgConst[TASK_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &TasksSchedulablesVar[SCHEDULABLE_TASK_0_PROGRAM_0_CORE_0_ID],    /* CosmOS_SchedulableVariableType * const var */
        &TasksStacksCfgConst[STACK_TASK_0_PROGRAM_0_CORE_0_ID],    /* const CosmOS_StackConfigurationType * stack */
        SCHEDULABLE_INSTANCE_ENUM__TASK,    /* const CosmOS_SchedulableInstanceType instance */
        wrapped_demo_task_togglePin_CM7,    /* const CosmOS_GenericVoidType handler */
        False,    /* const CosmOS_BooleanType fp */
        SCHEDULABLE_0_UNIQUE_ID,    /* const BitWidthType id */
        TASK_0_PROGRAM_0_CORE_0_ID,    /* const BitWidthType instanceId */
        PROGRAM_0_CORE_0_ID,    /* const BitWidthType programId */
        CORE_0_ID,    /* const BitWidthType coreId */
        SCHEDULABLE_NO_ALARM_ID,    /* const BitWidthType alarmId */
        SCHEDULABLE_0_PERIPHERAL_ACCESS_LOW_ADDRESS,    /* const BitWidthType peripheralAccessLowAddress */
        SCHEDULABLE_0_PERIPHERAL_ACCESS_HIGH_ADDRESS,    /* const BitWidthType peripheralAccessHighAddress */
        SCHEDULABLE_0_PERIPHERAL_ACCESS_HIGH_SIZE,    /* const BitWidthType peripheralAccessSize */
    },
    {
        &TasksSchedulablesVar[SCHEDULABLE_TASK_0_PROGRAM_0_CORE_1_ID],    /* CosmOS_SchedulableVariableType * const var */
        &TasksStacksCfgConst[STACK_TASK_0_PROGRAM_0_CORE_1_ID],    /* const CosmOS_StackConfigurationType * stack */
        SCHEDULABLE_INSTANCE_ENUM__TASK,    /* const CosmOS_SchedulableInstanceType instance */
        wrapped_demo_task_togglePin_CM4,    /* const CosmOS_GenericVoidType handler */
        False,    /* const CosmOS_BooleanType fp */
        SCHEDULABLE_1_UNIQUE_ID,    /* const BitWidthType id */
        TASK_0_PROGRAM_0_CORE_1_ID,    /* const BitWidthType instanceId */
        PROGRAM_0_CORE_1_ID,    /* const BitWidthType programId */
        CORE_1_ID,    /* const BitWidthType coreId */
        SCHEDULABLE_NO_ALARM_ID,    /* const BitWidthType alarmId */
        SCHEDULABLE_1_PERIPHERAL_ACCESS_LOW_ADDRESS,    /* const BitWidthType peripheralAccessLowAddress */
        SCHEDULABLE_1_PERIPHERAL_ACCESS_HIGH_ADDRESS,    /* const BitWidthType peripheralAccessHighAddress */
        SCHEDULABLE_1_PERIPHERAL_ACCESS_HIGH_SIZE,    /* const BitWidthType peripheralAccessSize */
    },
    {
        &TasksSchedulablesVar[SCHEDULABLE_TASK_1_PROGRAM_0_CORE_0_ID],    /* CosmOS_SchedulableVariableType * const var */
        &TasksStacksCfgConst[STACK_TASK_1_PROGRAM_0_CORE_0_ID],    /* const CosmOS_StackConfigurationType * stack */
        SCHEDULABLE_INSTANCE_ENUM__TASK,    /* const CosmOS_SchedulableInstanceType instance */
        wrapped_idle_CM7,    /* const CosmOS_GenericVoidType handler */
        False,    /* const CosmOS_BooleanType fp */
        SCHEDULABLE_2_UNIQUE_ID,    /* const BitWidthType id */
        TASK_1_PROGRAM_0_CORE_0_ID,    /* const BitWidthType instanceId */
        PROGRAM_0_CORE_0_ID,    /* const BitWidthType programId */
        CORE_0_ID,    /* const BitWidthType coreId */
        SCHEDULABLE_NO_ALARM_ID,    /* const BitWidthType alarmId */
        SCHEDULABLE_2_PERIPHERAL_ACCESS_LOW_ADDRESS,    /* const BitWidthType peripheralAccessLowAddress */
        SCHEDULABLE_2_PERIPHERAL_ACCESS_HIGH_ADDRESS,    /* const BitWidthType peripheralAccessHighAddress */
        SCHEDULABLE_2_PERIPHERAL_ACCESS_HIGH_SIZE,    /* const BitWidthType peripheralAccessSize */
    },
    {
        &TasksSchedulablesVar[SCHEDULABLE_TASK_1_PROGRAM_0_CORE_1_ID],    /* CosmOS_SchedulableVariableType * const var */
        &TasksStacksCfgConst[STACK_TASK_1_PROGRAM_0_CORE_1_ID],    /* const CosmOS_StackConfigurationType * stack */
        SCHEDULABLE_INSTANCE_ENUM__TASK,    /* const CosmOS_SchedulableInstanceType instance */
        wrapped_idle_CM4,    /* const CosmOS_GenericVoidType handler */
        False,    /* const CosmOS_BooleanType fp */
        SCHEDULABLE_3_UNIQUE_ID,    /* const BitWidthType id */
        TASK_1_PROGRAM_0_CORE_1_ID,    /* const BitWidthType instanceId */
        PROGRAM_0_CORE_1_ID,    /* const BitWidthType programId */
        CORE_1_ID,    /* const BitWidthType coreId */
        SCHEDULABLE_NO_ALARM_ID,    /* const BitWidthType alarmId */
        SCHEDULABLE_3_PERIPHERAL_ACCESS_LOW_ADDRESS,    /* const BitWidthType peripheralAccessLowAddress */
        SCHEDULABLE_3_PERIPHERAL_ACCESS_HIGH_ADDRESS,    /* const BitWidthType peripheralAccessHighAddress */
        SCHEDULABLE_3_PERIPHERAL_ACCESS_HIGH_SIZE,    /* const BitWidthType peripheralAccessSize */
    },
};

const CosmOS_SchedulableConfigurationType
    ThreadsSchedulablesCfgConst[THREAD_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &ThreadsSchedulablesVar[SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_0_ID],    /* CosmOS_SchedulableVariableType * const var */
        &ThreadsStacksCfgConst[STACK_THREAD_0_PROGRAM_0_CORE_0_ID],    /* const CosmOS_StackConfigurationType * stack */
        SCHEDULABLE_INSTANCE_ENUM__THREAD,    /* const CosmOS_SchedulableInstanceType instance */
        wrapped_idleThread_CM7,    /* const CosmOS_GenericVoidType handler */
        False,    /* const CosmOS_BooleanType fp */
        SCHEDULABLE_4_UNIQUE_ID,    /* const BitWidthType id */
        THREAD_0_PROGRAM_0_CORE_0_ID,    /* const BitWidthType instanceId */
        PROGRAM_0_CORE_0_ID,    /* const BitWidthType programId */
        CORE_0_ID,    /* const BitWidthType coreId */
        ALARM_0_PROGRAM_0_CORE_0_ID,    /* const BitWidthType alarmId */
        SCHEDULABLE_4_PERIPHERAL_ACCESS_LOW_ADDRESS,    /* const BitWidthType peripheralAccessLowAddress */
        SCHEDULABLE_4_PERIPHERAL_ACCESS_HIGH_ADDRESS,    /* const BitWidthType peripheralAccessHighAddress */
        SCHEDULABLE_4_PERIPHERAL_ACCESS_HIGH_SIZE,    /* const BitWidthType peripheralAccessSize */
    },
    {
        &ThreadsSchedulablesVar[SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_1_ID],    /* CosmOS_SchedulableVariableType * const var */
        &ThreadsStacksCfgConst[STACK_THREAD_0_PROGRAM_0_CORE_1_ID],    /* const CosmOS_StackConfigurationType * stack */
        SCHEDULABLE_INSTANCE_ENUM__THREAD,    /* const CosmOS_SchedulableInstanceType instance */
        wrapped_idleThread_CM4,    /* const CosmOS_GenericVoidType handler */
        False,    /* const CosmOS_BooleanType fp */
        SCHEDULABLE_5_UNIQUE_ID,    /* const BitWidthType id */
        THREAD_0_PROGRAM_0_CORE_1_ID,    /* const BitWidthType instanceId */
        PROGRAM_0_CORE_1_ID,    /* const BitWidthType programId */
        CORE_1_ID,    /* const BitWidthType coreId */
        ALARM_0_PROGRAM_0_CORE_1_ID,    /* const BitWidthType alarmId */
        SCHEDULABLE_5_PERIPHERAL_ACCESS_LOW_ADDRESS,    /* const BitWidthType peripheralAccessLowAddress */
        SCHEDULABLE_5_PERIPHERAL_ACCESS_HIGH_ADDRESS,    /* const BitWidthType peripheralAccessHighAddress */
        SCHEDULABLE_5_PERIPHERAL_ACCESS_HIGH_SIZE,    /* const BitWidthType peripheralAccessSize */
    },
    {
        &ThreadsSchedulablesVar[SCHEDULABLE_THREAD_1_PROGRAM_0_CORE_0_ID],    /* CosmOS_SchedulableVariableType * const var */
        &ThreadsStacksCfgConst[STACK_THREAD_1_PROGRAM_0_CORE_0_ID],    /* const CosmOS_StackConfigurationType * stack */
        SCHEDULABLE_INSTANCE_ENUM__THREAD,    /* const CosmOS_SchedulableInstanceType instance */
        wrapped_demo_thread_dynamicAllocation_toggleLed_CM7,    /* const CosmOS_GenericVoidType handler */
        True,    /* const CosmOS_BooleanType fp */
        SCHEDULABLE_6_UNIQUE_ID,    /* const BitWidthType id */
        THREAD_1_PROGRAM_0_CORE_0_ID,    /* const BitWidthType instanceId */
        PROGRAM_0_CORE_0_ID,    /* const BitWidthType programId */
        CORE_0_ID,    /* const BitWidthType coreId */
        ALARM_1_PROGRAM_0_CORE_0_ID,    /* const BitWidthType alarmId */
        SCHEDULABLE_6_PERIPHERAL_ACCESS_LOW_ADDRESS,    /* const BitWidthType peripheralAccessLowAddress */
        SCHEDULABLE_6_PERIPHERAL_ACCESS_HIGH_ADDRESS,    /* const BitWidthType peripheralAccessHighAddress */
        SCHEDULABLE_6_PERIPHERAL_ACCESS_HIGH_SIZE,    /* const BitWidthType peripheralAccessSize */
    },
    {
        &ThreadsSchedulablesVar[SCHEDULABLE_THREAD_1_PROGRAM_0_CORE_1_ID],    /* CosmOS_SchedulableVariableType * const var */
        &ThreadsStacksCfgConst[STACK_THREAD_1_PROGRAM_0_CORE_1_ID],    /* const CosmOS_StackConfigurationType * stack */
        SCHEDULABLE_INSTANCE_ENUM__THREAD,    /* const CosmOS_SchedulableInstanceType instance */
        wrapped_demo_thread_dynamicAllocation_toggleLed_CM4,    /* const CosmOS_GenericVoidType handler */
        True,    /* const CosmOS_BooleanType fp */
        SCHEDULABLE_7_UNIQUE_ID,    /* const BitWidthType id */
        THREAD_1_PROGRAM_0_CORE_1_ID,    /* const BitWidthType instanceId */
        PROGRAM_0_CORE_1_ID,    /* const BitWidthType programId */
        CORE_1_ID,    /* const BitWidthType coreId */
        ALARM_1_PROGRAM_0_CORE_1_ID,    /* const BitWidthType alarmId */
        SCHEDULABLE_7_PERIPHERAL_ACCESS_LOW_ADDRESS,    /* const BitWidthType peripheralAccessLowAddress */
        SCHEDULABLE_7_PERIPHERAL_ACCESS_HIGH_ADDRESS,    /* const BitWidthType peripheralAccessHighAddress */
        SCHEDULABLE_7_PERIPHERAL_ACCESS_HIGH_SIZE,    /* const BitWidthType peripheralAccessSize */
    },
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_schedulableCfg_c
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
  * @defgroup Apis_schedulableCfg_c API's
  * @ingroup Local_schedulableCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_schedulableCfg_c Getters
  * @ingroup Apis_schedulableCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_schedulableCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_schedulableCfg_c Setters
  * @ingroup Apis_schedulableCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_schedulableCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_schedulableCfg_c General
  * @ingroup Apis_schedulableCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_schedulableCfg_c
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                        Function Definitions | Start                         **
********************************************************************************/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void
wrapped_demo_task_togglePin_CM7( void )
{
    demo_task_togglePin_CM7();
    cosmosApiInternal_schedulable_setExecutionStateToFinished();
    for(;;);
};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void
wrapped_idle_CM7( void )
{
    idle_CM7();
    for(;;);
};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
wrapped_demo_task_togglePin_CM4( void )
{
    demo_task_togglePin_CM4();
    cosmosApiInternal_schedulable_setExecutionStateToFinished();
    for(;;);
};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
wrapped_idle_CM4( void )
{
    idle_CM4();
    for(;;);
};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void
wrapped_idleThread_CM7( void )
{
    idleThread_CM7();
    for( ;; )
    {}
    };
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void
wrapped_demo_thread_dynamicAllocation_toggleLed_CM7( void )
{
    demo_thread_dynamicAllocation_toggleLed_CM7();
    };
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
wrapped_idleThread_CM4( void )
{
    idleThread_CM4();
    for( ;; )
    {}
    };
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
wrapped_demo_thread_dynamicAllocation_toggleLed_CM4( void )
{
    demo_thread_dynamicAllocation_toggleLed_CM4();
    };
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/********************************************************************************
**                        Function Definitions | Stop                          **
********************************************************************************/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/