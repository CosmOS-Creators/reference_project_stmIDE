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
** @date 2021-07-10
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
#define SCHEDULABLE_NUM                 (BitWidthType)        /* Maximal number of configurated schedulables on one core  */

#define SCHEDULABLE_NUM_CORE_0                       (BitWidthType)4        /* Number of configurated schedulables for the core CM7 */
#define SCHEDULABLE_NUM_CORE_1                       (BitWidthType)4        /* Number of configurated schedulables for the core CM4 */

#define SCHEDULABLE_TASK_0_PROGRAM_0_CORE_0_ID              (BitWidthType)0    /* Task Idle_CM7 schedulable identificator */
#define SCHEDULABLE_TASK_1_PROGRAM_0_CORE_0_ID              (BitWidthType)1    /* Task sysJobs_CM7 schedulable identificator */
#define SCHEDULABLE_TASK_0_PROGRAM_1_CORE_0_ID              (BitWidthType)2    /* Task Task_0_Core_0_Handler schedulable identificator */
#define SCHEDULABLE_TASK_0_PROGRAM_0_CORE_1_ID              (BitWidthType)3    /* Task Idle_CM4 schedulable identificator */
#define SCHEDULABLE_TASK_1_PROGRAM_0_CORE_1_ID              (BitWidthType)4    /* Task sysJobs_CM4 schedulable identificator */
#define SCHEDULABLE_TASK_0_PROGRAM_1_CORE_1_ID              (BitWidthType)5    /* Task Task_0_Core_1_Handler schedulable identificator */

#define SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_0_ID            (BitWidthType)0   /* Thread IdleThread_CM7 schedulable identificator */
#define SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_1_ID            (BitWidthType)1   /* Thread IdleThread_CM4 schedulable identificator */

#define SCHEDULABLE_0_UNIQUE_ID            (BitWidthType)0   /* Schedulable Idle_CM7 unique identificator */
#define SCHEDULABLE_1_UNIQUE_ID            (BitWidthType)1   /* Schedulable sysJobs_CM7 unique identificator */
#define SCHEDULABLE_2_UNIQUE_ID            (BitWidthType)2   /* Schedulable Task_0_Core_0_Handler unique identificator */
#define SCHEDULABLE_3_UNIQUE_ID            (BitWidthType)3   /* Schedulable Idle_CM4 unique identificator */
#define SCHEDULABLE_4_UNIQUE_ID            (BitWidthType)4   /* Schedulable sysJobs_CM4 unique identificator */
#define SCHEDULABLE_5_UNIQUE_ID            (BitWidthType)5   /* Schedulable Task_0_Core_1_Handler unique identificator */
#define SCHEDULABLE_6_UNIQUE_ID            (BitWidthType)6   /* Schedulable IdleThread_CM7 unique identificator */
#define SCHEDULABLE_7_UNIQUE_ID            (BitWidthType)7   /* Schedulable IdleThread_CM4 unique identificator */
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