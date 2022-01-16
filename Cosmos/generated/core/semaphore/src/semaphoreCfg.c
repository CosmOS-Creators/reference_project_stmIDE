/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file semaphoreCfg.c
*********************************************************************************
<!--                semaphoreCfg Unit Local Group Definition                  -->
*********************************************************************************
** @defgroup Local_semaphoreCfg Local
** @ingroup semaphoreCfg_unit
** @brief semaphoreCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "semaphoreCfg.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_semaphoreCfg Macros
  * @ingroup Local_semaphoreCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_semaphoreCfg
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
  * @defgroup Variables_semaphoreCfg Variables
  * @ingroup Local_semaphoreCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
CosmOS_SemaphoreVariableType SemaphoresVar[SEMAPHORE_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        SEMAPHORE_STATE_ENUM__RELEASED,    /* BitWidthType semaphore */
        NULL,    /* CosmOS_SchedulableConfigurationType * schedulableOwner */
    },
    {
        SEMAPHORE_STATE_ENUM__RELEASED,    /* BitWidthType semaphore */
        NULL,    /* CosmOS_SchedulableConfigurationType * schedulableOwner */
    },
    {
        SEMAPHORE_STATE_ENUM__RELEASED,    /* BitWidthType semaphore */
        NULL,    /* CosmOS_SchedulableConfigurationType * schedulableOwner */
    },
    {
        SEMAPHORE_STATE_ENUM__RELEASED,    /* BitWidthType semaphore */
        NULL,    /* CosmOS_SchedulableConfigurationType * schedulableOwner */
    },
};
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_semaphoreCfg
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
  * @defgroup Apis_semaphoreCfg_c API's
  * @ingroup Local_semaphoreCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_semaphoreCfg_c Getters
  * @ingroup Apis_semaphoreCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_semaphoreCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_semaphoreCfg_c Setters
  * @ingroup Apis_semaphoreCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_semaphoreCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_semaphoreCfg_c General
  * @ingroup Apis_semaphoreCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_semaphoreCfg_c
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