/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file routeCfg.c
*********************************************************************************
<!--                   routeCfg Unit Local Group Definition                  -->
*********************************************************************************
** @defgroup Local_routeCfg Local
** @ingroup routeCfg_unit
** @brief routeCfg locals
** @details lorem
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
/* CORE interfaces */
#include "routeCfg.h"
/* GENERATED interfaces */
#include "buffer.h"
#include "buffer.h"
#include "osInit.h"
#include "os.h"
#include "schedulable.h"
#include "sysJobs.h"
#include "interrupt.h"
#include "interrupt.h"
#include "thread.h"
#include "mutex.h"
#include "mutex.h"
#include "mutex.h"
#include "interrupt.h"
#include "interrupt.h"
#include "CILcore.h"
#include "spinlock.h"
#include "spinlock.h"
#include "osEvent.h"
#include "os.h"
#include "channel.h"
#include "channel.h"
#include "supportStdio.h"
#include "channel.h"
#include "channel.h"
#include "channel.h"
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
**                          Macro Definitions | Start                          **
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @defgroup Macros_routeCfg Macros
  * @ingroup Local_routeCfg
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Macros_routeCfg
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
  * @defgroup Variables_routeCfg Variables
  * @ingroup Local_routeCfg
  * @{
********************************************************************************/
/* @cond S */
__SEC_START(__OS_CONSTS_SECTION_START)
/* @endcond*/
const CosmOS_GenericVoidType RoutesFuncConst[ROUTES_FUNC_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
    (CosmOS_GenericVoidType)buffer_readArrayInternal,
    (CosmOS_GenericVoidType)buffer_writeArrayInternal,
    (CosmOS_GenericVoidType)osInit_init,
    (CosmOS_GenericVoidType)os_start,
    (CosmOS_GenericVoidType)schedulable_setExecutionStateToFinished,
    (CosmOS_GenericVoidType)sysJobs_dispatcher,
    (CosmOS_GenericVoidType)interrupt_disableInterrupts,
    (CosmOS_GenericVoidType)interrupt_enableInterrupts,
    (CosmOS_GenericVoidType)thread_sleepMsInternal,
    (CosmOS_GenericVoidType)mutex_getMutexInternal,
    (CosmOS_GenericVoidType)mutex_tryMutexInternal,
    (CosmOS_GenericVoidType)mutex_releaseMutexInternal,
    (CosmOS_GenericVoidType)interrupt_disableInterrupt,
    (CosmOS_GenericVoidType)interrupt_enableInterrupt,
    (CosmOS_GenericVoidType)CILcore_getCoreId,
    (CosmOS_GenericVoidType)spinlock_trySpinlockInternal,
    (CosmOS_GenericVoidType)spinlock_releaseSpinlockInternal,
    (CosmOS_GenericVoidType)osEvent_triggerEventInternal,
    (CosmOS_GenericVoidType)os_kernelPanicInternal,
    (CosmOS_GenericVoidType)channel_sendInternal,
    (CosmOS_GenericVoidType)channel_sendReplyObtainedInternal,
    (CosmOS_GenericVoidType)supportStdio_memcpyInternal,
    (CosmOS_GenericVoidType)channel_replyInternal,
    (CosmOS_GenericVoidType)channel_receiveInternal,
    (CosmOS_GenericVoidType)channel_initializeInternal,
};

const BitWidthType RoutesIdToFuncConst[ROUTES_ID_TO_FUNC_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
    BUFFER_READARRAYINTERNAL,
    BUFFER_WRITEARRAYINTERNAL,
    OSINIT_INIT,
    OS_START,
    SCHEDULABLE_SETEXECUTIONSTATETOFINISHED,
    SYSJOBS_DISPATCHER,
    INTERRUPT_DISABLEINTERRUPTS,
    INTERRUPT_ENABLEINTERRUPTS,
    THREAD_SLEEPMSINTERNAL,
    MUTEX_GETMUTEXINTERNAL,
    MUTEX_TRYMUTEXINTERNAL,
    MUTEX_RELEASEMUTEXINTERNAL,
    INTERRUPT_DISABLEINTERRUPT,
    INTERRUPT_ENABLEINTERRUPT,
    CILCORE_GETCOREID,
    SPINLOCK_TRYSPINLOCKINTERNAL,
    SPINLOCK_RELEASESPINLOCKINTERNAL,
    OSEVENT_TRIGGEREVENTINTERNAL,
    OS_KERNELPANICINTERNAL,
    CHANNEL_SENDINTERNAL,
    CHANNEL_SENDREPLYOBTAINEDINTERNAL,
    SUPPORTSTDIO_MEMCPYINTERNAL,
    CHANNEL_REPLYINTERNAL,
    CHANNEL_RECEIVEINTERNAL,
    CHANNEL_INITIALIZEINTERNAL,
};

const BitWidthType
    RoutesIdToEntityConst[ROUTES_ID_TO_ENTITY_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
    ROUTES_ID_TO_ENTITY_DUMMY,
};

const CosmOS_RoutesConfigurationType RoutesConstCfg __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
    RoutesFuncConst,    /* const CosmOS_GenericVoidType * routeFunc */
    RoutesIdToFuncConst,    /* const BitWidthType * routeIdToFunc */
    RoutesIdToEntityConst,    /* const BitWidthType * routeIdToEntity */
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Variables_routeCfg
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
  * @defgroup Apis_routeCfg_c API's
  * @ingroup Local_routeCfg
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Getters_routeCfg_c Getters
  * @ingroup Apis_routeCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Getters_routeCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup Setters_routeCfg_c Setters
  * @ingroup Apis_routeCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  Setters_routeCfg_c
********************************************************************************/
/********************************************************************************
  * DOXYGEN START GROUP                                                        **
  * *************************************************************************//**
  * @addtogroup General_routeCfg_c General
  * @ingroup Apis_routeCfg_c
  * @{
********************************************************************************/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @} */
/*  General_routeCfg_c
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