/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysDefsTasks.h
*********************************************************************************
<!--                    sysDefsTasks Unit Group Definition                    -->
*********************************************************************************
** @defgroup sysDefsTasks_unit sysDefsTasks Unit
** @ingroup sysDefs_module
** @brief sysDefsTasks Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2022-01-05
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--                 sysDefsTasks Unit Global Group Definition                -->
*********************************************************************************
** @defgroup Global_sysDefsTasks Global
** @ingroup sysDefsTasks_unit
** @brief sysDefsTasks globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SYSDEFSTASKS_H__
#define __SYSDEFSTASKS_H__
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
#include "cosmosTypes.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_sysDefsTasks_h Macros
  * @ingroup Global_sysDefsTasks
  * @{
********************************************************************************/
#define TASK_PROGRAM_0_CORE_0_NUM             (BitWidthType)2        /* Number of configured tasks for the program default_CM7*/
#define TASK_PROGRAM_1_CORE_0_NUM             (BitWidthType)1        /* Number of configured tasks for the program timing_measurement_CM7*/
#define TASK_PROGRAM_0_CORE_1_NUM             (BitWidthType)2        /* Number of configured tasks for the program default_CM4*/
#define TASK_PROGRAM_1_CORE_1_NUM             (BitWidthType)1        /* Number of configured tasks for the program timing_measurement_CM4*/
#define TASK_PROGRAM_2_CORE_1_NUM             (BitWidthType)0        /* Number of configured tasks for the program logger*/
#define TASK_PROGRAM_2_CORE_0_NUM             (BitWidthType)0        /* Number of configured tasks for the program ethernet_com*/
#define TASK_PROGRAM_3_CORE_0_NUM             (BitWidthType)0        /* Number of configured tasks for the program channel_test_CM7*/
#define TASK_PROGRAM_3_CORE_1_NUM             (BitWidthType)0        /* Number of configured tasks for the program channel_test_CM4*/
#define TASK_PROGRAM_4_CORE_0_NUM             (BitWidthType)0        /* Number of configured tasks for the program interrupt_handlers_CM7*/

#define TASK_0_PROGRAM_0_CORE_0_ID            (BitWidthType)0        /* Task Idle_CM7 identifier */
#define TASK_0_PROGRAM_0_CORE_0_WCET          (BitWidthType)0        /* The Worst execution time in ticks */

#define TASK_1_PROGRAM_0_CORE_0_ID            (BitWidthType)1        /* Task sysJobs_CM7 identifier */
#define TASK_1_PROGRAM_0_CORE_0_WCET          (BitWidthType)5        /* The Worst execution time in ticks */

#define TASK_0_PROGRAM_1_CORE_0_ID            (BitWidthType)0        /* Task Timing_measurement_task_CM7 identifier */
#define TASK_0_PROGRAM_1_CORE_0_WCET          (BitWidthType)5        /* The Worst execution time in ticks */

#define TASK_0_PROGRAM_0_CORE_1_ID            (BitWidthType)0        /* Task Idle_CM4 identifier */
#define TASK_0_PROGRAM_0_CORE_1_WCET          (BitWidthType)0        /* The Worst execution time in ticks */

#define TASK_1_PROGRAM_0_CORE_1_ID            (BitWidthType)1        /* Task sysJobs_CM4 identifier */
#define TASK_1_PROGRAM_0_CORE_1_WCET          (BitWidthType)5        /* The Worst execution time in ticks */

#define TASK_0_PROGRAM_1_CORE_1_ID            (BitWidthType)0        /* Task Timing_measurement_task_CM4 identifier */
#define TASK_0_PROGRAM_1_CORE_1_WCET          (BitWidthType)5        /* The Worst execution time in ticks */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_sysDefsTasks_h
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
  * @defgroup Variables_sysDefsTasks_h Variables
  * @ingroup Global_sysDefsTasks
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_sysDefsTasks_h
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
  * @defgroup Apis_sysDefsTasks_h API's
  * @ingroup Global_sysDefsTasks
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsTasks_h Getters
  * @ingroup Apis_sysDefsTasks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_sysDefsTasks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsTasks_h Setters
  * @ingroup Apis_sysDefsTasks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_sysDefsTasks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsTasks_h General
  * @ingroup Apis_sysDefsTasks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_sysDefsTasks_h
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
  * @addtogroup Getters_sysDefsTasks_h Getters
  * @ingroup Apis_sysDefsTasks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_sysDefsTasks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsTasks_h Setters
  * @ingroup Apis_sysDefsTasks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_sysDefsTasks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsTasks_h General
  * @ingroup Apis_sysDefsTasks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_sysDefsTasks_h
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