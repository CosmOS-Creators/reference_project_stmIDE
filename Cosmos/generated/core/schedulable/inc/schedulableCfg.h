/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file schedulableCfg.h
*********************************************************************************
<!--                   schedulableCfg Unit Group Definition                   -->
*********************************************************************************
** @defgroup schedulableCfg_unit schedulableCfg Unit
** @ingroup schedulable_module
** @brief schedulableCfg Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-09-28
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--                schedulableCfg Unit Global Group Definition               -->
*********************************************************************************
** @defgroup Global_schedulableCfg Global
** @ingroup schedulableCfg_unit
** @brief schedulableCfg globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SCHEDULABLECFG_H__
#define __SCHEDULABLECFG_H__
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
#include "sysDefs.h"
#include "cosmosTypes.h"
#include "memoryMapping.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_schedulableCfg_h Macros
  * @ingroup Global_schedulableCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Macros_schedulableCfg_h
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
  * @defgroup Variables_schedulableCfg_h Variables
  * @ingroup Global_schedulableCfg
  * @{
********************************************************************************/
extern const CosmOS_SchedulableConfigurationType TasksSchedulablesCfgConst[TASK_NUM];
extern const CosmOS_SchedulableConfigurationType ThreadsSchedulablesCfgConst[THREAD_NUM];

extern CosmOS_SchedulableVariableType TasksSchedulablesVar[TASK_NUM];
extern CosmOS_SchedulableVariableType ThreadsSchedulablesVar[THREAD_NUM];
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_schedulableCfg_h
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
  * @defgroup Apis_schedulableCfg_h API's
  * @ingroup Global_schedulableCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_schedulableCfg_h Getters
  * @ingroup Apis_schedulableCfg_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_schedulableCfg_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_schedulableCfg_h Setters
  * @ingroup Apis_schedulableCfg_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_schedulableCfg_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_schedulableCfg_h General
  * @ingroup Apis_schedulableCfg_h
  * @{
********************************************************************************/
__APPLICATION_FUNC_SECTION_CM7 void Idle_CM7(void);
__APPLICATION_FUNC_SECTION_CM7 void wrapped_Idle_CM7(void);
__APPLICATION_FUNC_SECTION_CM7 void sysJobs_CM7(void);
__APPLICATION_FUNC_SECTION_CM7 void wrapped_sysJobs_CM7(void);
__APPLICATION_FUNC_SECTION_CM7 void Timing_measurement_task_CM7(void);
__APPLICATION_FUNC_SECTION_CM7 void wrapped_Timing_measurement_task_CM7(void);
__APPLICATION_FUNC_SECTION_CM4 void Idle_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void wrapped_Idle_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void sysJobs_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void wrapped_sysJobs_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void Timing_measurement_task_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void wrapped_Timing_measurement_task_CM4(void);
__APPLICATION_FUNC_SECTION_CM7 void IdleThread_CM7(void);
__APPLICATION_FUNC_SECTION_CM7 void wrapped_IdleThread_CM7(void);
__APPLICATION_FUNC_SECTION_CM7 void Timing_measurement_thread_CM7(void);
__APPLICATION_FUNC_SECTION_CM7 void wrapped_Timing_measurement_thread_CM7(void);
__APPLICATION_FUNC_SECTION_CM4 void IdleThread_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void wrapped_IdleThread_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void Timing_measurement_thread_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void wrapped_Timing_measurement_thread_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void Mutex_test_thread_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void wrapped_Mutex_test_thread_CM4(void);
__APPLICATION_FUNC_SECTION_CM4 void Logger_thread(void);
__APPLICATION_FUNC_SECTION_CM4 void wrapped_Logger_thread(void);
__APPLICATION_FUNC_SECTION_CM7 void TCPIP_thread(void);
__APPLICATION_FUNC_SECTION_CM7 void wrapped_TCPIP_thread(void);
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_schedulableCfg_h
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
  * @addtogroup Getters_schedulableCfg_h Getters
  * @ingroup Apis_schedulableCfg_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_schedulableCfg_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_schedulableCfg_h Setters
  * @ingroup Apis_schedulableCfg_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_schedulableCfg_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_schedulableCfg_h General
  * @ingroup Apis_schedulableCfg_h
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 __WEAK void Idle_CM7(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 __WEAK void sysJobs_CM7(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 __WEAK void Timing_measurement_task_CM7(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 __WEAK void Idle_CM4(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 __WEAK void sysJobs_CM4(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 __WEAK void Timing_measurement_task_CM4(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 __WEAK void IdleThread_CM7(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 __WEAK void Timing_measurement_thread_CM7(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 __WEAK void IdleThread_CM4(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 __WEAK void Timing_measurement_thread_CM4(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 __WEAK void Mutex_test_thread_CM4(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM4)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 __WEAK void Logger_thread(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM4)
/* @endcond*/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 __WEAK void TCPIP_thread(void){};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_schedulableCfg_h
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