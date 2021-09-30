/********************************************************************************
**                                                                             **
**                       GENERATED FILE BY CosmOS CustomBox                    **
**                                                                             **
*********************************************************************************
**                       DOXYGEN DOCUMENTATION INFORMATION                     **
*****************************************************************************//**
** @file timing_measurement_CM7.h
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
/********************************************************************************
**                           START OF THE HEADER FILE                          **
********************************************************************************/
#ifndef __TIMING_MEASUREMENT_CM7_H__
#define __TIMING_MEASUREMENT_CM7_H__
/********************************************************************************
**                         START OF C++ SUPPORT SECTION                        **
********************************************************************************/
#ifdef __cplusplus
 extern "C" {
#endif
/********************************************************************************
**                            Include Files | Start                            **
********************************************************************************/
#include <sysDefs.h>
#include <cosmosApi.h>
#include <memoryMapping.h>
#include <cosmosTypesStd.h>
/********************************************************************************
**                            Include Files | Stop                             **
********************************************************************************/
/********************************************************************************
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Start      **
** start_name =timing_measurement_CM7
********************************************************************************/
class GPIO
{
	void * address;
	public:
	GPIO(void * addr) { address = addr; }
	void togglePin(BitWidthType pinNumber);
};
/********************************************************************************
** stop_name =timing_measurement_CM7
** DO NOT MODIFY THIS COMMENT !                      USER SECTION | Stop       **
********************************************************************************/
#ifdef __cplusplus
}
#endif
/********************************************************************************
**                         END OF C++ SUPPORT SECTION                          **
********************************************************************************/
#endif
/********************************************************************************
**                           END OF THE HEADER FILE                            **
********************************************************************************/