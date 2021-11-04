#################################################################################
##                                CMAKE SETTINGS                               ##
#################################################################################
cmake_minimum_required(VERSION 3.14)

#################################################################################
##                                    TARGETS                                  ##
#################################################################################
set(TARGET_0 CM4)
set(TARGET_1 CM7)

set(BUILD_TARGETS ${TARGET_0} ${TARGET_1})

#################################################################################
##                           TARGET_0 SPECIFIC CONFIG                          ##
#################################################################################
set(${TARGET_0}_DIRECTORY "${WORKSPACE}/CM4")

set(${TARGET_0}_ASM_SOURCE_DIRECTORIES ${CM4_DIRECTORY})
set(${TARGET_0}_C_SOURCE_DIRECTORIES ${DRIVERS} 
                        ${CM4_DIRECTORY}
                        ${COMMON}
                        ${MIDDLEWARES} 
                        ${CORE} 
                        ${APPLICATION_GENERATED} 
                        ${CORE_GENERATED} 
                        ${INTEGRATION})
set(${TARGET_0}_CXX_SOURCE_DIRECTORIES ${CM4_DIRECTORY} 
                        ${APPLICATION_GENERATED})

set(${TARGET_0}_INCLUDE_DIRECTORIES
    "${${TARGET_0}_DIRECTORY}/Core/Inc"
    "${${TARGET_0}_DIRECTORY}/LWIP/App"
    "${${TARGET_0}_DIRECTORY}/LWIP/Target"
    )

set(${TARGET_0}_LINKER_SCRIPT_PATH 
    ${CMAKE_SOURCE_DIR}/../../CM4/STM32H755ZITX_FLASH.ld
    )

set(${TARGET_0}_COMPILE_DEFINITIONS
    -DCORE_CM4
    )

set(${TARGET_0}_COMPILE_OPTIONS 
    -mcpu=cortex-m4
    )
set(${TARGET_0}_LINK_OPTIONS
    -mcpu=cortex-m4
    -Wl,-Map=${TARGET_0}.map,--cref
    )

#################################################################################
##                           TARGET_1 SPECIFIC CONFIG                          ##
#################################################################################
set(${TARGET_1}_DIRECTORY "${WORKSPACE}/CM7")

set(${TARGET_1}_ASM_SOURCE_DIRECTORIES ${CM7_DIRECTORY})
set(${TARGET_1}_C_SOURCE_DIRECTORIES ${DRIVERS} 
                        ${CM7_DIRECTORY}
                        ${COMMON}
                        ${MIDDLEWARES} 
                        ${CORE} 
                        ${APPLICATION_GENERATED} 
                        ${CORE_GENERATED} 
                        ${INTEGRATION})
set(${TARGET_1}_CXX_SOURCE_DIRECTORIES ${CM7_DIRECTORY} 
                        ${APPLICATION_GENERATED})

set(${TARGET_1}_INCLUDE_DIRECTORIES
    "${${TARGET_1}_DIRECTORY}/Core/Inc"
    "${${TARGET_1}_DIRECTORY}/LWIP/App"
    "${${TARGET_1}_DIRECTORY}/LWIP/Target"
    )

set(${TARGET_1}_LINKER_SCRIPT_PATH 
    ${CMAKE_SOURCE_DIR}/../../CM7/STM32H755ZITX_FLASH.ld)
    
set(${TARGET_1}_COMPILE_DEFINITIONS
    -DCORE_CM7
    )

set(${TARGET_1}_COMPILE_OPTIONS 
    -mcpu=cortex-m7
    )
set(${TARGET_1}_LINK_OPTIONS
    -mcpu=cortex-m7
    -Wl,-Map=${TARGET_1}.map,--cref
    )

#################################################################################
##                                COMMON CONFIG                                ##
#################################################################################
#################################################################################
##                        COLLECTING INCLUDE DIRECTORIES                       ##
#################################################################################
FILE(GLOB_RECURSE CORE_INCLUDE_DIRECTORIES LIST_DIRECTORIES true ${CORE})
list(FILTER CORE_INCLUDE_DIRECTORIES INCLUDE REGEX "^.*/inc$")

FILE(GLOB_RECURSE CORE_GENERATED_INCLUDE_DIRECTORIES LIST_DIRECTORIES true 
    ${CORE_GENERATED})
list(FILTER CORE_GENERATED_INCLUDE_DIRECTORIES INCLUDE REGEX "^.*/inc$")

set(COMMON_INCLUDE_DIRECTORIES
    "${DRIVERS}/CMSIS/Include"
    "${DRIVERS}/CMSIS/Device/ST/STM32H7xx/Include"
    "${DRIVERS}/STM32H7xx_HAL_Driver/Inc"
    "${DRIVERS}/STM32H7xx_HAL_Driver/Inc/Legacy"
    "${DRIVERS}/BSP/Components/lan8742"
    "${MIDDLEWARES}/Third_Party/LwIP/src/include"
    "${MIDDLEWARES}/Third_Party/LwIP/system"
    "${INTEGRATION}/CIL/inc"
    ${CORE_INCLUDE_DIRECTORIES}
    ${CORE_GENERATED_INCLUDE_DIRECTORIES}
    "${APPLICATION_GENERATED}/inc"
    )
    
