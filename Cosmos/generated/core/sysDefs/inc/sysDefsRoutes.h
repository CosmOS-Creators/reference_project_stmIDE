/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysDefsRoutes.h
*********************************************************************************
<!--                    sysDefsRoutes Unit Group Definition                   -->
*********************************************************************************
** @defgroup sysDefsRoutes_unit sysDefsRoutes Unit
** @ingroup sysDefs_module
** @brief sysDefsRoutes Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-08-18
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--                sysDefsRoutes Unit Global Group Definition                -->
*********************************************************************************
** @defgroup Global_sysDefsRoutes Global
** @ingroup sysDefsRoutes_unit
** @brief sysDefsRoutes globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SYSDEFSROUTES_H__
#define __SYSDEFSROUTES_H__
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
#include "sysDefsBuffers.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_sysDefsRoutes_h Macros
  * @ingroup Global_sysDefsRoutes
  * @{
********************************************************************************/
#define ROUTES_FUNC_NUM (BitWidthType)12          /* Number of route RW */

#define ROUTES_ID_TO_ENTITY_DUMMY (BitWidthType)0     /* Dummy it to entity */

#define BUFFER_READARRAY (BitWidthType)0            /* Identificator pointing on function pointer in array (Routes) */
#define BUFFER_WRITEARRAY (BitWidthType)1            /* Identificator pointing on function pointer in array (Routes) */
#define DEVICEIO_TOGGLEPIN (BitWidthType)2            /* Identificator pointing on function pointer in array (Routes) */
#define OSINIT_INIT (BitWidthType)3            /* Identificator pointing on function pointer in array (Routes) */
#define OS_START (BitWidthType)4            /* Identificator pointing on function pointer in array (Routes) */
#define SCHEDULABLE_SETEXECUTIONSTATETOFINISHED (BitWidthType)5            /* Identificator pointing on function pointer in array (Routes) */
#define SYSJOBS_DISPATCHER (BitWidthType)6            /* Identificator pointing on function pointer in array (Routes) */
#define SPINLOCK_GETSPINLOCK (BitWidthType)7            /* Identificator pointing on function pointer in array (Routes) */
#define SPINLOCK_TRYSPINLOCK (BitWidthType)8            /* Identificator pointing on function pointer in array (Routes) */
#define SPINLOCK_RELEASESPINLOCK (BitWidthType)9            /* Identificator pointing on function pointer in array (Routes) */
#define INTERRUPT_DISABLEINTERRUPTS (BitWidthType)10            /* Identificator pointing on function pointer in array (Routes) */
#define INTERRUPT_ENABLEINTERRUPTS (BitWidthType)11            /* Identificator pointing on function pointer in array (Routes) */
#define SYSCALL_GET_SPINLOCK_0_ID (BitWidthType)0   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_TRY_SPINLOCK_0_ID (BitWidthType)1   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_RELEASE_SPINLOCK_0_ID (BitWidthType)2   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_GET_SPINLOCK_1_ID (BitWidthType)3   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_TRY_SPINLOCK_1_ID (BitWidthType)4   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_RELEASE_SPINLOCK_1_ID (BitWidthType)5   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_READ_BUFFER_0_ID (BitWidthType)6   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_WRITE_BUFFER_0_ID (BitWidthType)7  /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_READ_BUFFER_1_ID (BitWidthType)8   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_WRITE_BUFFER_1_ID (BitWidthType)9  /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_READ_BUFFER_2_ID (BitWidthType)10   /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_WRITE_BUFFER_2_ID (BitWidthType)11  /* Identificator pointing on element in id array (RoutesIdToFuncConst) */
#define SYSCALL_DEVICEIO_TOGGLEPIN (BitWidthType)12            /* Identificator pointing on function pointer in array (Routes) */
#define SYSCALL_OSINIT_INIT (BitWidthType)13            /* Identificator pointing on function pointer in array (Routes) */
#define SYSCALL_OS_START (BitWidthType)14            /* Identificator pointing on function pointer in array (Routes) */
#define SYSCALL_SCHEDULABLE_SETEXECUTIONSTATETOFINISHED (BitWidthType)15            /* Identificator pointing on function pointer in array (Routes) */
#define SYSCALL_SYSJOBS_DISPATCHER (BitWidthType)16            /* Identificator pointing on function pointer in array (Routes) */
#define SYSCALL_INTERRUPT_DISABLEINTERRUPTS (BitWidthType)17            /* Identificator pointing on function pointer in array (Routes) */
#define SYSCALL_INTERRUPT_ENABLEINTERRUPTS (BitWidthType)18            /* Identificator pointing on function pointer in array (Routes) */

#define ROUTES_ID_TO_FUNC_NUM (BitWidthType)19    /* Number of route identificators */
#define ROUTES_ID_TO_ENTITY_NUM (BitWidthType)19     /* Number of route identificators */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Macros_sysDefsRoutes_h
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
  * @defgroup Variables_sysDefsRoutes_h Variables
  * @ingroup Global_sysDefsRoutes
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_sysDefsRoutes_h
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
  * @defgroup Apis_sysDefsRoutes_h API's
  * @ingroup Global_sysDefsRoutes
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsRoutes_h Getters
  * @ingroup Apis_sysDefsRoutes_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_sysDefsRoutes_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsRoutes_h Setters
  * @ingroup Apis_sysDefsRoutes_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_sysDefsRoutes_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsRoutes_h General
  * @ingroup Apis_sysDefsRoutes_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsRoutes_h
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
  * @addtogroup Getters_sysDefsRoutes_h Getters
  * @ingroup Apis_sysDefsRoutes_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_sysDefsRoutes_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsRoutes_h Setters
  * @ingroup Apis_sysDefsRoutes_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_sysDefsRoutes_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsRoutes_h General
  * @ingroup Apis_sysDefsRoutes_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsRoutes_h
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