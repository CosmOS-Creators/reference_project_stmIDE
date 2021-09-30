/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysDefsStacks.h
*********************************************************************************
<!--                    sysDefsStacks Unit Group Definition                   -->
*********************************************************************************
** @defgroup sysDefsStacks_unit sysDefsStacks Unit
** @ingroup sysDefs_module
** @brief sysDefsStacks Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-09-30
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--                sysDefsStacks Unit Global Group Definition                -->
*********************************************************************************
** @defgroup Global_sysDefsStacks Global
** @ingroup sysDefsStacks_unit
** @brief sysDefsStacks globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SYSDEFSSTACKS_H__
#define __SYSDEFSSTACKS_H__
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
  * @defgroup Macros_sysDefsStacks_h Macros
  * @ingroup Global_sysDefsStacks
  * @{
********************************************************************************/
#define KERNEL_NUM                                    (BitWidthType)2    /* Number of configurated kernels */

#define STACK_KERNEL_0_CORE_0_ID                      (BitWidthType)0    /* Kernel stack for core CM7 identificator */
#define STACK_KERNEL_0_CORE_0_HIGH_ADDRESS            (AddressType)0x20000400    /* Kernel stack for core CM7 high address configuration */
#define STACK_KERNEL_0_CORE_0_LOW_ADDRESS             (AddressType)0x20000000    /* Kernel stack for core CM7 low address configuration */
#define STACK_KERNEL_0_CORE_0_SIZE                    (BitWidthType)0x0400	/* Kernel stack for core CM7 size configuration */

#define STACK_KERNEL_0_CORE_1_ID                      (BitWidthType)1    /* Kernel stack for core CM4 identificator */
#define STACK_KERNEL_0_CORE_1_HIGH_ADDRESS            (AddressType)0x10000400    /* Kernel stack for core CM4 high address configuration */
#define STACK_KERNEL_0_CORE_1_LOW_ADDRESS             (AddressType)0x10000000    /* Kernel stack for core CM4 low address configuration */
#define STACK_KERNEL_0_CORE_1_SIZE                    (BitWidthType)0x0400	/* Kernel stack for core CM4 size configuration */

#define TASK_NUM                                      (BitWidthType)6     /* Number of configurated tasks */

#define STACK_TASK_0_PROGRAM_0_CORE_0_ID              (BitWidthType)0    /* Task Idle_CM7 stack identificator */
#define STACK_TASK_0_PROGRAM_0_CORE_0_HIGH_ADDRESS    (AddressType)0x20000800    /* Task Idle_CM7 stack high address configuration */
#define STACK_TASK_0_PROGRAM_0_CORE_0_LOW_ADDRESS     (AddressType)0x20000400    /* Task Idle_CM7 stack low address configuration */
#define STACK_TASK_0_PROGRAM_0_CORE_0_SIZE            (BitWidthType)0x0400	/* Task Idle_CM7 stack size configuration */

#define STACK_TASK_1_PROGRAM_0_CORE_0_ID              (BitWidthType)1    /* Task sysJobs_CM7 stack identificator */
#define STACK_TASK_1_PROGRAM_0_CORE_0_HIGH_ADDRESS    (AddressType)0x20000800    /* Task sysJobs_CM7 stack high address configuration */
#define STACK_TASK_1_PROGRAM_0_CORE_0_LOW_ADDRESS     (AddressType)0x20000700    /* Task sysJobs_CM7 stack low address configuration */
#define STACK_TASK_1_PROGRAM_0_CORE_0_SIZE            (BitWidthType)0x0100	/* Task sysJobs_CM7 stack size configuration */

#define STACK_TASK_0_PROGRAM_1_CORE_0_ID              (BitWidthType)2    /* Task Timing_measurement_task_CM7 stack identificator */
#define STACK_TASK_0_PROGRAM_1_CORE_0_HIGH_ADDRESS    (AddressType)0x20000800    /* Task Timing_measurement_task_CM7 stack high address configuration */
#define STACK_TASK_0_PROGRAM_1_CORE_0_LOW_ADDRESS     (AddressType)0x20000400    /* Task Timing_measurement_task_CM7 stack low address configuration */
#define STACK_TASK_0_PROGRAM_1_CORE_0_SIZE            (BitWidthType)0x0400	/* Task Timing_measurement_task_CM7 stack size configuration */

#define STACK_TASK_0_PROGRAM_0_CORE_1_ID              (BitWidthType)3    /* Task Idle_CM4 stack identificator */
#define STACK_TASK_0_PROGRAM_0_CORE_1_HIGH_ADDRESS    (AddressType)0x10000800    /* Task Idle_CM4 stack high address configuration */
#define STACK_TASK_0_PROGRAM_0_CORE_1_LOW_ADDRESS     (AddressType)0x10000400    /* Task Idle_CM4 stack low address configuration */
#define STACK_TASK_0_PROGRAM_0_CORE_1_SIZE            (BitWidthType)0x0400	/* Task Idle_CM4 stack size configuration */

#define STACK_TASK_1_PROGRAM_0_CORE_1_ID              (BitWidthType)4    /* Task sysJobs_CM4 stack identificator */
#define STACK_TASK_1_PROGRAM_0_CORE_1_HIGH_ADDRESS    (AddressType)0x10000800    /* Task sysJobs_CM4 stack high address configuration */
#define STACK_TASK_1_PROGRAM_0_CORE_1_LOW_ADDRESS     (AddressType)0x10000700    /* Task sysJobs_CM4 stack low address configuration */
#define STACK_TASK_1_PROGRAM_0_CORE_1_SIZE            (BitWidthType)0x0100	/* Task sysJobs_CM4 stack size configuration */

#define STACK_TASK_0_PROGRAM_1_CORE_1_ID              (BitWidthType)5    /* Task Timing_measurement_task_CM4 stack identificator */
#define STACK_TASK_0_PROGRAM_1_CORE_1_HIGH_ADDRESS    (AddressType)0x10000800    /* Task Timing_measurement_task_CM4 stack high address configuration */
#define STACK_TASK_0_PROGRAM_1_CORE_1_LOW_ADDRESS     (AddressType)0x10000400    /* Task Timing_measurement_task_CM4 stack low address configuration */
#define STACK_TASK_0_PROGRAM_1_CORE_1_SIZE            (BitWidthType)0x0400	/* Task Timing_measurement_task_CM4 stack size configuration */

#define THREAD_NUM                                    (BitWidthType)7    /* Number of configurated threads */

#define STACK_THREAD_0_PROGRAM_0_CORE_0_ID            (BitWidthType)0   /* Thread IdleThread_CM7 stack identificator */
#define STACK_THREAD_0_PROGRAM_0_CORE_0_HIGH_ADDRESS  (AddressType)0x20000c00    /* Thread IdleThread_CM7 stack high address configuration */
#define STACK_THREAD_0_PROGRAM_0_CORE_0_LOW_ADDRESS   (AddressType)0x20000800    /* Thread IdleThread_CM7 stack low address configuration */
#define STACK_THREAD_0_PROGRAM_0_CORE_0_SIZE          (BitWidthType)0x0400	/* Thread IdleThread_CM7 stack size configuration */

#define STACK_THREAD_0_PROGRAM_0_CORE_1_ID            (BitWidthType)1   /* Thread IdleThread_CM4 stack identificator */
#define STACK_THREAD_0_PROGRAM_0_CORE_1_HIGH_ADDRESS  (AddressType)0x10000c00    /* Thread IdleThread_CM4 stack high address configuration */
#define STACK_THREAD_0_PROGRAM_0_CORE_1_LOW_ADDRESS   (AddressType)0x10000800    /* Thread IdleThread_CM4 stack low address configuration */
#define STACK_THREAD_0_PROGRAM_0_CORE_1_SIZE          (BitWidthType)0x0400	/* Thread IdleThread_CM4 stack size configuration */

#define STACK_THREAD_0_PROGRAM_1_CORE_0_ID            (BitWidthType)2   /* Thread Timing_measurement_thread_CM7 stack identificator */
#define STACK_THREAD_0_PROGRAM_1_CORE_0_HIGH_ADDRESS  (AddressType)0x20001000    /* Thread Timing_measurement_thread_CM7 stack high address configuration */
#define STACK_THREAD_0_PROGRAM_1_CORE_0_LOW_ADDRESS   (AddressType)0x20000c00    /* Thread Timing_measurement_thread_CM7 stack low address configuration */
#define STACK_THREAD_0_PROGRAM_1_CORE_0_SIZE          (BitWidthType)0x0400	/* Thread Timing_measurement_thread_CM7 stack size configuration */

#define STACK_THREAD_0_PROGRAM_1_CORE_1_ID            (BitWidthType)3   /* Thread Timing_measurement_thread_CM4 stack identificator */
#define STACK_THREAD_0_PROGRAM_1_CORE_1_HIGH_ADDRESS  (AddressType)0x10001000    /* Thread Timing_measurement_thread_CM4 stack high address configuration */
#define STACK_THREAD_0_PROGRAM_1_CORE_1_LOW_ADDRESS   (AddressType)0x10000c00    /* Thread Timing_measurement_thread_CM4 stack low address configuration */
#define STACK_THREAD_0_PROGRAM_1_CORE_1_SIZE          (BitWidthType)0x0400	/* Thread Timing_measurement_thread_CM4 stack size configuration */

#define STACK_THREAD_1_PROGRAM_1_CORE_1_ID            (BitWidthType)4   /* Thread Mutex_test_thread_CM4 stack identificator */
#define STACK_THREAD_1_PROGRAM_1_CORE_1_HIGH_ADDRESS  (AddressType)0x10001400    /* Thread Mutex_test_thread_CM4 stack high address configuration */
#define STACK_THREAD_1_PROGRAM_1_CORE_1_LOW_ADDRESS   (AddressType)0x10001000    /* Thread Mutex_test_thread_CM4 stack low address configuration */
#define STACK_THREAD_1_PROGRAM_1_CORE_1_SIZE          (BitWidthType)0x0400	/* Thread Mutex_test_thread_CM4 stack size configuration */

#define STACK_THREAD_0_PROGRAM_2_CORE_1_ID            (BitWidthType)5   /* Thread Logger_thread stack identificator */
#define STACK_THREAD_0_PROGRAM_2_CORE_1_HIGH_ADDRESS  (AddressType)0x10001800    /* Thread Logger_thread stack high address configuration */
#define STACK_THREAD_0_PROGRAM_2_CORE_1_LOW_ADDRESS   (AddressType)0x10001400    /* Thread Logger_thread stack low address configuration */
#define STACK_THREAD_0_PROGRAM_2_CORE_1_SIZE          (BitWidthType)0x0400	/* Thread Logger_thread stack size configuration */

#define STACK_THREAD_0_PROGRAM_2_CORE_0_ID            (BitWidthType)6   /* Thread TCPIP_thread stack identificator */
#define STACK_THREAD_0_PROGRAM_2_CORE_0_HIGH_ADDRESS  (AddressType)0x20001800    /* Thread TCPIP_thread stack high address configuration */
#define STACK_THREAD_0_PROGRAM_2_CORE_0_LOW_ADDRESS   (AddressType)0x20001000    /* Thread TCPIP_thread stack low address configuration */
#define STACK_THREAD_0_PROGRAM_2_CORE_0_SIZE          (BitWidthType)0x0800	/* Thread TCPIP_thread stack size configuration */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Macros_sysDefsStacks_h
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
  * @defgroup Variables_sysDefsStacks_h Variables
  * @ingroup Global_sysDefsStacks
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_sysDefsStacks_h
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
  * @defgroup Apis_sysDefsStacks_h API's
  * @ingroup Global_sysDefsStacks
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsStacks_h Getters
  * @ingroup Apis_sysDefsStacks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_sysDefsStacks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsStacks_h Setters
  * @ingroup Apis_sysDefsStacks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_sysDefsStacks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsStacks_h General
  * @ingroup Apis_sysDefsStacks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsStacks_h
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
  * @addtogroup Getters_sysDefsStacks_h Getters
  * @ingroup Apis_sysDefsStacks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_sysDefsStacks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsStacks_h Setters
  * @ingroup Apis_sysDefsStacks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_sysDefsStacks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsStacks_h General
  * @ingroup Apis_sysDefsStacks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsStacks_h
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