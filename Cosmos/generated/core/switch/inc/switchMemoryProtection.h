/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file switchMemoryProtection.h
*********************************************************************************
<!--              switchMemoryProtection Unit Group Definition              -->
*********************************************************************************
** @defgroup switchMemoryProtection_unit switchMemoryProtection Unit
** @ingroup switch_module
** @brief switchMemoryProtection Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-07-11
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--           switchMemoryProtection Unit Global Group Definition          -->
*********************************************************************************
** @defgroup Global_switchMemoryProtection Global
** @ingroup switchMemoryProtection_unit
** @brief switchMemoryProtection globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SWITCHESMEMORYPROTECTION_H__
#define __SWITCHESMEMORYPROTECTION_H__
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
#include "memoryProtection.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_switchMemoryProtection_h Macros
  * @ingroup Global_switchMemoryProtection
  * @{
********************************************************************************/
#define MEMORY_PROTECTION ON
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Macros_switchMemoryProtection_h
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
  * @defgroup Variables_switchMemoryProtection_h Variables
  * @ingroup Global_switchMemoryProtection
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_switchMemoryProtection_h
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
  * @defgroup Apis_switchMemoryProtection_h API's
  * @ingroup Global_switchMemoryProtection
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_switchMemoryProtection_h Getters
  * @ingroup Apis_switchMemoryProtection_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_switchMemoryProtection_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_switchMemoryProtection_h Setters
  * @ingroup Apis_switchMemoryProtection_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_switchMemoryProtection_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_switchMemoryProtection_h General
  * @ingroup Apis_switchMemoryProtection_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_switchMemoryProtection_h
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
  * @addtogroup Getters_switchMemoryProtection_h Getters
  * @ingroup Apis_switchMemoryProtection_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_switchMemoryProtection_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_switchMemoryProtection_h Setters
  * @ingroup Apis_switchMemoryProtection_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN DOCUMENTATION INFORMATION                                          **
  * *************************************************************************//**
  * @fn switchMemoryProtection_init(stack)
  *
  * @brief Init memory protection DEMO CODE.
  *
  * @param[in]  none
  *
  * @return none
********************************************************************************/
#if ( MEMORY_PROTECTION IS_EQUAL_TO ON )
    #define switchMemoryProtection_init() memoryProtection_init()
#else
    #define switchMemoryProtection_init()
#endif
/********************************************************************************
  * DOXYGEN DOCUMENTATION INFORMATION                                          **
  * *************************************************************************//**
  * @fn switchMemoryProtection_setMemoryProtection(coreVar,schedulable)
  *
  * @brief Set memory protection for current execution context.
  *
  * @param[in]  CosmOS_CoreVariableType * core
  * @param[in]  CosmOS_TaskVariableType * schedulable
  *
  * @return none
********************************************************************************/
#if ( MEMORY_PROTECTION IS_EQUAL_TO ON )
    #define switchMemoryProtection_setMemoryProtection(coreVar,schedulable) memoryProtection_setMemoryProtection(coreVar,schedulable)
#else
    #define switchMemoryProtection_setMemoryProtection(coreVar,schedulable)
#endif
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_switchMemoryProtection_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_switchMemoryProtection_h General
  * @ingroup Apis_switchMemoryProtection_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_switchMemoryProtection_h
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