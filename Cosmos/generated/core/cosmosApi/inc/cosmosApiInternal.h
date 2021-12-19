/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file cosmosApiInternal.h
*********************************************************************************
<!--                cosmosApiInternal Module Group Definition                 -->
*********************************************************************************
** @defgroup cosmosApiInternal_module cosmosApiInternal
** @brief cosmosApiInternal Module
** @details lorem
*********************************************************************************
<!--                 cosmosApiInternal Unit Group Definition                  -->
*********************************************************************************
** @defgroup cosmosApiInternal_unit cosmosApiInternal Unit
** @ingroup cosmosApiInternal_module
** @brief cosmosApiInternal Unit
** @details lorem
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @date 2021-12-19
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                          Warnings and License                            -->
*********************************************************************************
** @warning Modifying code can lead to unexpected behaviour of the whole system
** @copyright MIT License
*********************************************************************************
<!--              cosmosApiInternal Unit Global Group Definition               -->
*********************************************************************************
** @defgroup Global_cosmosApiInternal Global
** @ingroup cosmosApiInternal_unit
** @brief cosmosApiInternal globals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __COSMOSAPIINTERNAL_H__
#define __COSMOSAPIINTERNAL_H__
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
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_cosmosApiInternal_h Macros
  * @ingroup Global_cosmosApiInternal
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_cosmosApiInternal_h
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
  * @defgroup Variables_cosmosApiInternal_h Variables
  * @ingroup Global_cosmosApiInternal
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_cosmosApiInternal_h
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
  * @defgroup Apis_cosmosApiInternal_h API's
  * @ingroup Global_cosmosApiInternal
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_cosmosApiInternal_h Getters
  * @ingroup Apis_cosmosApiInternal_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_cosmosApiInternal_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_cosmosApiInternal_h Setters
  * @ingroup Apis_cosmosApiInternal_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_cosmosApiInternal_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_cosmosApiInternal_h General
  * @ingroup Apis_cosmosApiInternal_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_cosmosApiInternal_h
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
  * @addtogroup Getters_cosmosApiInternal_h Getters
  * @ingroup Apis_cosmosApiInternal_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_cosmosApiInternal_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_cosmosApiInternal_h Setters
  * @ingroup Apis_cosmosApiInternal_h
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_cosmosApiInternal_h
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_cosmosApiInternal_h General
  * @ingroup Apis_cosmosApiInternal_h
  * @{
********************************************************************************/
#define cosmosApiInternal_buffer_readArrayInternal(arrayPointer,bufferCfgPointer,size) \
(CosmOS_BufferStateType)sysCalls_bitWidthType_voidPtr_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_BUFFER_READARRAYINTERNAL\
    ,arrayPointer\
    ,bufferCfgPointer\
    ,size\
    )
#define cosmosApiInternal_buffer_writeArrayInternal(arrayPointer,bufferCfgPointer,size) \
(CosmOS_BufferStateType)sysCalls_bitWidthType_voidPtr_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_BUFFER_WRITEARRAYINTERNAL\
    ,arrayPointer\
    ,bufferCfgPointer\
    ,size\
    )
#define cosmosApiInternal_schedulable_setExecutionStateToFinished() \
(void)sysCalls_bitWidthType_ret_void(\
    SYSCALL_SCHEDULABLE_SETEXECUTIONSTATETOFINISHED\
    )
#define cosmosApiInternal_sysJobs_dispatcher() \
(void)sysCalls_bitWidthType_ret_void(\
    SYSCALL_SYSJOBS_DISPATCHER\
    )
#define cosmosApiInternal_thread_sleepMsInternal(corePtr,tickCount) \
(CosmOS_SleepStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_THREAD_SLEEPMSINTERNAL\
    ,corePtr\
    ,tickCount\
    )
#define cosmosApiInternal_mutex_getMutexInternal(mutexPtr) \
(CosmOS_MutexStateType)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(\
    SYSCALL_MUTEX_GETMUTEXINTERNAL\
    ,mutexPtr\
    )
#define cosmosApiInternal_mutex_tryMutexInternal(mutexPtr) \
(CosmOS_MutexStateType)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(\
    SYSCALL_MUTEX_TRYMUTEXINTERNAL\
    ,mutexPtr\
    )