set(COMMON_COMPILE_DEFINITIONS
    -DUSE_HAL_DRIVER
    -DSTM32H755xx
    -DADDR_32BIT
    -DARCH_32BIT
    -DUSE_MULTI_CORE_SHARED_CODE
    )

set(COMMON_COMPILE_OPTIONS 
    -mthumb
    -mfpu=fpv5-d16
    -mfloat-abi=hard
    -ffixed-r9
    -fdata-sections
    -ffunction-sections
    -Wall
    -Werror
    $<$<CONFIG:Debug>:-Og>
    )

set(COMMON_LINK_OPTIONS
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
    -Wl,--gc-sections
    -Wl,--print-memory-usage
    )

#################################################################################
##                               CREATING TARGETS                              ##
#################################################################################
foreach(BUILD_TARGET IN LISTS BUILD_TARGETS)

#################################################################################
##                            TARGET SPECIFIC CONFIG                           ##
#################################################################################
    set(TARGET_ASM_SOURCE_DIRECTORIES 
        "${${BUILD_TARGET}_ASM_SOURCE_DIRECTORIES}")
    set(TARGET_C_SOURCE_DIRECTORIES "${${BUILD_TARGET}_C_SOURCE_DIRECTORIES}")
    set(TARGET_CXX_SOURCE_DIRECTORIES 
        "${${BUILD_TARGET}_CXX_SOURCE_DIRECTORIES}")
    set(TARGET_INCLUDE_DIRECTORIES "${${BUILD_TARGET}_INCLUDE_DIRECTORIES}")
    set(TARGET_LINKER_SCRIPT_PATH "${${BUILD_TARGET}_LINKER_SCRIPT_PATH}")
    set(TARGET_COMPILE_DEFINITIONS "${${BUILD_TARGET}_COMPILE_DEFINITIONS}")
    set(TARGET_COMPILE_OPTIONS "${${BUILD_TARGET}_COMPILE_OPTIONS}")
    set(TARGET_LINK_OPTIONS "${${BUILD_TARGET}_LINK_OPTIONS}")

#################################################################################
##                   COLLECTING OF SOURCES FOR CURRENT TARGET                  ##
#################################################################################
    set(ASM_SOURCES)
    foreach(ASM_SOURCE_DIRECTORY IN LISTS TARGET_ASM_SOURCE_DIRECTORIES)
        FILE(GLOB_RECURSE ASM_SOURCES_LOCAL "${ASM_SOURCE_DIRECTORY}/*.s")
        list(APPEND ASM_SOURCES "${ASM_SOURCES_LOCAL}")
    endforeach()

    set(C_SOURCES)
    foreach(C_SOURCE_DIRECTORY IN LISTS TARGET_C_SOURCE_DIRECTORIES)
        FILE(GLOB_RECURSE C_SOURCES_LOCAL "${C_SOURCE_DIRECTORY}/*.c")
        list(APPEND C_SOURCES "${C_SOURCES_LOCAL}")
    endforeach()

    set(CXX_SOURCES)
    foreach(CXX_SOURCE_DIRECTORY IN LISTS TARGET_CXX_SOURCE_DIRECTORIES)
        FILE(GLOB_RECURSE CXX_SOURCES_LOCAL "${CXX_SOURCE_DIRECTORY}/*.cpp")
        list(APPEND CXX_SOURCES "${CXX_SOURCES_LOCAL}")
    endforeach()

#################################################################################
##                               SETTING COMPILER                              ##
#################################################################################
    set(EXECUTABLE ${BUILD_TARGET}.out)

    add_executable(${EXECUTABLE} 
                ${ASM_SOURCES}
                ${C_SOURCES}
                ${CXX_SOURCES})

    target_include_directories(${EXECUTABLE} PRIVATE
            ${TARGET_INCLUDE_DIRECTORIES}
            ${COMMON_INCLUDE_DIRECTORIES}
            )

    target_compile_definitions(${EXECUTABLE} PRIVATE
            ${TARGET_COMPILE_DEFINITIONS}
            ${COMMON_COMPILE_DEFINITIONS}
            )

    target_compile_options(${EXECUTABLE} PRIVATE
            ${TARGET_COMPILE_OPTIONS}
            ${COMMON_COMPILE_OPTIONS}
            )

    target_link_options(${EXECUTABLE} PRIVATE
            -T${TARGET_LINKER_SCRIPT_PATH}
            ${TARGET_LINK_OPTIONS}
            ${COMMON_LINK_OPTIONS}
            )

#################################################################################
##                               CUSTOM COMMANDS                               ##
#################################################################################
    add_custom_command(TARGET ${EXECUTABLE}
            POST_BUILD
            COMMAND arm-none-eabi-size ${EXECUTABLE})

    add_custom_command(TARGET ${EXECUTABLE}
            POST_BUILD
            COMMAND arm-none-eabi-objcopy -O ihex ${EXECUTABLE} 
            ${BUILD_TARGET}.hex
            COMMAND arm-none-eabi-objcopy -O binary ${EXECUTABLE} 
            ${BUILD_TARGET}.bin)
endforeach()
