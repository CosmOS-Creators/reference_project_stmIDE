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
** @version 1.0.0
** @date 2021-06-13
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
  * @defgroup Macros_sysDefsTasks_h Macros
  * @ingroup Global_sysDefsTasks  
  * @{    
********************************************************************************/
#define TASK_NUM_CORE_0                       (BitWidthType)3        /* Number of configurated tasks for the core CM7 */
#define TASK_NUM_CORE_1                       (BitWidthType)3        /* Number of configurated tasks for the core CM4 */

#define TASK_PROGRAM_0_CORE_0_NUM             (BitWidthType)2        /* Number of configurated tasks for the program default_CM7*/
#define TASK_PROGRAM_1_CORE_0_NUM             (BitWidthType)1        /* Number of configurated tasks for the program blinking_led_CM7*/
#define TASK_PROGRAM_0_CORE_1_NUM             (BitWidthType)2        /* Number of configurated tasks for the program default_CM4*/
#define TASK_PROGRAM_1_CORE_1_NUM             (BitWidthType)1        /* Number of configurated tasks for the program blinking_led_CM4*/

#define TASK_0_PROGRAM_0_CORE_0_ID            (BitWidthType)0        /* Task Idle_CM7 identificator */
#define TASK_0_PROGRAM_0_CORE_0_WCET          (BitWidthType)0        /* The Worst execution time in ticks */

#define TASK_1_PROGRAM_0_CORE_0_ID            (BitWidthType)1        /* Task sysJobs_CM7 identificator */
#define TASK_1_PROGRAM_0_CORE_0_WCET          (BitWidthType)5        /* The Worst execution time in ticks */

#define TASK_0_PROGRAM_1_CORE_0_ID            (BitWidthType)0        /* Task Task_0_Core_0_Handler identificator */
#define TASK_0_PROGRAM_1_CORE_0_WCET          (BitWidthType)5        /* The Worst execution time in ticks */

#define TASK_0_PROGRAM_0_CORE_1_ID            (BitWidthType)0        /* Task Idle_CM4 identificator */
#define TASK_0_PROGRAM_0_CORE_1_WCET          (BitWidthType)0        /* The Worst execution time in ticks */

#define TASK_1_PROGRAM_0_CORE_1_ID            (BitWidthType)1        /* Task sysJobs_CM4 identificator */
#define TASK_1_PROGRAM_0_CORE_1_WCET          (BitWidthType)5        /* The Worst execution time in ticks */

#define TASK_0_PROGRAM_1_CORE_1_ID            (BitWidthType)0        /* Task Task_0_Core_1_Handler identificator */
#define TASK_0_PROGRAM_1_CORE_1_WCET          (BitWidthType)5        /* The Worst execution time in ticks */
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}  
  * Macros_sysDefsTasks_h  
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
  * @}  
  * Variables_sysDefsTasks_h  
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
  * @}       
  * Getters_sysDefsTasks_h
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
  * @}    
  * Setters_sysDefsTasks_h   
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
  * @}
  * General_sysDefsTasks_h  
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
  * @}       
  * Getters_sysDefsTasks_h
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
  * @}    
  * Setters_sysDefsTasks_h   
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
  * @}
  * General_sysDefsTasks_h  
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