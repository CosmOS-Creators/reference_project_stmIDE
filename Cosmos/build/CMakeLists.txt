#################################################################################
##                                CMAKE SETTINGS                               ##
#################################################################################
cmake_minimum_required(VERSION 3.14)

project(CosmOS)

enable_language(C ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

#################################################################################
##                              PROJECT STRUCTURE                              ##
#################################################################################
set(WORKSPACE "../../..")

set(COSMOS "${WORKSPACE}/Cosmos")
set(APPLICATION_GENERATED "${COSMOS}/generated/application")
set(CORE_GENERATED "${COSMOS}/generated/core")
set(INTEGRATION "${COSMOS}/stm32h755_integration")

set(COMMON "${WORKSPACE}/Common")
set(DRIVERS "${WORKSPACE}/Drivers")
set(MIDDLEWARES "${WORKSPACE}/Middlewares")
set(CORE "${COSMOS}/core")

#################################################################################
##                                    BUILD                                    ##
#################################################################################
if( BUILD_TESTS )
    add_subdirectory(tests)
elseif( BUILD_SYSTEM )
    add_subdirectory(system)
else()
    message(FATAL_ERROR "Please define the type of the build")
endif()
