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
#include "deviceIO.h"
#include "osInit.h"
#include "os.h"
#include "schedulable.h"
#include "sysJobs.h"
#include "spinlock.h"
#include "spinlock.h"
#include "spinlock.h"
#include "interrupt.h"
#include "interrupt.h"
#include "schedulable.h"
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
  * @}
  * Macros_routeCfg
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
		(CosmOS_GenericVoidType)buffer_readArray,
		(CosmOS_GenericVoidType)buffer_writeArray,
		(CosmOS_GenericVoidType)deviceIO_togglePin,
		(CosmOS_GenericVoidType)osInit_init,
		(CosmOS_GenericVoidType)os_start,
		(CosmOS_GenericVoidType)schedulable_setExecutionStateToFinished,
		(CosmOS_GenericVoidType)sysJobs_dispatcher,
		(CosmOS_GenericVoidType)spinlock_getSpinlock,
		(CosmOS_GenericVoidType)spinlock_trySpinlock,
		(CosmOS_GenericVoidType)spinlock_releaseSpinlock,
		(CosmOS_GenericVoidType)interrupt_disableInterrupts,
		(CosmOS_GenericVoidType)interrupt_enableInterrupts,
		(CosmOS_GenericVoidType)schedulable_sleepMs,
};

const BitWidthType RoutesIdToFuncConst[ROUTES_ID_TO_FUNC_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
		SPINLOCK_GETSPINLOCK,
		SPINLOCK_TRYSPINLOCK,
		SPINLOCK_RELEASESPINLOCK,
		SPINLOCK_GETSPINLOCK,
		SPINLOCK_TRYSPINLOCK,
		SPINLOCK_RELEASESPINLOCK,
		SPINLOCK_GETSPINLOCK,
		SPINLOCK_TRYSPINLOCK,
		SPINLOCK_RELEASESPINLOCK,
		SPINLOCK_GETSPINLOCK,
		SPINLOCK_TRYSPINLOCK,
		SPINLOCK_RELEASESPINLOCK,
		SPINLOCK_GETSPINLOCK,
		SPINLOCK_TRYSPINLOCK,
		SPINLOCK_RELEASESPINLOCK,
		SPINLOCK_GETSPINLOCK,
		SPINLOCK_TRYSPINLOCK,
		SPINLOCK_RELEASESPINLOCK,
		BUFFER_READARRAY,
		BUFFER_WRITEARRAY,
		BUFFER_READARRAY,
		BUFFER_WRITEARRAY,
		BUFFER_READARRAY,
		BUFFER_WRITEARRAY,
		DEVICEIO_TOGGLEPIN,
		OSINIT_INIT,
		OS_START,
		SCHEDULABLE_SETEXECUTIONSTATETOFINISHED,
		SYSJOBS_DISPATCHER,
		INTERRUPT_DISABLEINTERRUPTS,
		INTERRUPT_ENABLEINTERRUPTS,
		SCHEDULABLE_SLEEPMS,
};

const BitWidthType RoutesIdToEntityConst[ROUTES_ID_TO_ENTITY_NUM] __OS_CONSTS_SECTION
IS_INITIALIZED_TO
{
		SPINLOCK_0_ID,
		SPINLOCK_0_ID,
		SPINLOCK_0_ID,
		SPINLOCK_1_ID,
		SPINLOCK_1_ID,
		SPINLOCK_1_ID,
		SPINLOCK_5_ID,
		SPINLOCK_5_ID,
		SPINLOCK_5_ID,
		SPINLOCK_6_ID,
		SPINLOCK_6_ID,
		SPINLOCK_6_ID,
		SPINLOCK_7_ID,
		SPINLOCK_7_ID,
		SPINLOCK_7_ID,
		SPINLOCK_8_ID,
		SPINLOCK_8_ID,
		SPINLOCK_8_ID,
		BUFFER_0_ID,
		BUFFER_0_ID,
		BUFFER_1_ID,
		BUFFER_1_ID,
		BUFFER_2_ID,
		BUFFER_2_ID,
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
    RoutesFuncConst,        /* const CosmOS_GenericVoidType * routeFunc               */
    RoutesIdToFuncConst,    /* const BitWidthType * routeIdToFunc                  */
    RoutesIdToEntityConst,  /* const BitWidthType * routeIdToEntity                */
};
/* @cond S */
__SEC_STOP(__OS_CONSTS_SECTION_STOP)
/* @endcond*/
/********************************************************************************
  * DOXYGEN STOP GROUP                                                         **
  * *************************************************************************//**
  * @}
  * Variables_routeCfg
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
  * @}
  * Getters_routeCfg_c
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
  * @}
  * Setters_routeCfg_c
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
  * @}
  * General_routeCfg_c
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