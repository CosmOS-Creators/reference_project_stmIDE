/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysDefsSchedulers.h                                      	 		
*********************************************************************************	
<!--                 sysDefsSchedulers Unit Group Definition                  -->
********************************************************************************* 
** @defgroup sysDefsSchedulers_unit sysDefsSchedulers Unit 
** @ingroup sysDefs_module        
** @brief sysDefsSchedulers Unit 
** @details lorem                               
*********************************************************************************	
<!--                           Version Information                            -->
*********************************************************************************
** @version 1.0.0
** @date 2021-06-12
** @author Generated by CosmOS CustomBox   
*********************************************************************************	
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License       	
*********************************************************************************
<!--              sysDefsSchedulers Unit Global Group Definition              -->
*********************************************************************************	
** @defgroup Global_sysDefsSchedulers Global
** @ingroup sysDefsSchedulers_unit 
** @brief sysDefsSchedulers globals
** @details lorem 
********************************************************************************/ 
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __SYSDEFSSCHEDULERS_H__
#define __SYSDEFSSCHEDULERS_H__
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
  * @defgroup Macros_sysDefsSchedulers_h Macros
  * @ingroup Global_sysDefsSchedulers  
  * @{    
********************************************************************************/
#define SCHEDULER_NUM                           (BitWidthType)2                 /* Number of configurated schedulers      */

#define SCHEDULER_CORE_0_ID                     (BitWidthType)0        /* Scheduler for core CM7 identificator     */
#define HYPERTICK_SCHEDULER_0                   (BitWidthType)100        /* HyperTick for scheduler 0 in ticks   */
#define PREEMPTTICK_SCHEDULER_0                   (BitWidthType)1        /* PreemptTick for scheduler 0 in ticks   */
#define LAST_TO_FIRST_TASK_TICK_SCHEDULER_0     (BitWidthType)45        /* Last to first task for scheduler 0 in ticks */
#define SYNCTICKS_SCHEDULER_0                  (BitWidthType)0       /* SyncTicks for scheduler 0 in ticks */
#define FIRST_SYNC_TASK_STARTTICK_SCHEDULER_0                  (BitWidthType)(BitWidthType)0        /* FirstSyncTaskStartTick for scheduler 0 in ticks */

#define SCHEDULER_CORE_1_ID                     (BitWidthType)1        /* Scheduler for core CM4 identificator     */
#define HYPERTICK_SCHEDULER_1                   (BitWidthType)100        /* HyperTick for scheduler 1 in ticks   */
#define PREEMPTTICK_SCHEDULER_1                   (BitWidthType)1        /* PreemptTick for scheduler 1 in ticks   */
#define LAST_TO_FIRST_TASK_TICK_SCHEDULER_1     (BitWidthType)45        /* Last to first task for scheduler 1 in ticks */
#define SYNCTICKS_SCHEDULER_1                  (BitWidthType)0       /* SyncTicks for scheduler 1 in ticks */
#define FIRST_SYNC_TASK_STARTTICK_SCHEDULER_1                  (BitWidthType)(BitWidthType)0        /* FirstSyncTaskStartTick for scheduler 1 in ticks */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}  
  * Macros_sysDefsSchedulers_h  
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
  * @defgroup Variables_sysDefsSchedulers_h Variables  
  * @ingroup Global_sysDefsSchedulers  
  * @{    
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}  
  * Variables_sysDefsSchedulers_h  
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
  * @defgroup Apis_sysDefsSchedulers_h API's 
  * @ingroup Global_sysDefsSchedulers
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysDefsSchedulers_h Getters  
  * @ingroup Apis_sysDefsSchedulers_h                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}       
  * Getters_sysDefsSchedulers_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsSchedulers_h Setters  
  * @ingroup Apis_sysDefsSchedulers_h                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}    
  * Setters_sysDefsSchedulers_h   
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsSchedulers_h General  
  * @ingroup Apis_sysDefsSchedulers_h                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsSchedulers_h  
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
  * @addtogroup Getters_sysDefsSchedulers_h Getters  
  * @ingroup Apis_sysDefsSchedulers_h                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}       
  * Getters_sysDefsSchedulers_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysDefsSchedulers_h Setters  
  * @ingroup Apis_sysDefsSchedulers_h                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}    
  * Setters_sysDefsSchedulers_h   
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysDefsSchedulers_h General  
  * @ingroup Apis_sysDefsSchedulers_h                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_sysDefsSchedulers_h  
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