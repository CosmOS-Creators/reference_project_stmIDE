/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file heapCfg.c
*********************************************************************************
<!--                    heapCfg Unit Local Group Definition                   -->
*********************************************************************************
** @defgroup Local_heapCfg Local
** @ingroup heapCfg_unit
** @brief heapCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "heapCfg.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_heapCfg_c Macros
  * @ingroup Local_heapCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_heapCfg_c
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
  * @defgroup Variables_heapCfg_c Variables
  * @ingroup Local_heapCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_HeapConfigurationType
    HeapsCore0CfgConst[HEAP_CORE_0_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
    {                                                     /* HeapsCore0CfgConst[PROGRAM_0_CORE_0_ID] */
        HEAP_PROGRAM_0_CORE_0_SIZE,    /* const BitWidthType heapSize */
        HEAP_PROGRAM_0_CORE_0_LOW_ADDRESS,    /* const AddressType heapLowAddress */
        HEAP_PROGRAM_0_CORE_0_HIGH_ADDRESS,    /* const AddressType heapHighAddress */
    },
    {                                                     /* HeapsCore0CfgConst[PROGRAM_1_CORE_0_ID] */
        HEAP_PROGRAM_1_CORE_0_SIZE,    /* const BitWidthType heapSize */
        HEAP_PROGRAM_1_CORE_0_LOW_ADDRESS,    /* const AddressType heapLowAddress */
        HEAP_PROGRAM_1_CORE_0_HIGH_ADDRESS,    /* const AddressType heapHighAddress */
    },
    {                                                     /* HeapsCore0CfgConst[PROGRAM_2_CORE_0_ID] */
        HEAP_PROGRAM_2_CORE_0_SIZE,    /* const BitWidthType heapSize */
        HEAP_PROGRAM_2_CORE_0_LOW_ADDRESS,    /* const AddressType heapLowAddress */
        HEAP_PROGRAM_2_CORE_0_HIGH_ADDRESS,    /* const AddressType heapHighAddress */
    },
    {                                                     /* HeapsCore0CfgConst[PROGRAM_3_CORE_0_ID] */
        HEAP_PROGRAM_3_CORE_0_SIZE,    /* const BitWidthType heapSize */
        HEAP_PROGRAM_3_CORE_0_LOW_ADDRESS,    /* const AddressType heapLowAddress */
        HEAP_PROGRAM_3_CORE_0_HIGH_ADDRESS,    /* const AddressType heapHighAddress */
    },
};
/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_HeapConfigurationType
    HeapsCore1CfgConst[HEAP_CORE_1_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
    {                                                     /* HeapsCore1CfgConst[PROGRAM_0_CORE_1_ID] */
        HEAP_PROGRAM_0_CORE_1_SIZE,    /* const BitWidthType heapSize */
        HEAP_PROGRAM_0_CORE_1_LOW_ADDRESS,    /* const AddressType heapLowAddress */
        HEAP_PROGRAM_0_CORE_1_HIGH_ADDRESS,    /* const AddressType heapHighAddress */
    },
    {                                                     /* HeapsCore1CfgConst[PROGRAM_1_CORE_1_ID] */
        HEAP_PROGRAM_1_CORE_1_SIZE,    /* const BitWidthType heapSize */
        HEAP_PROGRAM_1_CORE_1_LOW_ADDRESS,    /* const AddressType heapLowAddress */
        HEAP_PROGRAM_1_CORE_1_HIGH_ADDRESS,    /* const AddressType heapHighAddress */
    },
    {                                                     /* HeapsCore1CfgConst[PROGRAM_2_CORE_1_ID] */
        HEAP_PROGRAM_2_CORE_1_SIZE,    /* const BitWidthType heapSize */
        HEAP_PROGRAM_2_CORE_1_LOW_ADDRESS,    /* const AddressType heapLowAddress */
        HEAP_PROGRAM_2_CORE_1_HIGH_ADDRESS,    /* const AddressType heapHighAddress */
    },
    {                                                     /* HeapsCore1CfgConst[PROGRAM_3_CORE_1_ID] */
        HEAP_PROGRAM_3_CORE_1_SIZE,    /* const BitWidthType heapSize */
        HEAP_PROGRAM_3_CORE_1_LOW_ADDRESS,    /* const AddressType heapLowAddress */
        HEAP_PROGRAM_3_CORE_1_HIGH_ADDRESS,    /* const AddressType heapHighAddress */
    },
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_heapCfg_c
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
  * @defgroup Apis_heapCfg_c API's
  * @ingroup Local_heapCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_heapCfg_c Getters
  * @ingroup Apis_heapCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_heapCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_heapCfg_c Setters
  * @ingroup Apis_heapCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_heapCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_heapCfg_c General
  * @ingroup Apis_heapCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_heapCfg_c
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