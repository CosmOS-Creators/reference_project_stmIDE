/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file sysJobsCfg.c
*********************************************************************************
<!--                   sysJobsCfg Unit Local Group Definition                 -->
*********************************************************************************
** @defgroup Local_sysJobsCfg Local
** @ingroup sysJobsCfg_unit
** @brief sysJobsCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "sysJobsCfg.h"
/* GENERATED interfaces */
#include "default_CM7.h"
#include "default_CM4.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_sysJobsCfg Macros
  * @ingroup Local_sysJobsCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_sysJobsCfg
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
  * @defgroup Variables_sysJobsCfg Variables
  * @ingroup Local_sysJobsCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_VARS_SECTION_START)
/* @endcond*/
CosmOS_SysJobsVariableType SysJobsVar[CORE_NUM] __OS_VARS_SECTION
IS_INITIALIZED_TO{
    {
        0,    /* BitWidthType currentTick */
    },
{
        0,    /* BitWidthType currentTick */
    },
};
/* @cond S */
__SEC_STOP(__OS_VARS_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_GenericVoidType
    SysJobsHandlersGroup0Core0Const[SYSJOBS_HANDLERS_GROUP_0_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    (CosmOS_GenericVoidType)sysJobsGroup_20ms_CM7,
};
const CosmOS_GenericVoidType
    SysJobsHandlersGroup0Core1Const[SYSJOBS_HANDLERS_GROUP_0_CORE_1_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    (CosmOS_GenericVoidType)sysJobsGroup_10ms_CM4,
};
const CosmOS_SysJobsGroupConfigurationType
    SysJobsGroupsCore0CfgConst[SYSJOBS_GROUPS_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        SysJobsHandlersGroup0Core0Const,    /* const CosmOS_GenericVoidType * const handlers */
        SYSJOBS_HANDLERS_GROUP_0_CORE_0_NUM,    /* const BitWidthType numOfHandlers */
        SYSJOBS_GROUP_0_CORE_0_TICK_MULTIPLICATOR,    /* const BitWidthType tickMultiplicator */
    },
};
const CosmOS_SysJobsGroupConfigurationType
    SysJobsGroupsCore1CfgConst[SYSJOBS_GROUPS_CORE_1_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        SysJobsHandlersGroup0Core1Const,    /* const CosmOS_GenericVoidType * const handlers */
        SYSJOBS_HANDLERS_GROUP_0_CORE_1_NUM,    /* const BitWidthType numOfHandlers */
        SYSJOBS_GROUP_0_CORE_1_TICK_MULTIPLICATOR,    /* const BitWidthType tickMultiplicator */
    },
};
const CosmOS_SysJobsConfigurationType
    SysJobsCfgConst[CORE_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO{
    {
        &SysJobsVar[CORE_0_ID],    /* CosmOS_SysJobsVariableType * const var */
        SysJobsGroupsCore0CfgConst,    /* const CosmOS_SysJobsGroupConfigurationType * const groups */
        SYSJOBS_GROUPS_CORE_0_NUM,    /* const BitWidthType numOfGroups */
        SYSJOBS_CORE_0_HYPERTICK     /* const BitWidthType hyperTick */
    },
{
        &SysJobsVar[CORE_1_ID],    /* CosmOS_SysJobsVariableType * const var */
        SysJobsGroupsCore1CfgConst,    /* const CosmOS_SysJobsGroupConfigurationType * const groups */
        SYSJOBS_GROUPS_CORE_1_NUM,    /* const BitWidthType numOfGroups */
        SYSJOBS_CORE_1_HYPERTICK     /* const BitWidthType hyperTick */
    },
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_sysJobsCfg
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
  * @defgroup Apis_sysJobsCfg_c API's
  * @ingroup Local_sysJobsCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_sysJobsCfg_c Getters
  * @ingroup Apis_sysJobsCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_sysJobsCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_sysJobsCfg_c Setters
  * @ingroup Apis_sysJobsCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_sysJobsCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_sysJobsCfg_c General
  * @ingroup Apis_sysJobsCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_sysJobsCfg_c
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