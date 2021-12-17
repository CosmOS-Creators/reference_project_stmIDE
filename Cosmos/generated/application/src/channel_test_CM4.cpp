/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file channel_test_CM4.cpp
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
#include "channel_test_CM4.h"
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Start      **
** start_name =channel_test_CM4_includeFiles
********************************************************************************/
#include <channel.h>
#include <thread.h>
#include <errorHandler.h>
/********************************************************************************
** stop_name =channel_test_CM4_includeFiles
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Start      **
** start_name =channel_test_CM4_userFreeDeclarations
********************************************************************************/
#define XCORE_CLIENT_REPLY_POOL_SIZE 32
/********************************************************************************
** stop_name =channel_test_CM4_userFreeDeclarations
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/* Task in the program channel_test_CM4 */

/* Threads in the program channel_test_CM4 */
extern "C" void
channel_xCore_client_CM4( void );
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/* @cond S */
__SEC_START( __CHANNEL_TEST_CM4_NOINIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __CHANNEL_TEST_CM4_NOINIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =channel_test_CM4_noInit
********************************************************************************/

/********************************************************************************
** stop_name =channel_test_CM4_noInit
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __CHANNEL_TEST_CM4_NOINIT_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START( __CHANNEL_TEST_CM4_INIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __CHANNEL_TEST_CM4_INIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =channel_test_CM4_init
********************************************************************************/

/********************************************************************************
** stop_name =channel_test_CM4_init
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __CHANNEL_TEST_CM4_INIT_SECTION_STOP)
/* @endcond*/


/********************************************************************************
** Thread ID macro = THREAD_0_PROGRAM_3_CORE_1_ID
** Program ID macro = PROGRAM_3_CORE_1_ID
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM4 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
channel_xCore_client_CM4( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =channel_xCore_client_CM4
********************************************************************************/
    CosmOS_ChannelStateType channelState;
    CosmOS_SleepStateType sleepState;

    unsigned char replyPool[XCORE_CLIENT_REPLY_POOL_SIZE] = {0};
    unsigned char sendPool[] = "request";

    for(;;)
    {
        channelState = channel_send( xCore_channel_id,
                                    (AddressType *)sendPool,
                                    sizeof(sendPool),
                                    (AddressType *)replyPool,
                                    sizeof(replyPool));

        if( errorHandler_isError( channelState ) )
        {
            //error was returned, check its value
        }

        sleepState = thread_sleepMs( 500 );

        if( errorHandler_isError( sleepState ) )
        {
            //error was returned, check its value
        }

    }
/********************************************************************************
** stop_name =channel_xCore_client_CM4
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
** start_name =channel_test_CM4_userCodeFree
********************************************************************************/

/********************************************************************************
** stop_name =channel_test_CM4_userCodeFree
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM4 )
/* @endcond*/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/
