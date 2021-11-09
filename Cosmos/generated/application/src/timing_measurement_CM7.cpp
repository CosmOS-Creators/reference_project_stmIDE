/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file timing_measurement_CM7.cpp
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
#include "timing_measurement_CM7.h"
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Start      **
** start_name =timing_measurement_CM7_includeFiles
********************************************************************************/
#include <mutex.h>
#include <buffer.h>
#include <spinlock.h>
#include <stm32h7xx_hal.h>
#include <thread.h>
#include "logger.h"
/********************************************************************************
** stop_name =timing_measurement_CM7_includeFiles
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Start      **
** start_name =timing_measurement_CM7_userFreeDeclarations
********************************************************************************/

/********************************************************************************
** stop_name =timing_measurement_CM7_userFreeDeclarations
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/* Task in the program timing_measurement_CM7 */
extern "C" void
Timing_measurement_task_CM7( void );

/* Threads in the program timing_measurement_CM7 */
extern "C" void
Timing_measurement_thread_CM7( void );
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/* @cond S */
__SEC_START( __TIMING_MEASUREMENT_CM7_NOINIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __TIMING_MEASUREMENT_CM7_NOINIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =timing_measurement_CM7_noInit
********************************************************************************/

/********************************************************************************
** stop_name =timing_measurement_CM7_noInit
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __TIMING_MEASUREMENT_CM7_NOINIT_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START( __TIMING_MEASUREMENT_CM7_INIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __TIMING_MEASUREMENT_CM7_INIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =timing_measurement_CM7_init
********************************************************************************/
int __TIMING_MEASUREMENT_CM7_INIT_SECTION counter = 0;
float __TIMING_MEASUREMENT_CM7_INIT_SECTION floatTestTask = 0;
int __TIMING_MEASUREMENT_CM7_INIT_SECTION bufferReader_cm7 = 0;
CosmOS_MutexVariableType gpio_e_mutex __TIMING_MEASUREMENT_CM7_INIT_SECTION;
char __TIMING_MEASUREMENT_CM7_INIT_SECTION timingMeasurementCM7[] =
    "\nTiming_measurement_thread_CM7 toggled GPIOE PIN 1 \r\n\n";
/********************************************************************************
** stop_name =timing_measurement_CM7_init
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __TIMING_MEASUREMENT_CM7_INIT_SECTION_STOP)
/* @endcond*/

/********************************************************************************
** Task ID macro = TASK_0_PROGRAM_1_CORE_0_ID
** Program ID macro = PROGRAM_1_CORE_0_ID
** WCET of the task in microseconds = 500.0
** Period of the task in milliseconds = 5.0
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM7 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void
Timing_measurement_task_CM7( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Timing_measurement_task_CM7
********************************************************************************/
    CosmOS_SpinlockStateType spinlockState;
    CosmOS_BufferStateType bufferState;
    CosmOS_MutexStateType mutexState;

    if ( counter > 100 )
    {
        counter = 0;

        bufferReader_cm7 = 100;
        bufferState = buffer_writeArray( x_core_buffer_1_id,
            &bufferReader_cm7, sizeof( bufferReader_cm7 ) );

        bufferReader_cm7 = 0;
        bufferState = buffer_writeArray( x_core_buffer_1_id,
            &bufferReader_cm7, sizeof( bufferReader_cm7 ) );

    spinlockState = spinlock_trySpinlock( spinlock_test_0_id );
    if ( spinlockState IS_EQUAL_TO SPINLOCK_STATE_ENUM__SUCCESSFULLY_LOCKED )
    {
        spinlockState = spinlock_releaseSpinlock( spinlock_test_0_id );
    }
        //trying if kernel will return err cause task cannot use mutexes
        mutexState = mutex_getMutex( &gpio_e_mutex );
    }
    else
    {
        counter++;
    }
    __asm volatile( "VMUL.F32 s0, s0, s1" );  //testing FPU context switch

    __SUPRESS_UNUSED_VAR( spinlockState );
    __SUPRESS_UNUSED_VAR( mutexState );
    __SUPRESS_UNUSED_VAR( bufferState );
/********************************************************************************
** stop_name =Timing_measurement_task_CM7
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM7 )
/* @endcond*/

/********************************************************************************
** Thread ID macro = THREAD_0_PROGRAM_1_CORE_0_ID
** Program ID macro = PROGRAM_1_CORE_0_ID
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM7 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void
Timing_measurement_thread_CM7( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Timing_measurement_thread_CM7
********************************************************************************/
    CosmOS_MutexStateType mutexState;
    CosmOS_SleepStateType sleepState;

    int * integerArr = new int[10];
    delete integerArr;

    GPIO * gpio_e = new GPIO( GPIOE );

    sleepState = thread_sleep( 1 );

    mutexState = mutex_getMutex( &gpio_e_mutex );
    gpio_e->togglePin( GPIO_PIN_1 );
    mutexState = mutex_releaseMutex( &gpio_e_mutex );

    user_log( timingMeasurementCM7, sizeof( timingMeasurementCM7 ) );

    delete gpio_e;

    __SUPRESS_UNUSED_VAR( mutexState );
    __SUPRESS_UNUSED_VAR( sleepState );
/********************************************************************************
** stop_name =Timing_measurement_thread_CM7
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM7 )
/* @endcond*/

/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM7 )
/* @endcond*/
// If your compiler does not support pragmas use __APPLICATION_FUNC_SECTION_CM7
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Start      **
** start_name =timing_measurement_CM7_userCodeFree
********************************************************************************/
__APPLICATION_FUNC_SECTION_CM7 void
GPIO::togglePin( BitWidthType pinNumber )
{
    HAL_GPIO_TogglePin( (GPIO_TypeDef*)address, pinNumber );
}
/********************************************************************************
** stop_name =timing_measurement_CM7_userCodeFree
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM7 )
/* @endcond*/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/