#define cosmosApiInternal_mutex_releaseMutexInternal(mutexPtr) \
(CosmOS_MutexStateType)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(\
    SYSCALL_MUTEX_RELEASEMUTEXINTERNAL\
    ,mutexPtr\
    )
#define cosmosApiInternal_CILcore_getCoreId() \
(BitWidthType)sysCalls_bitWidthType_ret_bitWidthType(\
    SYSCALL_CILCORE_GETCOREID\
    )
#define cosmosApiInternal_spinlock_trySpinlockInternal(spinlockVarPtr,spinlockId) \
(CosmOS_SpinlockStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_SPINLOCK_TRYSPINLOCKINTERNAL\
    ,spinlockVarPtr\
    ,spinlockId\
    )
#define cosmosApiInternal_spinlock_releaseSpinlockInternal(spinlockVarPtr,spinlockId) \
(CosmOS_SpinlockStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_SPINLOCK_RELEASESPINLOCKINTERNAL\
    ,spinlockVarPtr\
    ,spinlockId\
    )
#define cosmosApiInternal_osEvent_triggerEventInternal(handleCoresPointer,event) \
(void)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_OSEVENT_TRIGGEREVENTINTERNAL\
    ,handleCoresPointer\
    ,event\
    )
#define cosmosApiInternal_os_kernelPanicInternal() \
(void)sysCalls_bitWidthType_ret_void(\
    SYSCALL_OS_KERNELPANICINTERNAL\
    )
#define cosmosApiInternal_channel_sendInternal(channelCfg,sendPoolPayloadLength,userReplyDataPoolSize) \
(void)sysCalls_bitWidthType_voidPtr_bitWidthType_bitWidthType_ret_bitWidthType(\
    SYSCALL_CHANNEL_SENDINTERNAL\
    ,channelCfg\
    ,sendPoolPayloadLength\
    ,userReplyDataPoolSize\
    )
#define cosmosApiInternal_channel_sendReplyObtainedInternal(channelCfg) \
(void)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(\
    SYSCALL_CHANNEL_SENDREPLYOBTAINEDINTERNAL\
    ,channelCfg\
    )
#define cosmosApiInternal_supportStdio_memcpyInternal(src,dest,size) \
(void)sysCalls_bitWidthType_voidPtr_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_SUPPORTSTDIO_MEMCPYINTERNAL\
    ,src\
    ,dest\
    ,size\
    )
#define cosmosApiInternal_channel_replyInternal(channelId,replyPoolPayloadLength) \
(void)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_CHANNEL_REPLYINTERNAL\
    ,channelId\
    ,replyPoolPayloadLength\
    )
#define cosmosApiInternal_channel_receiveInternal(channelCfg) \
(void)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(\
    SYSCALL_CHANNEL_RECEIVEINTERNAL\
    ,channelCfg\
    )
#define cosmosApiInternal_channel_initializeInternal(channelCfg) \
(void)sysCalls_bitWidthType_voidPtr_ret_bitWidthType(\
    SYSCALL_CHANNEL_INITIALIZEINTERNAL\
    ,channelCfg\
    )
#define cosmosApiInternal_semaphore_trySemaphoreInternal(semaphoreVarPtr,semaphoreId) \
(CosmOS_SemaphoreStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_SEMAPHORE_TRYSEMAPHOREINTERNAL\
    ,semaphoreVarPtr\
    ,semaphoreId\
    )
#define cosmosApiInternal_semaphore_releaseSemaphoreInternal(semaphoreVarPtr,semaphoreId) \
(CosmOS_SemaphoreStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_SEMAPHORE_RELEASESEMAPHOREINTERNAL\
    ,semaphoreVarPtr\
    ,semaphoreId\
    )
#define cosmosApiInternal_semaphore_getSemaphoreInternal(semaphoreVarPtr,semaphoreId) \
(CosmOS_SemaphoreStateType)sysCalls_bitWidthType_voidPtr_bitWidthType_ret_bitWidthType(\
    SYSCALL_SEMAPHORE_GETSEMAPHOREINTERNAL\
    ,semaphoreVarPtr\
    ,semaphoreId\
    )
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_cosmosApiInternal_h
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