cmake_minimum_required(VERSION 3.15.3)

project(CosmOS)

enable_language(C ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

#################################################################################
##                                  DIRECTORIES                                ##
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

add_subdirectory(system)