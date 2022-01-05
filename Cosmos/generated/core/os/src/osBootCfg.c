/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file osBootCfg.c
*********************************************************************************
<!--                   osBootCfg Unit Local Group Definition                  -->
*********************************************************************************
** @defgroup Local_osBootCfg Local
** @ingroup osBootCfg_unit
** @brief osBootCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "osBootCfg.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_osBootCfg_c Macros
  * @ingroup Local_osBootCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_osBootCfg_c
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
  * @defgroup Variables_osBootCfg_c Variables
  * @ingroup Local_osBootCfg
  * @{
********************************************************************************/
extern unsigned char
    _s_program_default_CM7_section_init[];
extern unsigned char
    _s_program_default_CM7_section_noInit[];
extern unsigned char
    _s_program_timing_measurement_CM7_section_init[];
extern unsigned char
    _s_program_timing_measurement_CM7_section_noInit[];
extern unsigned char
    _s_program_default_CM4_section_init[];
extern unsigned char
    _s_program_default_CM4_section_noInit[];
extern unsigned char
    _s_program_timing_measurement_CM4_section_init[];
extern unsigned char
    _s_program_timing_measurement_CM4_section_noInit[];
extern unsigned char
    _s_program_logger_section_init[];
extern unsigned char
    _s_program_logger_section_noInit[];
extern unsigned char
    _s_program_ethernet_com_section_init[];
extern unsigned char
    _s_program_ethernet_com_section_noInit[];
extern unsigned char
    _s_program_channel_test_CM7_section_init[];
extern unsigned char
    _s_program_channel_test_CM7_section_noInit[];
extern unsigned char
    _s_program_channel_test_CM4_section_init[];
extern unsigned char
    _s_program_channel_test_CM4_section_noInit[];
extern unsigned char
    _s_program_interrupt_handlers_CM7_section_init[];
extern unsigned char
    _s_program_interrupt_handlers_CM7_section_noInit[];
extern unsigned char _s_os_section_consts[];
extern unsigned char _s_os_section_vars[];
extern unsigned char
    _e_program_default_CM7_section_init[];
extern unsigned char
    _e_program_default_CM7_section_noInit[];
extern unsigned char
    _e_program_timing_measurement_CM7_section_init[];
extern unsigned char
    _e_program_timing_measurement_CM7_section_noInit[];
extern unsigned char
    _e_program_default_CM4_section_init[];
extern unsigned char
    _e_program_default_CM4_section_noInit[];
extern unsigned char
    _e_program_timing_measurement_CM4_section_init[];
extern unsigned char
    _e_program_timing_measurement_CM4_section_noInit[];
extern unsigned char
    _e_program_logger_section_init[];
extern unsigned char
    _e_program_logger_section_noInit[];
extern unsigned char
    _e_program_ethernet_com_section_init[];
extern unsigned char
    _e_program_ethernet_com_section_noInit[];
extern unsigned char
    _e_program_channel_test_CM7_section_init[];
extern unsigned char
    _e_program_channel_test_CM7_section_noInit[];
extern unsigned char
    _e_program_channel_test_CM4_section_init[];
extern unsigned char
    _e_program_channel_test_CM4_section_noInit[];
extern unsigned char
    _e_program_interrupt_handlers_CM7_section_init[];
extern unsigned char
    _e_program_interrupt_handlers_CM7_section_noInit[];
extern unsigned char
    _e_os_section_consts[];
extern unsigned char
    _e_os_section_vars[];
extern unsigned char
    _flash_program_default_CM7_section_init[];
extern unsigned char
    _flash_program_timing_measurement_CM7_section_init[];
extern unsigned char
    _flash_program_default_CM4_section_init[];
extern unsigned char
    _flash_program_timing_measurement_CM4_section_init[];
extern unsigned char
    _flash_program_logger_section_init[];
extern unsigned char
    _flash_program_ethernet_com_section_init[];
extern unsigned char
    _flash_program_channel_test_CM7_section_init[];
extern unsigned char
    _flash_program_channel_test_CM4_section_init[];
extern unsigned char
    _flash_program_interrupt_handlers_CM7_section_init[];
extern unsigned char
    _flash_os_section_consts_start[];
extern unsigned char
    _flash_os_section_vars_start[];

const CosmOS_ProgramSectionConfigurationType
    clearSectionsCore0[CLEAR_SECTION_NUM_CORE_0]
IS_INITIALIZED_TO{
    {
        _s_program_default_CM7_section_noInit,
        _e_program_default_CM7_section_noInit,
        0,
    },
    {
        _s_program_timing_measurement_CM7_section_noInit,
        _e_program_timing_measurement_CM7_section_noInit,
        0,
    },
    {
        _s_program_ethernet_com_section_noInit,
        _e_program_ethernet_com_section_noInit,
        0,
    },
    {
        _s_program_channel_test_CM7_section_noInit,
        _e_program_channel_test_CM7_section_noInit,
        0,
    },
    {
        _s_program_interrupt_handlers_CM7_section_noInit,
        _e_program_interrupt_handlers_CM7_section_noInit,
        0,
    },
};

const CosmOS_ProgramSectionConfigurationType
    clearSectionsCore1[CLEAR_SECTION_NUM_CORE_1]
IS_INITIALIZED_TO{
    {
        _s_program_default_CM4_section_noInit,
        _e_program_default_CM4_section_noInit,
        0,
    },
    {
        _s_program_timing_measurement_CM4_section_noInit,
        _e_program_timing_measurement_CM4_section_noInit,
        0,
    },
    {
        _s_program_logger_section_noInit,
        _e_program_logger_section_noInit,
        0,
    },
    {
        _s_program_channel_test_CM4_section_noInit,
        _e_program_channel_test_CM4_section_noInit,
        0,
    },
};


const CosmOS_ProgramSectionConfigurationType
    bootSectionsCore0[BOOT_SECTION_NUM_CORE_0]
IS_INITIALIZED_TO{
    {
        _s_program_default_CM7_section_init,
        _e_program_default_CM7_section_init,
        _flash_program_default_CM7_section_init,
    },
    {
        _s_program_timing_measurement_CM7_section_init,
        _e_program_timing_measurement_CM7_section_init,
        _flash_program_timing_measurement_CM7_section_init,
    },
    {
        _s_program_ethernet_com_section_init,
        _e_program_ethernet_com_section_init,
        _flash_program_ethernet_com_section_init,
    },
    {
        _s_program_channel_test_CM7_section_init,
        _e_program_channel_test_CM7_section_init,
        _flash_program_channel_test_CM7_section_init,
    },
    {
        _s_program_interrupt_handlers_CM7_section_init,
        _e_program_interrupt_handlers_CM7_section_init,
        _flash_program_interrupt_handlers_CM7_section_init,
    },
};

const CosmOS_ProgramSectionConfigurationType
    bootSectionsCore1[BOOT_SECTION_NUM_CORE_1]
IS_INITIALIZED_TO{
    {
        _s_program_default_CM4_section_init,
        _e_program_default_CM4_section_init,
        _flash_program_default_CM4_section_init,
    },
    {
        _s_program_timing_measurement_CM4_section_init,
        _e_program_timing_measurement_CM4_section_init,
        _flash_program_timing_measurement_CM4_section_init,
    },
    {
        _s_program_logger_section_init,
        _e_program_logger_section_init,
        _flash_program_logger_section_init,
    },
    {
        _s_program_channel_test_CM4_section_init,
        _e_program_channel_test_CM4_section_init,
        _flash_program_channel_test_CM4_section_init,
    },
    {
        _s_os_section_consts,
        _e_os_section_consts,
        _flash_os_section_consts_start,
    },
    {
        _s_os_section_vars,
        _e_os_section_vars,
        _flash_os_section_vars_start,
    },
};

const CosmOS_BootSectionConfigurationType clearSections[CORE_NUM]
IS_INITIALIZED_TO
{
    {
        clearSectionsCore0,
        CLEAR_SECTION_NUM_CORE_0,
    },
    {
        clearSectionsCore1,
        CLEAR_SECTION_NUM_CORE_1,
    },
};

const CosmOS_BootSectionConfigurationType bootSections[CORE_NUM]
IS_INITIALIZED_TO
{
    {
        bootSectionsCore0,
        BOOT_SECTION_NUM_CORE_0,
    },
    {
        bootSectionsCore1,
        BOOT_SECTION_NUM_CORE_1,
    },
};
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_osBootCfg_c
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
  * @defgroup Apis_osBootCfg_c API's
  * @ingroup Local_osBootCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_osBootCfg_c Getters
  * @ingroup Apis_osBootCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_osBootCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_osBootCfg_c Setters
  * @ingroup Apis_osBootCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_osBootCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_osBootCfg_c General
  * @ingroup Apis_osBootCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_osBootCfg_c
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