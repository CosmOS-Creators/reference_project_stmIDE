/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file cosmosApi.h
*********************************************************************************
<!--                     cosmosApi Module Group Definition                    -->
*********************************************************************************
** @defgroup cosmosApi_module cosmosApi
** @brief cosmosApi Module
** @details lorem
*********************************************************************************
<!--                      cosmosApi Unit Group Definition                     -->
*********************************************************************************
** @defgroup cosmosApi_unit cosmosApi Unit
** @ingroup cosmosApi_module
** @brief cosmosApi Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-09-18
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--                  cosmosApi Unit Global Group Definition                  -->
*********************************************************************************
** @defgroup Global_cosmosApi Global
** @ingroup cosmosApi_unit
** @brief cosmosApi globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __COSMOSAPI_H__
#define __COSMOSAPI_H__
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
#include "sysCalls.h"
#include "osBoot.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_cosmosApi_h Macros
  * @ingroup Global_cosmosApi
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Macros_cosmosApi_h
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
  * @defgroup Variables_cosmosApi_h Variables
  * @ingroup Global_cosmosApi
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_cosmosApi_h
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
  * @defgroup Apis_cosmosApi_h API's
  * @ingroup Global_cosmosApi
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_cosmosApi_h Getters
  * @ingroup Apis_cosmosApi_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_cosmosApi_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_cosmosApi_h Setters
  * @ingroup Apis_cosmosApi_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_cosmosApi_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_cosmosApi_h General
  * @ingroup Apis_cosmosApi_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_cosmosApi_h
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
  * @addtogroup Getters_cosmosApi_h Getters
  * @ingroup Apis_cosmosApi_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Getters_cosmosApi_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_cosmosApi_h Setters
  * @ingroup Apis_cosmosApi_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Setters_cosmosApi_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_cosmosApi_h General
  * @ingroup Apis_cosmosApi_h
  * @{
********************************************************************************/
#define cosmosApi_deviceIO_togglePin(gpio,pin) (void)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_DEVICEIO_TOGGLEPIN,gpio,pin)
#define cosmosApi_osInit_init() (void)sysCalls_bitWidthType_ret_void(SYSCALL_OSINIT_INIT)
#define cosmosApi_os_start() (void)sysCalls_bitWidthType_ret_void(SYSCALL_OS_START)
#define cosmosApi_interrupt_disableInterrupts() (void)sysCalls_bitWidthType_ret_void(SYSCALL_INTERRUPT_DISABLEINTERRUPTS)
#define cosmosApi_interrupt_enableInterrupts() (void)sysCalls_bitWidthType_ret_void(SYSCALL_INTERRUPT_ENABLEINTERRUPTS)
#define cosmosApi_thread_sleepMs(delay) (CosmOS_SleepStateType)sysCalls_bitWidthType_bitWidthType_ret_bitWidthType(SYSCALL_THREAD_SLEEPMS,delay)
#define cosmosApi_os_write32(uint32Ptr,uint32Val) (void)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_OS_WRITE32,uint32Ptr,uint32Val)
#define cosmosApi_os_write16(uint16Ptr,uint16Val) (void)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_OS_WRITE16,uint16Ptr,uint16Val)
#define cosmosApi_os_write8(uint8Ptr,uint8Val) (void)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_OS_WRITE8,uint8Ptr,uint8Val)
#define cosmosApi_mutex_getMutex(mutexPtr) (CosmOS_MutexStateType)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(SYSCALL_MUTEX_GETMUTEX,mutexPtr)
#define cosmosApi_mutex_tryMutex(mutexPtr) (CosmOS_MutexStateType)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(SYSCALL_MUTEX_TRYMUTEX,mutexPtr)
#define cosmosApi_mutex_releaseMutex(mutexPtr) (CosmOS_MutexStateType)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(SYSCALL_MUTEX_RELEASEMUTEX,mutexPtr)
#define cosmosApi_boot() osBoot_boot()

#define cosmosApi_read_doubleBuffer_x_core_buffer_0_instance_0(array, size) (CosmOS_BufferStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_READ_BUFFER_0_ID, array, size)
#define cosmosApi_write_doubleBuffer_x_core_buffer_0_instance_0(array, size) (CosmOS_BufferStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_WRITE_BUFFER_0_ID, array, size)
#define cosmosApi_read_doubleBuffer_x_core_buffer_0_instance_1(array, size) (CosmOS_BufferStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_READ_BUFFER_1_ID, array, size)
#define cosmosApi_write_doubleBuffer_x_core_buffer_0_instance_1(array, size) (CosmOS_BufferStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_WRITE_BUFFER_1_ID, array, size)

#define cosmosApi_read_buffer_x_core_buffer_1(array, size) (CosmOS_BufferStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_READ_BUFFER_2_ID, array, size)
#define cosmosApi_write_buffer_x_core_buffer_1(array, size) (CosmOS_BufferStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(SYSCALL_WRITE_BUFFER_2_ID, array, size)
#define cosmosApi_get_spinlock_uart_buffer_read() (CosmOS_SpinlockStateType)sysCalls_bitWidthType_ret_bitWidthType(SYSCALL_GET_SPINLOCK_0_ID)
#define cosmosApi_try_spinlock_uart_buffer_read() (CosmOS_SpinlockStateType)sysCalls_bitWidthType_ret_bitWidthType(SYSCALL_TRY_SPINLOCK_0_ID)
#define cosmosApi_release_spinlock_uart_buffer_read() (CosmOS_SpinlockStateType)sysCalls_bitWidthType_ret_bitWidthType(SYSCALL_RELEASE_SPINLOCK_0_ID)
#define cosmosApi_get_spinlock_uart_buffer_write() (CosmOS_SpinlockStateType)sysCalls_bitWidthType_ret_bitWidthType(SYSCALL_GET_SPINLOCK_1_ID)
#define cosmosApi_try_spinlock_uart_buffer_write() (CosmOS_SpinlockStateType)sysCalls_bitWidthType_ret_bitWidthType(SYSCALL_TRY_SPINLOCK_1_ID)
#define cosmosApi_release_spinlock_uart_buffer_write() (CosmOS_SpinlockStateType)sysCalls_bitWidthType_ret_bitWidthType(SYSCALL_RELEASE_SPINLOCK_1_ID)
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * General_cosmosApi_h
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