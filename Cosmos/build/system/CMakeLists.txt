#################################################################################
##                                 BUILD TARGETS                               ##
#################################################################################
set(BUILD_TARGETS CM4 CM7)
#################################################################################
##                            CM4 SPECIFIC DIRECTORIES                         ##
#################################################################################
set(CM4_DIRECTORY "${WORKSPACE}/CM4")
#################################################################################
##                            CM7 SPECIFIC DIRECTORIES                         ##
#################################################################################
set(CM7_DIRECTORY "${WORKSPACE}/CM7")

#################################################################################
##                               SOURCE DIRECTORIES                            ##
#################################################################################
set(ASM_SOURCE_DIRECTORIES ${CM4_DIRECTORY})
set(C_SOURCE_DIRECTORIES ${CM4_DIRECTORY} 
                        ${COMMON}
                        ${DRIVERS} 
                        ${MIDDLEWARES} 
                        ${CORE} 
                        ${APPLICATION_GENERATED} 
                        ${CORE_GENERATED} 
                        ${INTEGRATION})
set(CXX_SOURCE_DIRECTORIES ${CM4_DIRECTORY} 
                        ${APPLICATION_GENERATED})

#################################################################################
##                        COLLECTING INCLUDE DIRECTORIES                       ##
#################################################################################
FILE(GLOB_RECURSE CORE_INCLUDE_DIRECTORIES LIST_DIRECTORIES true ${CORE})
list(FILTER CORE_INCLUDE_DIRECTORIES INCLUDE REGEX "^.*/inc$")


message(STATUS "${CORE_INCLUDE_DIRECTORIES}")

FILE(GLOB_RECURSE CORE_GENERATED_INCLUDE_DIRECTORIES LIST_DIRECTORIES true 
    ${CORE_GENERATED})
list(FILTER CORE_GENERATED_INCLUDE_DIRECTORIES INCLUDE REGEX "^.*/inc$")

message(STATUS "${CORE_GENERATED_INCLUDE_DIRECTORIES}")

#################################################################################
##                             INCLUDE DIRECTORIES                             ##
#################################################################################
include_directories("${INTEGRATION}/CIL/inc")
include_directories(${CORE_INCLUDE_DIRECTORIES})
include_directories(${CORE_GENERATED_INCLUDE_DIRECTORIES})
include_directories("${APPLICATION_GENERATED}/inc")
include_directories("${CM4_DIRECTORY}/Core/Inc")
include_directories("${CM4_DIRECTORY}/LWIP/App")
include_directories("${CM4_DIRECTORY}/LWIP/Target")
include_directories("${DRIVERS}/CMSIS/Include")
include_directories("${DRIVERS}/CMSIS/Device/ST/STM32H7xx/Include")
include_directories("${DRIVERS}/STM32H7xx_HAL_Driver/Inc")
include_directories("${DRIVERS}/STM32H7xx_HAL_Driver/Inc/Legacy")
include_directories("${DRIVERS}/BSP/Components/lan8742")
include_directories("${MIDDLEWARES}/Third_Party/LwIP/src/include")
include_directories("${MIDDLEWARES}/Third_Party/LwIP/system")

#################################################################################
##                              COLLECTING SOURCES                             ##
#################################################################################
set(ASM_SOURCES)
foreach(ASM_SOURCE_DIRECTORY IN LISTS ASM_SOURCE_DIRECTORIES)
    FILE(GLOB_RECURSE ASM_SOURCES_LOCAL "${ASM_SOURCE_DIRECTORY}/*.s")
    list(APPEND ASM_SOURCES "${ASM_SOURCES_LOCAL}")
endforeach()

set(C_SOURCES)
foreach(C_SOURCE_DIRECTORY IN LISTS C_SOURCE_DIRECTORIES)
    FILE(GLOB_RECURSE C_SOURCES_LOCAL "${C_SOURCE_DIRECTORY}/*.c")
    list(APPEND C_SOURCES "${C_SOURCES_LOCAL}")
endforeach()

message(STATUS "${C_SOURCES}")

foreach(CXX_SOURCE_DIRECTORY IN LISTS CXX_SOURCE_DIRECTORIES)
    FILE(GLOB_RECURSE CXX_SOURCES_LOCAL "${CXX_SOURCE_DIRECTORY}/*.cpp")
    list(APPEND CXX_SOURCES "${CXX_SOURCES_LOCAL}")
endforeach()

foreach(BUILD_TARGET IN LISTS BUILD_TARGETS)

set(EXECUTABLE ${BUILD_TARGET}_EXECUTABLE.out)

add_executable(${EXECUTABLE}
            ${ASM_SOURCES}
            ${C_SOURCES}
            ${CXX_SOURCES})

target_compile_definitions(${EXECUTABLE} PRIVATE
        -DUSE_HAL_DRIVER
        -DSTM32H755xx
        -DADDR_32BIT
        -DARCH_32BIT
        -DCORE_CM4
        -DUSE_MULTI_CORE_SHARED_CODE
        )

target_compile_options(${EXECUTABLE} PRIVATE
        -mcpu=cortex-m4
        -mthumb
        -mfpu=fpv4-sp-d16
        -mfloat-abi=hard
        -ffixed-r9
        -fdata-sections
        -ffunction-sections
        -Wall

        $<$<CONFIG:Debug>:-Og>
        )

target_link_options(${EXECUTABLE} PRIVATE
        -T${CMAKE_SOURCE_DIR}/../../CM4/STM32H755ZITX_FLASH.ld
        -mcpu=cortex-m4
        -mthumb
        -mfpu=fpv5-d16
        -mfloat-abi=hard
        -specs=nano.specs
        -lc
        -lsupc++
        -lstdc++
        -lm
        -lnosys
        -static
        -Wl,-Map=${BUILD_TARGET}.map,--cref
        -Wl,--gc-sections
        -Wl,--print-memory-usage
        )

add_custom_command(TARGET ${EXECUTABLE}
        POST_BUILD
        COMMAND arm-none-eabi-size ${EXECUTABLE})

add_custom_command(TARGET ${EXECUTABLE}
        POST_BUILD
        COMMAND arm-none-eabi-objcopy -O ihex ${EXECUTABLE} ${BUILD_TARGET}.hex
        COMMAND arm-none-eabi-objcopy -O binary ${EXECUTABLE} ${BUILD_TARGET}.bin)
endforeach()
