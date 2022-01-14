/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file demo_program_CM4.cpp
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
#include "demo_program_CM4.h"
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Start      **
** start_name =demo_program_CM4_includeFiles
********************************************************************************/
#include <stm32h7xx_hal.h>
#include <thread.h>
#include <errorHandler.h>
/********************************************************************************
** stop_name =demo_program_CM4_includeFiles
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Start      **
** start_name =demo_program_CM4_userFreeDeclarations
********************************************************************************/

/********************************************************************************
** stop_name =demo_program_CM4_userFreeDeclarations
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/* Task in the program demo_program_CM4 */
extern "C" void
demo_task_togglePin_CM4( void );

/* Threads in the program demo_program_CM4 */
extern "C" void
demo_thread_dynamicAllocation_toggleLed_CM4( void );
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/* @cond S */
__SEC_START( __DEMO_PROGRAM_CM4_NOINIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __DEMO_PROGRAM_CM4_NOINIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =demo_program_CM4_noInit
********************************************************************************/

/********************************************************************************
** stop_name =demo_program_CM4_noInit
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __DEMO_PROGRAM_CM4_NOINIT_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START( __DEMO_PROGRAM_CM4_INIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __DEMO_PROGRAM_CM4_INIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =demo_program_CM4_init
********************************************************************************/

/********************************************************************************
** stop_name =demo_program_CM4_init
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __DEMO_PROGRAM_CM4_INIT_SECTION_STOP)
/* @endcond*/

/********************************************************************************
** Task ID macro = TASK_0_PROGRAM_0_CORE_1_ID
** Program ID macro = PROGRAM_0_CORE_1_ID
** WCET of the task in microseconds = 500.0
** Period of the task in milliseconds = 10.0
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM4 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
demo_task_togglePin_CM4( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =demo_task_togglePin_CM4
********************************************************************************/
    HAL_GPIO_TogglePin( GPIOA, GPIO_PIN_4 );
/********************************************************************************
** stop_name =demo_task_togglePin_CM4
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM4 )
/* @endcond*/

/********************************************************************************
** Thread ID macro = THREAD_1_PROGRAM_0_CORE_1_ID
** Program ID macro = PROGRAM_0_CORE_1_ID
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM4 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
demo_thread_dynamicAllocation_toggleLed_CM4( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =demo_thread_dynamicAllocation_toggleLed_CM4
********************************************************************************/
    CosmOS_SleepStateType sleepState;

    for( ;; )
    {

        GPIO * gpio_b = new GPIO( GPIOB );
        if( gpio_b )
        {
            gpio_b->togglePin( GPIO_PIN_14 );
            delete gpio_b;
        }

        sleepState = thread_sleepMs( 500 );
        if( errorHandler_isError( sleepState ) )
        {
            //error was returned, check its value
        }

    }
/********************************************************************************
** stop_name =demo_thread_dynamicAllocation_toggleLed_CM4
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
** start_name =demo_program_CM4_userCodeFree
********************************************************************************/
__APPLICATION_FUNC_SECTION_START_CM4 void
GPIO::togglePin( BitWidthType pinNumber )
{
    HAL_GPIO_TogglePin( (GPIO_TypeDef*)address, pinNumber );
}
/********************************************************************************
** stop_name =demo_program_CM4_userCodeFree
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM4 )
/* @endcond*/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/
