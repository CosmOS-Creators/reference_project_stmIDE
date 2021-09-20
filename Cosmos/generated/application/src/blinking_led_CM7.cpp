/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file blinking_led_CM7.cpp
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
#include "blinking_led_CM7.h"
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Start      **
** start_name =blinking_led_CM7_includeFiles
********************************************************************************/
#include <stm32h7xx_hal.h>
#include <mutex.h>
#include <thread.h>
/********************************************************************************
** stop_name =blinking_led_CM7_includeFiles
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/* Task in the program blinking_led_CM7 */
extern "C" void Task_0_Core_0_Handler(void);

/* Threads in the program blinking_led_CM7 */
extern "C" void Thread_Core_0(void);
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/* @cond S */
__SEC_START(__BLINKING_LED_CM7_NOINIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __BLINKING_LED_CM7_NOINIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =blinking_led_CM7_noInit
********************************************************************************/

/********************************************************************************
** stop_name =blinking_led_CM7_noInit
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP(__BLINKING_LED_CM7_NOINIT_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START(__BLINKING_LED_CM7_INIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __BLINKING_LED_CM7_INIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =blinking_led_CM7_init
********************************************************************************/
int __BLINKING_LED_CM7_INIT_SECTION counter =0;
float __BLINKING_LED_CM7_INIT_SECTION floatTestTask = 0;
int __BLINKING_LED_CM7_INIT_SECTION bufferReader_cm7 = 0;
CosmOS_MutexVariableType gpio_e_mutex __BLINKING_LED_CM7_INIT_SECTION;
/********************************************************************************
** stop_name =blinking_led_CM7_init
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP(__BLINKING_LED_CM7_INIT_SECTION_STOP)
/* @endcond*/

/********************************************************************************
** Task ID macro = TASK_0_PROGRAM_1_CORE_0_ID
** Program ID macro = PROGRAM_1_CORE_0_ID
** WCET of the task in microseconds = 500.0
** Period of the task in milliseconds = 5.0
********************************************************************************/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void Task_0_Core_0_Handler(void)
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Task_0_Core_0_Handler
********************************************************************************/
	CosmOS_SpinlockStateType spinlockState;
	CosmOS_BufferStateType bufferState;
	CosmOS_MutexStateType mutexState;

	cosmosApi_deviceIO_togglePin(GPIOF, GPIO_PIN_11); //Timing measurement with logic analyzer, pls dont remove
	if (counter > 100)
	{
		counter = 0;

		bufferReader_cm7 = 100;
		bufferState = cosmosApi_write_buffer_x_core_buffer_1(&bufferReader_cm7,sizeof(bufferReader_cm7));

		bufferReader_cm7 = 0;
		bufferState = cosmosApi_read_buffer_x_core_buffer_1(&bufferReader_cm7,sizeof(bufferReader_cm7));

		spinlockState = cosmosApi_try_spinlock_uart_buffer_read();
		spinlockState = cosmosApi_release_spinlock_uart_buffer_read();

		mutexState = mutex_getMutex(&gpio_e_mutex); //trying if kernel will return err cause task cannot use mutexes

	}
	else
	{
		counter++;
	}
	__asm volatile ("VMUL.F32 s0, s0, s1"); //testing FPU context switch
	cosmosApi_deviceIO_togglePin(GPIOF, GPIO_PIN_11); //Timing measurement with logic analyzer, pls dont remove

	__SUPRESS_UNUSED_VAR(spinlockState);
	__SUPRESS_UNUSED_VAR(mutexState);
	__SUPRESS_UNUSED_VAR(bufferState);
/********************************************************************************
** stop_name =Task_0_Core_0_Handler
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/

/********************************************************************************
** Thread ID macro = THREAD_0_PROGRAM_1_CORE_0_ID
** Program ID macro = PROGRAM_1_CORE_0_ID
********************************************************************************/
/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void Thread_Core_0(void)
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Thread_Core_0
********************************************************************************/
	CosmOS_MutexStateType mutexState;
	CosmOS_SleepStateType sleepState;

	int * integerArr = new int[10];
	delete integerArr;

	GPIO * gpio_e = new GPIO(GPIOE);

	sleepState = thread_sleep(1);

	mutexState = mutex_getMutex(&gpio_e_mutex);
	gpio_e->togglePin(GPIO_PIN_1);
	mutexState = mutex_releaseMutex(&gpio_e_mutex);

	delete gpio_e;

	__SUPRESS_UNUSED_VAR(mutexState);
	__SUPRESS_UNUSED_VAR(sleepState);
/********************************************************************************
** stop_name =Thread_Core_0
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/

/* @cond S */
__SEC_START(__APPLICATION_FUNC_SECTION_START_CM7)
/* @endcond*/
// If your compiler does not support pragmas use __APPLICATION_FUNC_SECTION_CM7
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Start      **
** start_name =blinking_led_CM7_userCodeFree
********************************************************************************/
__APPLICATION_FUNC_SECTION_CM7 void GPIO::togglePin(BitWidthType pinNumber)
{
	cosmosApi_deviceIO_togglePin(address, pinNumber);
}
/********************************************************************************
** stop_name =blinking_led_CM7_userCodeFree
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP(__APPLICATION_FUNC_SECTION_STOP_CM7)
/* @endcond*/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/