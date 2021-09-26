/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysDefsSchedulables.h
*********************************************************************************
<!--                 sysDefsSchedulables Unit Group Definition                -->
*********************************************************************************
** @defgroup sysDefsSchedulables_unit sysDefsSchedulables Unit
** @ingroup sysDefs_module
** @brief sysDefsSchedulables Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-09-26
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--             sysDefsSchedulables Unit Global Group Definition             -->
*********************************************************************************
** @defgroup Global_sysDefsSchedulables Global
** @ingroup sysDefsSchedulables_unit
** @brief sysDefsSchedulables globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SYSDEFSSCHEDULABLES_H__
#define __SYSDEFSSCHEDULABLES_H__
/********************************************************************************
**                         START OF C++ SUPPORT SECTION                        **
********************************************************************************/
#ifdef __cplusplus
 extern "C" {
#endif
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "cosmosTypesStd.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_sysDefsSchedulables_h Macros
  * @ingroup Global_sysDefsSchedulables
  * @{
********************************************************************************/
#define SCHEDULABLE_NUM                 (BitWidthType)12        /* Maximal number of configurated schedulables on one core  */
#define SCHEDULABLE_NO_ALARM_ID			(BitWidthType)0       /* Schedulable without alarms - critical threads  */

#define SCHEDULABLE_NUM_CORE_0                       (BitWidthType)6        /* Number of configurated schedulables for the core CM7 */
#define SCHEDULABLE_NUM_CORE_1                       (BitWidthType)6        /* Number of configurated schedulables for the core CM4 */

#define SCHEDULABLE_TASK_0_PROGRAM_0_CORE_0_ID              (BitWidthType)0    /* Task Idle_CM7 schedulable identificator */
#define SCHEDULABLE_TASK_1_PROGRAM_0_CORE_0_ID              (BitWidthType)1    /* Task sysJobs_CM7 schedulable identificator */
#define SCHEDULABLE_TASK_0_PROGRAM_1_CORE_0_ID              (BitWidthType)2    /* Task Task_0_Core_0_Handler schedulable identificator */
#define SCHEDULABLE_TASK_0_PROGRAM_0_CORE_1_ID              (BitWidthType)3    /* Task Idle_CM4 schedulable identificator */
#define SCHEDULABLE_TASK_1_PROGRAM_0_CORE_1_ID              (BitWidthType)4    /* Task sysJobs_CM4 schedulable identificator */
#define SCHEDULABLE_TASK_0_PROGRAM_1_CORE_1_ID              (BitWidthType)5    /* Task Task_0_Core_1_Handler schedulable identificator */

#define SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_0_ID            (BitWidthType)0   /* Thread IdleThread_CM7 schedulable identificator */
#define SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_1_ID            (BitWidthType)1   /* Thread IdleThread_CM4 schedulable identificator */
#define SCHEDULABLE_THREAD_0_PROGRAM_1_CORE_0_ID            (BitWidthType)2   /* Thread Thread_Core_0 schedulable identificator */
#define SCHEDULABLE_THREAD_0_PROGRAM_1_CORE_1_ID            (BitWidthType)3   /* Thread Thread_Core_1 schedulable identificator */
#define SCHEDULABLE_THREAD_1_PROGRAM_1_CORE_1_ID            (BitWidthType)4   /* Thread Thread_mutex_test_CM4 schedulable identificator */
#define SCHEDULABLE_THREAD_0_PROGRAM_2_CORE_0_ID            (BitWidthType)5   /* Thread Logger_thread schedulable identificator */

#define SCHEDULABLE_0_UNIQUE_ID            (BitWidthType)0   /* Schedulable Idle_CM7 unique identificator */
#define SCHEDULABLE_0_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable Idle_CM7 peripheralAccessLowAddress */
#define SCHEDULABLE_0_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable Idle_CM7 peripheralAccessHighAddress */
#define SCHEDULABLE_0_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable Idle_CM7 peripheralAccessSize */
#define SCHEDULABLE_1_UNIQUE_ID            (BitWidthType)1   /* Schedulable sysJobs_CM7 unique identificator */
#define SCHEDULABLE_1_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable sysJobs_CM7 peripheralAccessLowAddress */
#define SCHEDULABLE_1_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable sysJobs_CM7 peripheralAccessHighAddress */
#define SCHEDULABLE_1_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable sysJobs_CM7 peripheralAccessSize */
#define SCHEDULABLE_2_UNIQUE_ID            (BitWidthType)2   /* Schedulable Task_0_Core_0_Handler unique identificator */
#define SCHEDULABLE_2_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable Task_0_Core_0_Handler peripheralAccessLowAddress */
#define SCHEDULABLE_2_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable Task_0_Core_0_Handler peripheralAccessHighAddress */
#define SCHEDULABLE_2_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable Task_0_Core_0_Handler peripheralAccessSize */
#define SCHEDULABLE_3_UNIQUE_ID            (BitWidthType)3   /* Schedulable Idle_CM4 unique identificator */
#define SCHEDULABLE_3_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable Idle_CM4 peripheralAccessLowAddress */
#define SCHEDULABLE_3_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable Idle_CM4 peripheralAccessHighAddress */
#define SCHEDULABLE_3_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable Idle_CM4 peripheralAccessSize */
#define SCHEDULABLE_4_UNIQUE_ID            (BitWidthType)4   /* Schedulable sysJobs_CM4 unique identificator */
#define SCHEDULABLE_4_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable sysJobs_CM4 peripheralAccessLowAddress */
#define SCHEDULABLE_4_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable sysJobs_CM4 peripheralAccessHighAddress */
#define SCHEDULABLE_4_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable sysJobs_CM4 peripheralAccessSize */
#define SCHEDULABLE_5_UNIQUE_ID            (BitWidthType)5   /* Schedulable Task_0_Core_1_Handler unique identificator */
#define SCHEDULABLE_5_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable Task_0_Core_1_Handler peripheralAccessLowAddress */
#define SCHEDULABLE_5_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable Task_0_Core_1_Handler peripheralAccessHighAddress */
#define SCHEDULABLE_5_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable Task_0_Core_1_Handler peripheralAccessSize */
#define SCHEDULABLE_6_UNIQUE_ID            (BitWidthType)6   /* Schedulable IdleThread_CM7 unique identificator */
#define SCHEDULABLE_6_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable IdleThread_CM7 peripheralAccessLowAddress */
#define SCHEDULABLE_6_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable IdleThread_CM7 peripheralAccessHighAddress */
#define SCHEDULABLE_6_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable IdleThread_CM7 peripheralAccessSize */
#define SCHEDULABLE_7_UNIQUE_ID            (BitWidthType)7   /* Schedulable IdleThread_CM4 unique identificator */
#define SCHEDULABLE_7_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable IdleThread_CM4 peripheralAccessLowAddress */
#define SCHEDULABLE_7_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable IdleThread_CM4 peripheralAccessHighAddress */
#define SCHEDULABLE_7_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable IdleThread_CM4 peripheralAccessSize */
#define SCHEDULABLE_8_UNIQUE_ID            (BitWidthType)8   /* Schedulable Thread_Core_0 unique identificator */
#define SCHEDULABLE_8_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable Thread_Core_0 peripheralAccessLowAddress */
#define SCHEDULABLE_8_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable Thread_Core_0 peripheralAccessHighAddress */
#define SCHEDULABLE_8_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable Thread_Core_0 peripheralAccessSize */
#define SCHEDULABLE_9_UNIQUE_ID            (BitWidthType)9   /* Schedulable Thread_Core_1 unique identificator */
#define SCHEDULABLE_9_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable Thread_Core_1 peripheralAccessLowAddress */
#define SCHEDULABLE_9_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable Thread_Core_1 peripheralAccessHighAddress */
#define SCHEDULABLE_9_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable Thread_Core_1 peripheralAccessSize */
#define SCHEDULABLE_10_UNIQUE_ID            (BitWidthType)10   /* Schedulable Thread_mutex_test_CM4 unique identificator */
#define SCHEDULABLE_10_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x0000   /* Schedulable Thread_mutex_test_CM4 peripheralAccessLowAddress */
#define SCHEDULABLE_10_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x0000   /* Schedulable Thread_mutex_test_CM4 peripheralAccessHighAddress */
#define SCHEDULABLE_10_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)0   /* Schedulable Thread_mutex_test_CM4 peripheralAccessSize */
#define SCHEDULABLE_11_UNIQUE_ID            (BitWidthType)11   /* Schedulable Logger_thread unique identificator */
#define SCHEDULABLE_11_PERIPHERAL_ACCESS_LOW_ADDRESS            (AddressType)0x40000000   /* Schedulable Logger_thread peripheralAccessLowAddress */
#define SCHEDULABLE_11_PERIPHERAL_ACCESS_HIGH_ADDRESS            (AddressType)0x40100000   /* Schedulable Logger_thread peripheralAccessHighAddress */
#define SCHEDULABLE_11_PERIPHERAL_ACCESS_HIGH_SIZE            (BitWidthType)1048576   /* Schedulable Logger_thread peripheralAccessSize */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Macros_sysDefsSchedulables_h
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
  * @defgroup Variables_sysDefsSchedulables_h Variables
  * @ingroup Global_sysDefsSchedulables
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_sysDefsSchedulables_h
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
  * @defgroup Apis_sysDefsSchedulables_h API's
  * @ingroup Global_sysDefsSchedulables
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsSchedulables_h Getters
  * @ingroup Apis_sysDefsSchedulables_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_sysDefsSchedulables_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsSchedulables_h Setters
  * @ingroup Apis_sysDefsSchedulables_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_sysDefsSchedulables_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsSchedulables_h General
  * @ingroup Apis_sysDefsSchedulables_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsSchedulables_h
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                        Function Definitions | Start                         **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsSchedulables_h Getters
  * @ingroup Apis_sysDefsSchedulables_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_sysDefsSchedulables_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsSchedulables_h Setters
  * @ingroup Apis_sysDefsSchedulables_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_sysDefsSchedulables_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsSchedulables_h General
  * @ingroup Apis_sysDefsSchedulables_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsSchedulables_h
********************************************************************************/
/********************************************************************************
**                        Function Definitions | Stop                          **
********************************************************************************/
#ifdef __cplusplus
}
#endif
/********************************************************************************
**                         END OF C++ SUPPORT SECTION                          **
********************************************************************************/
#endif
/********************************************************************************
**                           END OF THE HEADER FILE                            **
********************************************************************************/