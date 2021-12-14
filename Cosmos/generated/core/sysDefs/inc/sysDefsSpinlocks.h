/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysDefsSpinlocks.h
*********************************************************************************
<!--                   sysDefsSpinlocks Unit Group Definition                 -->
*********************************************************************************
** @defgroup sysDefsSpinlocks_unit sysDefsSpinlocks Unit
** @ingroup sysDefs_module
** @brief sysDefsSpinlocks Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-12-14
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--                sysDefsSpinlocks Unit Global Group Definition             -->
*********************************************************************************
** @defgroup Global_sysDefsSpinlocks Global
** @ingroup sysDefsSpinlocks_unit
** @brief sysDefsSpinlocks globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SYSDEFSSPINLOCKS_H__
#define __SYSDEFSSPINLOCKS_H__
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
  * @defgroup Macros_sysDefsSpinlocks_h Macros
  * @ingroup Global_sysDefsSpinlocks
  * @{
********************************************************************************/

#define SPINLOCK_0_ID                      (BitWidthType)0    /* Spinlock identifier spinlock_test_0 */
#define SPINLOCK_1_ID                      (BitWidthType)1    /* Spinlock identifier spinlock_test_1 */
#define SPINLOCK_2_ID                      (BitWidthType)2    /* Spinlock identifier for buffer x_core_buffer_0 */
#define SPINLOCK_3_ID                      (BitWidthType)3    /* Spinlock identifier for second buffer of doubleBuffer x_core_buffer_0 */
#define SPINLOCK_4_ID                      (BitWidthType)4    /* Spinlock identifier for buffer x_core_buffer_1 */
#define SPINLOCK_5_ID                      (BitWidthType)5    /* Spinlock identifier for buffer logger_buffer */
#define SPINLOCK_6_ID                      (BitWidthType)6    /* Spinlock identifier for channel xCore_channel */
#define SPINLOCK_7_ID                      (BitWidthType)7    /* Spinlock identifier for channel sameCore_channel */
#define SPINLOCK_8_ID                      (BitWidthType)8    /* Spinlock identifier for core event */

#define SPINLOCK_NUM                                    (BitWidthType)9    /* Number of configured spinlocks */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_sysDefsSpinlocks_h
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
  * @defgroup Variables_sysDefsSpinlocks_h Variables
  * @ingroup Global_sysDefsSpinlocks
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_sysDefsSpinlocks_h
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
  * @defgroup Apis_sysDefsSpinlocks_h API's
  * @ingroup Global_sysDefsSpinlocks
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsSpinlocks_h Getters
  * @ingroup Apis_sysDefsSpinlocks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_sysDefsSpinlocks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsSpinlocks_h Setters
  * @ingroup Apis_sysDefsSpinlocks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_sysDefsSpinlocks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsSpinlocks_h General
  * @ingroup Apis_sysDefsSpinlocks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_sysDefsSpinlocks_h
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
  * @addtogroup Getters_sysDefsSpinlocks_h Getters
  * @ingroup Apis_sysDefsSpinlocks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_sysDefsSpinlocks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsSpinlocks_h Setters
  * @ingroup Apis_sysDefsSpinlocks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_sysDefsSpinlocks_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsSpinlocks_h General
  * @ingroup Apis_sysDefsSpinlocks_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_sysDefsSpinlocks_h
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