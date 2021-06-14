cmake_minimum_required(VERSION 3.14)

project(CosmOS VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

add_definitions(
  -DARCH_32BIT
  -DADDR_32BIT
)

# path setup
set(mock "test/mock")
set(test "test")

set(workspace "${CMAKE_CURRENT_SOURCE_DIR}")
set(Cosmos "${workspace}/Cosmos")
set(drivers "${workspace}/Drivers")
set(core "${Cosmos}/core")
set(application "${Cosmos}/application")
set(generated "${Cosmos}/generated")
set(integration "${Cosmos}/stm32h755_integration")

message(STATUS "Workspace: ${workspace}")

#core path
FILE(GLOB_RECURSE core_os_Sources "${core}/os/src/*.c")
# core includes
FILE(GLOB_RECURSE coreIncludeDirs LIST_DIRECTORIES true ${core})
list(FILTER coreIncludeDirs INCLUDE REGEX "^.*/inc$") # remove anything that does not have the inc folder at the last place of it's path

add_library(UUT_os SHARED OBJECT "${core}/os/src/osInit.cpp" "${core}/memory/${mock}/memoryProtection_mock.cpp") # ${core_os_Sources}

# add_library(SystemMock_memory SHARED OBJECT )

target_link_libraries(
  UUT_os
  gtest_main
  gmock_main
)

# target_link_libraries(
#   UUT_os
#   SystemMock_memory
# )

# target_include_directories( SystemMock_memory PUBLIC
#   ${coreIncludeDirs}
#   "${core}/memory/${mock}"
# )

set(customInc ${coreIncludeDirs})
list(FILTER customInc EXCLUDE REGEX "memoryProtection.h")

target_include_directories( UUT_os PUBLIC
  ${customInc}
  "${drivers}/CMSIS/Include"
  "${core}/memory/${mock}"
)


enable_testing()

add_subdirectory("${core}/os/test")
