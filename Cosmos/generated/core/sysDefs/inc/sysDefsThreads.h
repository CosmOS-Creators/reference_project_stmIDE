/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY TiCOS CustomBox                     **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysDefsThreads.h
*********************************************************************************
<!--                   sysDefsThreads Unit Group Definition                   -->
*********************************************************************************
** @defgroup sysDefsThreads_unit sysDefsThreads Unit
** @ingroup sysDefs_module
** @brief sysDefsThreads Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-12-20
** @author Generated by TiCOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--               sysDefsThreads Unit Global Group Definition                -->
*********************************************************************************
** @defgroup Global_sysDefsThreads Global
** @ingroup sysDefsThreads_unit
** @brief sysDefsThreads globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SYSDEFSTHREADS_H__
#define __SYSDEFSTHREADS_H__
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
  * @defgroup Macros_sysDefsThreads_h Macros
  * @ingroup Global_sysDefsThreads
  * @{
********************************************************************************/
#define THREAD_PROGRAM_0_CORE_0_NUM    (BitWidthType)1    /* Number of configured threads for program default_CM7 */
#define THREAD_PROGRAM_1_CORE_0_NUM    (BitWidthType)1    /* Number of configured threads for program timing_measurement_CM7 */
#define THREAD_PROGRAM_0_CORE_1_NUM    (BitWidthType)1    /* Number of configured threads for program default_CM4 */
#define THREAD_PROGRAM_1_CORE_1_NUM    (BitWidthType)2    /* Number of configured threads for program timing_measurement_CM4 */
#define THREAD_PROGRAM_2_CORE_1_NUM    (BitWidthType)1    /* Number of configured threads for program logger */
#define THREAD_PROGRAM_2_CORE_0_NUM    (BitWidthType)1    /* Number of configured threads for program ethernet_com */
#define THREAD_PROGRAM_3_CORE_0_NUM    (BitWidthType)3    /* Number of configured threads for program channel_test_CM7 */
#define THREAD_PROGRAM_3_CORE_1_NUM    (BitWidthType)1    /* Number of configured threads for program channel_test_CM4 */

#define THREAD_0_PROGRAM_0_CORE_0_ID   (BitWidthType)0    /* Thread IdleThread_CM7 identifier */
#define THREAD_0_PROGRAM_0_CORE_0_PRIORITY   (BitWidthType)0    /* Thread IdleThread_CM7 priority */
#define THREAD_0_PROGRAM_0_CORE_1_ID   (BitWidthType)0    /* Thread IdleThread_CM4 identifier */
#define THREAD_0_PROGRAM_0_CORE_1_PRIORITY   (BitWidthType)0    /* Thread IdleThread_CM4 priority */
#define THREAD_0_PROGRAM_1_CORE_0_ID   (BitWidthType)0    /* Thread Synchronization_and_dynamicAllocation_test_thread_CM7 identifier */
#define THREAD_0_PROGRAM_1_CORE_0_PRIORITY   (BitWidthType)2    /* Thread Synchronization_and_dynamicAllocation_test_thread_CM7 priority */
#define THREAD_0_PROGRAM_1_CORE_1_ID   (BitWidthType)0    /* Thread Synchronization_and_dynamicAllocation_test_thread_CM4 identifier */
#define THREAD_0_PROGRAM_1_CORE_1_PRIORITY   (BitWidthType)2    /* Thread Synchronization_and_dynamicAllocation_test_thread_CM4 priority */
#define THREAD_1_PROGRAM_1_CORE_1_ID   (BitWidthType)1    /* Thread Synchronization_test_thread_CM4 identifier */
#define THREAD_1_PROGRAM_1_CORE_1_PRIORITY   (BitWidthType)3    /* Thread Synchronization_test_thread_CM4 priority */
#define THREAD_0_PROGRAM_2_CORE_1_ID   (BitWidthType)0    /* Thread Logger_thread identifier */
#define THREAD_0_PROGRAM_2_CORE_1_PRIORITY   (BitWidthType)1    /* Thread Logger_thread priority */
#define THREAD_0_PROGRAM_2_CORE_0_ID   (BitWidthType)0    /* Thread TCPIP_thread identifier */
#define THREAD_0_PROGRAM_2_CORE_0_PRIORITY   (BitWidthType)20    /* Thread TCPIP_thread priority */
#define THREAD_0_PROGRAM_3_CORE_0_ID   (BitWidthType)0    /* Thread channel_xCore_server_CM7 identifier */
#define THREAD_0_PROGRAM_3_CORE_0_PRIORITY   (BitWidthType)4    /* Thread channel_xCore_server_CM7 priority */
#define THREAD_0_PROGRAM_3_CORE_1_ID   (BitWidthType)0    /* Thread channel_xCore_client_CM4 identifier */
#define THREAD_0_PROGRAM_3_CORE_1_PRIORITY   (BitWidthType)4    /* Thread channel_xCore_client_CM4 priority */
#define THREAD_1_PROGRAM_3_CORE_0_ID   (BitWidthType)1    /* Thread channel_sameCore_server_CM7 identifier */
#define THREAD_1_PROGRAM_3_CORE_0_PRIORITY   (BitWidthType)7    /* Thread channel_sameCore_server_CM7 priority */
#define THREAD_2_PROGRAM_3_CORE_0_ID   (BitWidthType)2    /* Thread channel_sameCore_client_CM7 identifier */
#define THREAD_2_PROGRAM_3_CORE_0_PRIORITY   (BitWidthType)6    /* Thread channel_sameCore_client_CM7 priority */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_sysDefsThreads_h
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
  * @defgroup Variables_sysDefsThreads_h Variables
  * @ingroup Global_sysDefsThreads
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_sysDefsThreads_h
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
  * @defgroup Apis_sysDefsThreads_h API's
  * @ingroup Global_sysDefsThreads
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsThreads_h Getters
  * @ingroup Apis_sysDefsThreads_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_sysDefsThreads_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsThreads_h Setters
  * @ingroup Apis_sysDefsThreads_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_sysDefsThreads_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsThreads_h General
  * @ingroup Apis_sysDefsThreads_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_sysDefsThreads_h
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
  * @addtogroup Getters_sysDefsThreads_h Getters
  * @ingroup Apis_sysDefsThreads_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_sysDefsThreads_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsThreads_h Setters
  * @ingroup Apis_sysDefsThreads_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_sysDefsThreads_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsThreads_h General
  * @ingroup Apis_sysDefsThreads_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_sysDefsThreads_h
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