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
    -mfpu=fpv4-sp-d16
    )
set(${TARGET_0}_LINK_OPTIONS
    -mcpu=cortex-m4
    -mfpu=fpv4-sp-d16
    -Wl,-Map=${TARGET_0}.map
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
    -mfpu=fpv5-d16
    )
set(${TARGET_1}_LINK_OPTIONS
    -mcpu=cortex-m7
    -mfpu=fpv5-d16
    -Wl,-Map=${TARGET_1}.map
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

set(ASM_COMPILE_OPTIONS
    -x assembler-with-cpp
    -ffixed-r9
    -MMD
    -MP
    --specs=nano.specs
    -mfloat-abi=hard
    -mthumb
    -Wall
    -Werror
    )

set(C_COMPILE_OPTIONS
    -std=gnu11
    -ffunction-sections
    -fdata-sections
    -ffixed-r9
    -fstack-usage
    -MMD
    -MP
    --specs=nano.specs
    -mfloat-abi=hard
    -mthumb
    -Wall
    -Werror
    )

set(CXX_COMPILE_OPTIONS
    -std=gnu++14
    -ffunction-sections
    -fdata-sections
    -fno-exceptions
    -fno-rtti
    -fno-use-cxa-atexit
    -Wall
    -ffixed-r9
    -fstack-usage
    -MMD
    -MP
    --specs=nano.specs
    -mfloat-abi=hard
    -mthumb
    -Wall
    -Werror
    )

set(COMMON_LINK_OPTIONS
    -Wl,--gc-sections
    -static
    -ffixed-r9
    --specs=nano.specs
    -mfloat-abi=hard
    -mthumb
    -Wl,--start-group
    -lc
    -lm
    -lstdc++
    -lsupc++
    -Wl,--end-group
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
    set(EXECUTABLE ${BUILD_TARGET}.elf)

    add_executable(${EXECUTABLE}
                ${ASM_SOURCES}
                ${C_SOURCES}
                ${CXX_SOURCES})

    target_include_directories(${EXECUTABLE} PRIVATE
            ${TARGET_INCLUDE_DIRECTORIES}
            ${COMMON_INCLUDE_DIRECTORIES}
            )

    target_compile_options(${EXECUTABLE} PRIVATE
            $<$<COMPILE_LANGUAGE:C>:-O0 -g3 ${TARGET_COMPILE_OPTIONS}
                                    ${TARGET_COMPILE_DEFINITIONS}
                                    ${COMMON_COMPILE_DEFINITIONS}
                                    ${TARGET_COMPILE_OPTIONS}
                                    ${C_COMPILE_OPTIONS}>
            $<$<COMPILE_LANGUAGE:CXX>:-O0 -g3 ${TARGET_COMPILE_OPTIONS}
                                    ${TARGET_COMPILE_DEFINITIONS}
                                    ${COMMON_COMPILE_DEFINITIONS}
                                    ${TARGET_COMPILE_OPTIONS}
                                    ${CXX_COMPILE_OPTIONS}>
            $<$<COMPILE_LANGUAGE:ASM>:-g3 ${TARGET_COMPILE_OPTIONS}
                                    ${ASM_COMPILE_OPTIONS}>

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
