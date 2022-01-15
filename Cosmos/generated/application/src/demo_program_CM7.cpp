/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file demo_program_CM7.cpp
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
#include "demo_program_CM7.h"
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Start      **
** start_name =demo_program_CM7_includeFiles
********************************************************************************/
#include <stm32h7xx_hal.h>
#include <thread.h>
#include <errorHandler.h>
#include "demo_program_CM4.h"
/********************************************************************************
** stop_name =demo_program_CM7_includeFiles
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Start      **
** start_name =demo_program_CM7_userFreeDeclarations
********************************************************************************/

/********************************************************************************
** stop_name =demo_program_CM7_userFreeDeclarations
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/* Task in the program demo_program_CM7 */
extern "C" void
demo_task_togglePin_CM7( void );

/* Threads in the program demo_program_CM7 */
extern "C" void
demo_thread_dynamicAllocation_toggleLed_CM7( void );
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/* @cond S */
__SEC_START( __DEMO_PROGRAM_CM7_NOINIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __DEMO_PROGRAM_CM7_NOINIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =demo_program_CM7_noInit
********************************************************************************/

/********************************************************************************
** stop_name =demo_program_CM7_noInit
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __DEMO_PROGRAM_CM7_NOINIT_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START( __DEMO_PROGRAM_CM7_INIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __DEMO_PROGRAM_CM7_INIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =demo_program_CM7_init
********************************************************************************/

/********************************************************************************
** stop_name =demo_program_CM7_init
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __DEMO_PROGRAM_CM7_INIT_SECTION_STOP)
/* @endcond*/

/********************************************************************************
** Task ID macro = TASK_0_PROGRAM_0_CORE_0_ID
** Program ID macro = PROGRAM_0_CORE_0_ID
** WCET of the task in microseconds = 500.0
** Period of the task in milliseconds = 5.0
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM7 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void
demo_task_togglePin_CM7( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =demo_task_togglePin_CM7
********************************************************************************/
    HAL_GPIO_TogglePin( GPIOF, GPIO_PIN_11 );
/********************************************************************************
** stop_name =demo_task_togglePin_CM7
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
};
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM7 )
/* @endcond*/

/********************************************************************************
** Thread ID macro = THREAD_1_PROGRAM_0_CORE_0_ID
** Program ID macro = PROGRAM_0_CORE_0_ID
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM7 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM7 void
demo_thread_dynamicAllocation_toggleLed_CM7( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =demo_thread_dynamicAllocation_toggleLed_CM7
********************************************************************************/
    CosmOS_SleepStateType sleepState;

    for( ;; )
    {

        GPIO * gpio_e = new GPIO( GPIOE );
        if( gpio_e )
        {
            gpio_e->togglePin( GPIO_PIN_1 );
            delete gpio_e;
        }

        sleepState = thread_sleepMs( 1000 );
        if( errorHandler_isError( sleepState ) )
        {
            //error was returned, check its value
        }

    }
/********************************************************************************
** stop_name =demo_thread_dynamicAllocation_toggleLed_CM7
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
** start_name =demo_program_CM7_userCodeFree
********************************************************************************/

/********************************************************************************
** stop_name =demo_program_CM7_userCodeFree
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM7 )
/* @endcond*/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/