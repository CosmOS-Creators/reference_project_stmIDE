/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysDefsPrograms.h
*********************************************************************************
<!--                   sysDefsPrograms Unit Group Definition                  -->
*********************************************************************************
** @defgroup sysDefsPrograms_unit sysDefsPrograms Unit
** @ingroup sysDefs_module
** @brief sysDefsPrograms Unit
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
<!--                sysDefsPrograms Unit Global Group Definition              -->
*********************************************************************************
** @defgroup Global_sysDefsPrograms Global
** @ingroup sysDefsPrograms_unit
** @brief sysDefsPrograms globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SYSDEFSPROGRAMS_H__
#define __SYSDEFSPROGRAMS_H__
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
  * @defgroup Macros_sysDefsPrograms_h Macros
  * @ingroup Global_sysDefsPrograms
  * @{
********************************************************************************/
#define PROGRAM_CORE_0_NUM      (BitWidthType)3    /* Number of configurated programs for core CM7 */
#define PROGRAM_CORE_1_NUM      (BitWidthType)3    /* Number of configurated programs for core CM4 */

#define PROGRAM_0_CORE_0_ID     (BitWidthType)0    /* Program default_CM7 identificator */

#define PROGRAM_0_CORE_0_SIZE    (BitWidthType)1024    /* Program default_CM7 size */
#define PROGRAM_0_CORE_0_LOW_ADDRESS    (AddressType)0x20001800    /* Program default_CM7 memoryLowAddress */
#define PROGRAM_0_CORE_0_HIGH_ADDRESS    (AddressType)0x20001c00    /* Program default_CM7 memoryHighAddress */
#define PROGRAM_0_CORE_0_HEAP_SIZE    (BitWidthType)256    /* Program default_CM7 heap size */
#define PROGRAM_0_CORE_0_HEAP_LOW_ADDRESS    (AddressType)0x20001b00    /* Program default_CM7 heapLowAddress */
#define PROGRAM_0_CORE_0_HEAP_HIGH_ADDRESS    (AddressType)0x20001c00    /* Program default_CM7 heapHighAddress */

#define PROGRAM_1_CORE_0_ID     (BitWidthType)1    /* Program timing_measurement_CM7 identificator */

#define PROGRAM_1_CORE_0_SIZE    (BitWidthType)1024    /* Program timing_measurement_CM7 size */
#define PROGRAM_1_CORE_0_LOW_ADDRESS    (AddressType)0x20001c00    /* Program timing_measurement_CM7 memoryLowAddress */
#define PROGRAM_1_CORE_0_HIGH_ADDRESS    (AddressType)0x20002000    /* Program timing_measurement_CM7 memoryHighAddress */
#define PROGRAM_1_CORE_0_HEAP_SIZE    (BitWidthType)256    /* Program timing_measurement_CM7 heap size */
#define PROGRAM_1_CORE_0_HEAP_LOW_ADDRESS    (AddressType)0x20001f00    /* Program timing_measurement_CM7 heapLowAddress */
#define PROGRAM_1_CORE_0_HEAP_HIGH_ADDRESS    (AddressType)0x20002000    /* Program timing_measurement_CM7 heapHighAddress */

#define PROGRAM_0_CORE_1_ID     (BitWidthType)0    /* Program default_CM4 identificator */

#define PROGRAM_0_CORE_1_SIZE    (BitWidthType)1024    /* Program default_CM4 size */
#define PROGRAM_0_CORE_1_LOW_ADDRESS    (AddressType)0x10001800    /* Program default_CM4 memoryLowAddress */
#define PROGRAM_0_CORE_1_HIGH_ADDRESS    (AddressType)0x10001c00    /* Program default_CM4 memoryHighAddress */
#define PROGRAM_0_CORE_1_HEAP_SIZE    (BitWidthType)256    /* Program default_CM4 heap size */
#define PROGRAM_0_CORE_1_HEAP_LOW_ADDRESS    (AddressType)0x10001b00    /* Program default_CM4 heapLowAddress */
#define PROGRAM_0_CORE_1_HEAP_HIGH_ADDRESS    (AddressType)0x10001c00    /* Program default_CM4 heapHighAddress */

#define PROGRAM_1_CORE_1_ID     (BitWidthType)1    /* Program timing_measurement_CM4 identificator */

#define PROGRAM_1_CORE_1_SIZE    (BitWidthType)1024    /* Program timing_measurement_CM4 size */
#define PROGRAM_1_CORE_1_LOW_ADDRESS    (AddressType)0x10001c00    /* Program timing_measurement_CM4 memoryLowAddress */
#define PROGRAM_1_CORE_1_HIGH_ADDRESS    (AddressType)0x10002000    /* Program timing_measurement_CM4 memoryHighAddress */
#define PROGRAM_1_CORE_1_HEAP_SIZE    (BitWidthType)256    /* Program timing_measurement_CM4 heap size */
#define PROGRAM_1_CORE_1_HEAP_LOW_ADDRESS    (AddressType)0x10001f00    /* Program timing_measurement_CM4 heapLowAddress */
#define PROGRAM_1_CORE_1_HEAP_HIGH_ADDRESS    (AddressType)0x10002000    /* Program timing_measurement_CM4 heapHighAddress */

#define PROGRAM_2_CORE_1_ID     (BitWidthType)2    /* Program logger identificator */

#define PROGRAM_2_CORE_1_SIZE    (BitWidthType)1024    /* Program logger size */
#define PROGRAM_2_CORE_1_LOW_ADDRESS    (AddressType)0x10002000    /* Program logger memoryLowAddress */
#define PROGRAM_2_CORE_1_HIGH_ADDRESS    (AddressType)0x10002400    /* Program logger memoryHighAddress */
#define PROGRAM_2_CORE_1_HEAP_SIZE    (BitWidthType)256    /* Program logger heap size */
#define PROGRAM_2_CORE_1_HEAP_LOW_ADDRESS    (AddressType)0x10002300    /* Program logger heapLowAddress */
#define PROGRAM_2_CORE_1_HEAP_HIGH_ADDRESS    (AddressType)0x10002400    /* Program logger heapHighAddress */

#define PROGRAM_2_CORE_0_ID     (BitWidthType)2    /* Program ethernet_com identificator */

#define PROGRAM_2_CORE_0_SIZE    (BitWidthType)1024    /* Program ethernet_com size */
#define PROGRAM_2_CORE_0_LOW_ADDRESS    (AddressType)0x20002000    /* Program ethernet_com memoryLowAddress */
#define PROGRAM_2_CORE_0_HIGH_ADDRESS    (AddressType)0x20002400    /* Program ethernet_com memoryHighAddress */
#define PROGRAM_2_CORE_0_HEAP_SIZE    (BitWidthType)256    /* Program ethernet_com heap size */
#define PROGRAM_2_CORE_0_HEAP_LOW_ADDRESS    (AddressType)0x20002300    /* Program ethernet_com heapLowAddress */
#define PROGRAM_2_CORE_0_HEAP_HIGH_ADDRESS    (AddressType)0x20002400    /* Program ethernet_com heapHighAddress */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Macros_sysDefsPrograms_h
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
  * @defgroup Variables_sysDefsPrograms_h Variables
  * @ingroup Global_sysDefsPrograms
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_sysDefsPrograms_h
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
  * @defgroup Apis_sysDefsPrograms_h API's
  * @ingroup Global_sysDefsPrograms
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsPrograms_h Getters
  * @ingroup Apis_sysDefsPrograms_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_sysDefsPrograms_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsPrograms_h Setters
  * @ingroup Apis_sysDefsPrograms_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_sysDefsPrograms_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsPrograms_h General
  * @ingroup Apis_sysDefsPrograms_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsPrograms_h
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
  * @addtogroup Getters_sysDefsPrograms_h Getters
  * @ingroup Apis_sysDefsPrograms_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_sysDefsPrograms_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsPrograms_h Setters
  * @ingroup Apis_sysDefsPrograms_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_sysDefsPrograms_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsPrograms_h General
  * @ingroup Apis_sysDefsPrograms_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsPrograms_h
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