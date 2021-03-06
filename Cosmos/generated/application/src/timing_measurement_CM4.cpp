/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file timing_measurement_CM4.cpp
*********************************************************************************
<!--                           Version Information                            -->
*********************************************************************************
** @version 2.0.0
** @author Generated by CosmOS CustomBox
*********************************************************************************
<!--                                 Warnings                                 -->
*********************************************************************************
** @warning Modifying user sections comments can lead to removing user code
**          during generating of the new CosmOS configuration
********************************************************************************/
#include "timing_measurement_CM4.h"
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Start      **
** start_name =timing_measurement_CM4_includeFiles
********************************************************************************/
#include <semaphore.h>
#include <mutex.h>
#include <buffer.h>
#include <spinlock.h>
#include <stm32h7xx_hal.h>
#include <thread.h>
#include <errorHandler.h>
#include "logger.h"
/********************************************************************************
** stop_name =timing_measurement_CM4_includeFiles
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Start      **
** start_name =timing_measurement_CM4_userFreeDeclarations
********************************************************************************/

/********************************************************************************
** stop_name =timing_measurement_CM4_userFreeDeclarations
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/* Task in the program timing_measurement_CM4 */
extern "C" void
Timing_measurement_task_CM4( void );

/* Threads in the program timing_measurement_CM4 */
extern "C" void
Synchronization_and_dynamicAllocation_test_thread_CM4( void );
extern "C" void
Synchronization_test_thread_CM4( void );
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/* @cond S */
__SEC_START( __TIMING_MEASUREMENT_CM4_NOINIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __TIMING_MEASUREMENT_CM4_NOINIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =timing_measurement_CM4_noInit
********************************************************************************/

/********************************************************************************
** stop_name =timing_measurement_CM4_noInit
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __TIMING_MEASUREMENT_CM4_NOINIT_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START( __TIMING_MEASUREMENT_CM4_INIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __TIMING_MEASUREMENT_CM4_INIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =timing_measurement_CM4_init
********************************************************************************/
int __TIMING_MEASUREMENT_CM4_INIT_SECTION counter_cm4 = 0;
int __TIMING_MEASUREMENT_CM4_INIT_SECTION bufferReader_cm4 = 0;
CosmOS_MutexVariableType resourcesMutex __TIMING_MEASUREMENT_CM4_INIT_SECTION;
CosmOS_MutexStateType resourcesMutex0 __TIMING_MEASUREMENT_CM4_INIT_SECTION;

char __TIMING_MEASUREMENT_CM4_INIT_SECTION timingMeasurementCM4[] =
    "\nMutex_test_thread_CM4 released mutex for resources \r\n\n";
/********************************************************************************
** stop_name =timing_measurement_CM4_init
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __TIMING_MEASUREMENT_CM4_INIT_SECTION_STOP)
/* @endcond*/

/********************************************************************************
** Task ID macro = TASK_0_PROGRAM_1_CORE_1_ID
** Program ID macro = PROGRAM_1_CORE_1_ID
** WCET of the task in microseconds = 500.0
** Period of the task in milliseconds = 5.0
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM4 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
Timing_measurement_task_CM4( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Timing_measurement_task_CM4
********************************************************************************/
    CosmOS_SpinlockStateType spinlockState;
    CosmOS_BufferStateType bufferState;
    CosmOS_MutexStateType mutexState;

    //HAL_GPIO_TogglePin( GPIOA, GPIO_PIN_4 );

    bufferReader_cm4 = 100;
    bufferState = buffer_writeArray( x_core_buffer_1_id,
        &bufferReader_cm4, sizeof( bufferReader_cm4 ) );

    if( errorHandler_isError( bufferState ) )
    {
        //error was returned, check its value
    }

    bufferReader_cm4 = 0;
    bufferState = buffer_writeArray( x_core_buffer_1_id,
        &bufferReader_cm4, sizeof( bufferReader_cm4 ) );

    if( errorHandler_isError( bufferState ) )
    {
        //error was returned, check its value
    }

    spinlockState = spinlock_trySpinlock( spinlock_test_0_id );
    if ( spinlockState IS_EQUAL_TO SPINLOCK_STATE_ENUM__SUCCESSFULLY_LOCKED )
    {
        spinlockState = spinlock_releaseSpinlock( spinlock_test_0_id );
    }
    else
    {
        if( errorHandler_isError( spinlockState ) )
        {
            //error was returned, check its value
        }
    }

    //trying if kernel will return error cause task cannot use mutexes
    mutexState = mutex_getMutex( &resourcesMutex );
    if( errorHandler_isError( mutexState ) )
    {
        //error was returned, check its value
    }

    if ( counter_cm4 > 100 )
    {
        counter_cm4 = 0;
    }
    else
    {
        counter_cm4++;
    }
/********************************************************************************
** stop_name =Timing_measurement_task_CM4
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM4 )
/* @endcond*/

/********************************************************************************
** Thread ID macro = THREAD_0_PROGRAM_1_CORE_1_ID
** Program ID macro = PROGRAM_1_CORE_1_ID
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM4 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
Synchronization_and_dynamicAllocation_test_thread_CM4( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Synchronization_and_dynamicAllocation_test_thread_CM4
********************************************************************************/
    CosmOS_SleepStateType sleepState;
    CosmOS_MutexStateType mutexState;

    for( ;; )
    {
        int * integerPointer = new int( 100 );
        if( integerPointer )
        {
            delete integerPointer;
        }

        mutexState = mutex_getMutex( &resourcesMutex );
        if( errorHandler_isError( mutexState ) )
        {
            //error was returned, check its value
        }

        //Critical code section (safe in intra-program synchronization)

        sleepState = thread_sleepMs( 10 );
        if( errorHandler_isError( sleepState ) )
        {
            //error was returned, check its value
        }

        mutexState = mutex_releaseMutex( &resourcesMutex );
        if( errorHandler_isError( mutexState ) )
        {
            //error was returned, check its value
        }
    }
/********************************************************************************
** stop_name =Synchronization_and_dynamicAllocation_test_thread_CM4
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM4 )
/* @endcond*/
/********************************************************************************
** Thread ID macro = THREAD_1_PROGRAM_1_CORE_1_ID
** Program ID macro = PROGRAM_1_CORE_1_ID
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM4 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
Synchronization_test_thread_CM4( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Synchronization_test_thread_CM4
********************************************************************************/
    CosmOS_MutexStateType mutexState;
    CosmOS_SleepStateType sleepState;
    CosmOS_BufferStateType bufferState;
    CosmOS_SemaphoreStateType semaphoreState;


    for( ;; )
    {
        mutexState = mutex_getMutex( &resourcesMutex );
        if( errorHandler_isError( mutexState ) )
        {
            //error was returned, check its value
        }

        //Critical code section (safe in intra-program synchronization)

        sleepState = thread_sleepMs( 100 );
        if( errorHandler_isError( sleepState ) )
        {
            //error was returned, check its value
        }

        mutexState = mutex_releaseMutex( &resourcesMutex );
        if( errorHandler_isError( mutexState ) )
        {
            //error was returned, check its value
        }

        sleepState = thread_sleep( 1 );
        if( errorHandler_isError( sleepState ) )
        {
            //error was returned, check its value
        }

        bufferState = user_log( timingMeasurementCM4, sizeof( timingMeasurementCM4 ) );
        if( errorHandler_isError( bufferState ) )
        {
            //error was returned, check its value
        }

        semaphoreState = semaphore_getSemaphore( semaphore_test_0_id );
        if( errorHandler_isError( semaphoreState ) )
        {
            //error was returned, check its value
        }

        //Critical code section (safe in inter-program synchronization)

        semaphoreState = semaphore_releaseSemaphore( semaphore_test_0_id );
        if( errorHandler_isError( semaphoreState ) )
        {
            //error was returned, check its value
        }

    }
/********************************************************************************
** stop_name =Synchronization_test_thread_CM4
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM4 )
/* @endcond*/

/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM4 )
/* @endcond*/
// If your compiler does not support pragmas use __APPLICATION_FUNC_SECTION_CM4
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Start      **
** start_name =timing_measurement_CM4_userCodeFree
********************************************************************************/

/********************************************************************************
** stop_name =timing_measurement_CM4_userCodeFree
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM4 )
/* @endcond*/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/