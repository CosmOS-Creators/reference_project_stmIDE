/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file logger.cpp
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
#include "logger.h"
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Start      **
** start_name =logger_includeFiles
********************************************************************************/
#include <buffer.h>
#include <os.h>
#include <thread.h>
#include <errorHandler.h>
#include <stm32h7xx_hal.h>
/********************************************************************************
** stop_name =logger_includeFiles
** DO NOT MODIFY THIS COMMENT ! Include Files        USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Start      **
** start_name =logger_userFreeDeclarations
********************************************************************************/
extern UART_HandleTypeDef huart3;
extern "C" CosmOS_BufferStateType
user_log( void * ptr, BitWidthType size );
extern "C" void
HAL_UART_TxCpltCallback( UART_HandleTypeDef * huart );
/********************************************************************************
** stop_name =logger_userFreeDeclarations
** DO NOT MODIFY THIS COMMENT ! Declarations         USER SECTION | Stop       **
********************************************************************************/
/********************************************************************************
**                         Function Prototypes | Start                         **
********************************************************************************/
/* Task in the program logger */

/* Threads in the program logger */
extern "C" void
Logger_thread( void );
/********************************************************************************
**                         Function Prototypes | Stop                          **
********************************************************************************/
/********************************************************************************
**                           START OF THE SOURCE FILE                          **
********************************************************************************/
/* @cond S */
__SEC_START( __LOGGER_NOINIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __LOGGER_NOINIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =logger_noInit
********************************************************************************/

/********************************************************************************
** stop_name =logger_noInit
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __LOGGER_NOINIT_SECTION_STOP)
/* @endcond*/

/* @cond S */
__SEC_START( __LOGGER_INIT_SECTION_START)
/* @endcond*/
// If your compiler does not support pragmas use __LOGGER_INIT_SECTION
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =logger_init
********************************************************************************/
CosmOS_BooleanType __LOGGER_INIT_SECTION dma_tx_complete = True;
/********************************************************************************
** stop_name =logger_init
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __LOGGER_INIT_SECTION_STOP)
/* @endcond*/

/********************************************************************************
** Thread ID macro = THREAD_0_PROGRAM_2_CORE_1_ID
** Program ID macro = PROGRAM_2_CORE_1_ID
********************************************************************************/
/* @cond S */
__SEC_START( __APPLICATION_FUNC_SECTION_START_CM4 )
/* @endcond*/
__APPLICATION_FUNC_SECTION_CM4 void
Logger_thread( void )
{
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =Logger_thread
********************************************************************************/
    BitWidthType bufferTail, bufferFullCellsNum, bufferSize, sizeToSend;

    CosmOS_SleepStateType sleepState;

    unsigned char * bufferArr;

    CosmOS_BufferConfigurationType * loggerBufferCfg;
    CosmOS_OsConfigurationType * osCfg;

    for( ;; )
    {
        sleepState = thread_sleepMs( 5 );

        if( errorHandler_isError( sleepState ) )
        {
            //error was returned, check its value
        }

        if ( dma_tx_complete )
        {
            cosmosApi_interrupt_disableInterrupt( USART3_IRQn );
            cosmosApi_interrupt_disableInterrupt( DMA1_Stream0_IRQn );

            osCfg = os_getOsCfg();
            loggerBufferCfg = os_getOsBufferCfg( osCfg, logger_buffer_id );

            bufferArr = buffer_getBuffer( loggerBufferCfg );
            bufferSize = buffer_getBufferSize( loggerBufferCfg );
            bufferTail = buffer_getBufferTail( loggerBufferCfg );
            bufferFullCellsNum = buffer_getFullCellsNum( loggerBufferCfg );

            if ( bufferFullCellsNum )
            {
                if ( (AddressType)bufferArr + bufferSize <
                    ( (AddressType)bufferArr + bufferTail + bufferFullCellsNum ) )
                {
                    sizeToSend = bufferSize - bufferTail;
                }
                else
                {
                    sizeToSend = bufferFullCellsNum;
                }

                HAL_UART_Transmit_DMA(
                    &huart3,
                    (unsigned char *)( (AddressType)bufferArr + (AddressType)bufferTail ),
                    sizeToSend );
                dma_tx_complete = False;
            }

            cosmosApi_interrupt_enableInterrupt( USART3_IRQn );
            cosmosApi_interrupt_enableInterrupt( DMA1_Stream0_IRQn );
        }
    }
/********************************************************************************
** stop_name =Logger_thread
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
** start_name =logger_userCodeFree
********************************************************************************/
__APPLICATION_FUNC_SECTION_CM4 CosmOS_BufferStateType
user_log( void * ptr, BitWidthType size )
{
    CosmOS_BufferStateType bufferState;
    bufferState = buffer_writeArray( logger_buffer_id, ptr, size );
    return bufferState;
};

__APPLICATION_FUNC_SECTION_CM4 void
HAL_UART_TxCpltCallback( UART_HandleTypeDef * huart )
{
    __disable_irq();  //api should not be used as its disable also system timer
    CosmOS_BufferConfigurationType * loggerBufferCfg;
    CosmOS_OsConfigurationType * osCfg;

    osCfg = os_getOsCfg();
    loggerBufferCfg = os_getOsBufferCfg( osCfg, logger_buffer_id );

    loggerBufferCfg->var->fullCells =
        ( loggerBufferCfg->var->fullCells - huart->TxXferSize );
    //not necessary to obtain spinlock as this is only one directional buffer
    loggerBufferCfg->var->tail =
        ( ( loggerBufferCfg->var->tail + huart->TxXferSize ) %
          loggerBufferCfg->size );
    dma_tx_complete = True;
    __enable_irq();  //api should not be used as its disable also system timer
};
/********************************************************************************
** stop_name =logger_userCodeFree
** DO NOT MODIFY THIS COMMENT ! Code                 USER SECTION | Stop       **
********************************************************************************/
/* @cond S */
__SEC_STOP( __APPLICATION_FUNC_SECTION_STOP_CM4 )
/* @endcond*/
/********************************************************************************
**                           END OF THE SOURCE FILE                            **
********************************************************************************/
