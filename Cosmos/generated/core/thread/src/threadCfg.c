/********************************************************************************
**                                                                             **
**                      GENERATED FILE BY COSMOS CustomBox                     **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file threadCfg.c       	
*********************************************************************************
<!--                  threadCfg Unit Local Group Definition                   -->
*********************************************************************************	
** @defgroup Local_threadCfg Local
** @ingroup threadCfg_unit 
** @brief threadCfg locals
** @details lorem 
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "threadCfg.h"
#include "schedulableCfg.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_threadCfg_c Macros
  * @ingroup Local_threadCfg
  * @{    
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}  
  * Macros_threadCfg_c  
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
  * @defgroup Variables_threadCfg_c Variables
  * @ingroup Local_threadCfg
  * @{    
********************************************************************************/
/* @cond S */
__SEC_START(__OS_CONST_SECTION_START)
/* @endcond*/
const CosmOS_ThreadConfigurationType ThreadsProgram0Core0CfgConst[THREAD_PROGRAM_0_CORE_0_NUM] __OS_CONST_SECTION
IS_INITIALIZED_TO 
{
		{
        0,       /* const BitWidthType dummy                 */
    },
};
const CosmOS_ThreadConfigurationType ThreadsProgram1Core0CfgConst[THREAD_PROGRAM_1_CORE_0_NUM] __OS_CONST_SECTION
IS_INITIALIZED_TO 
{
};
const CosmOS_ThreadConfigurationType ThreadsProgram0Core1CfgConst[THREAD_PROGRAM_0_CORE_1_NUM] __OS_CONST_SECTION
IS_INITIALIZED_TO 
{
		{
        0,       /* const BitWidthType dummy                 */
    },
};
const CosmOS_ThreadConfigurationType ThreadsProgram1Core1CfgConst[THREAD_PROGRAM_1_CORE_1_NUM] __OS_CONST_SECTION
IS_INITIALIZED_TO 
{
};
/* @cond S */
__SEC_STOP(__OS_CONST_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_VAR_SECTION_START)
/* @endcond*/
CosmOS_ThreadVariableType ThreadsProgram0Core0Var[THREAD_PROGRAM_0_CORE_0_NUM] __OS_VAR_SECTION 
IS_INITIALIZED_TO 
{
		{
        &ThreadsProgram0Core0CfgConst[THREAD_0_PROGRAM_0_CORE_0_ID],      /* const CosmOS_ThreadConfigurationType * const cfg                      */
        &ThreadsSchedulablesVar[SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_0_ID],            /* CosmOS_SchedulableVariableType * const schedulable                       */ 
    },
};
CosmOS_ThreadVariableType ThreadsProgram1Core0Var[THREAD_PROGRAM_1_CORE_0_NUM] __OS_VAR_SECTION 
IS_INITIALIZED_TO 
{
};
CosmOS_ThreadVariableType ThreadsProgram0Core1Var[THREAD_PROGRAM_0_CORE_1_NUM] __OS_VAR_SECTION 
IS_INITIALIZED_TO 
{
		{
        &ThreadsProgram0Core1CfgConst[THREAD_0_PROGRAM_0_CORE_1_ID],      /* const CosmOS_ThreadConfigurationType * const cfg                      */
        &ThreadsSchedulablesVar[SCHEDULABLE_THREAD_0_PROGRAM_0_CORE_1_ID],            /* CosmOS_SchedulableVariableType * const schedulable                       */ 
    },
};
CosmOS_ThreadVariableType ThreadsProgram1Core1Var[THREAD_PROGRAM_1_CORE_1_NUM] __OS_VAR_SECTION 
IS_INITIALIZED_TO 
{
};
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}  
  * Variables_threadCfg_c  
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
  * @defgroup Apis_threadCfg_c API's  
  * @ingroup Local_threadCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_threadCfg_c Getters  
  * @ingroup Apis_threadCfg_c                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}       
  * Getters_threadCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_threadCfg_c Setters  
  * @ingroup Apis_threadCfg_c                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}    
  * Setters_threadCfg_c   
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_threadCfg_c General  
  * @ingroup Apis_threadCfg_c                                            
  * @{                                                                           
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_threadCfg_c  
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                        Function Definitions | Start                         **
********************************************************************************/
/********************************************************************************
**                        Function Definitions | Stop                          **
********************************************************************************/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/