/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file blinking_led_CM7.c
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
#include "stm32h7xx_hal.h"
#include "blinking_led_CM7.h"
/********************************************************************************
** stop_name =blinking_led_CM7_includeFiles
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/* Task in the program blinking_led_CM7 */
extern void Task_0_Core_0_Handler(void);

/* Threads in the program blinking_led_CM7 */
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
__SEC_START(__BLINKING_LED_CM7_NOINIT_SECTION_START)
// If your compiler does not support pragmas use __BLINKING_LED_CM7_NOINIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =blinking_led_CM7_noInit
********************************************************************************/

/********************************************************************************
** stop_name =blinking_led_CM7_noInit
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
__SEC_STOP(__BLINKING_LED_CM7_NOINIT_SECTION_STOP)

__SEC_START(__BLINKING_LED_CM7_INIT_SECTION_START)
// If your compiler does not support pragmas use __BLINKING_LED_CM7_INIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =blinking_led_CM7_init
********************************************************************************/
int counter __BLINKING_LED_CM7_INIT_SECTION =0;
float __BLINKING_LED_CM7_INIT_SECTION floatTestTask = 0;
/********************************************************************************
** stop_name =blinking_led_CM7_init
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
__SEC_STOP(__BLINKING_LED_CM7_INIT_SECTION_STOP)

/********************************************************************************
** Task ID macro = TASK_0_PROGRAM_1_CORE_0_ID
** Program ID macro = PROGRAM_1_CORE_0_ID
** WCET macro = TASK_0_PROGRAM_1_CORE_0_WCET
** Period of task in ticks = 50
********************************************************************************/
void Task_0_Core_0_Handler(void)
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Task_0_Core_0_Handler
********************************************************************************/
if (counter > 100)
{
    counter = 0;
    cosmosApi_deviceIO_togglePin(GPIOE, GPIO_PIN_1); //ORANGE LED

	// cosmosApi_get_spinlock_uart_buffer_read();

	// cosmosApi_release_spinlock_uart_buffer_read();
}
else
{
    counter++;
}
__asm volatile ("VMUL.F32 s0, s0, s1"); //testing FPU context switch
/********************************************************************************
** stop_name =Task_0_Core_0_Handler
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};

/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/