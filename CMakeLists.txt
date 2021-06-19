cmake_minimum_required(VERSION 3.14)

project(CosmOS VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)

set(BUILD_TESTS "1")

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_definitions(
  -DARCH_32BIT
  -DADDR_32BIT
)

if(BUILD_TESTS)
	enable_testing()
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")

    set(CTEST_BUILD_FLAGS "-k -j8")
    set(CTEST_CMAKE_GENERATOR "Unix Makefiles")
	add_compile_options("--coverage")
	add_link_options("--coverage")

else()
    set(CMAKE_C_COMPILER arm-none-eabi-gcc)
    set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
    set(OBJCOPY arm-none-eabi-objcopy)
endif()

set(sourceDirectory "src")
set(unitTestSource "ut.cpp")
set(unitTestDirectory "test/ut")

set(workspace "${CMAKE_CURRENT_SOURCE_DIR}")
set(cosmos "${workspace}/Cosmos")
set(drivers "${workspace}/Drivers")
set(core "${cosmos}/core")
set(application "${cosmos}/application")
set(generated "${cosmos}/generated")
set(integration "${cosmos}/stm32h755_integration")

FILE(GLOB_RECURSE coreIncludeDirs LIST_DIRECTORIES true ${core})
list(FILTER coreIncludeDirs INCLUDE REGEX "^.*/inc$")

FILE(GLOB_RECURSE mockIncludeDirs LIST_DIRECTORIES true ${core})
list(FILTER mockIncludeDirs INCLUDE REGEX "^.*/mock.*")

FILE(GLOB_RECURSE mockSources  "${core}/*.cpp")
list(FILTER mockSources INCLUDE REGEX ".*mock.*" )

include_directories(${mockIncludeDirs})
include_directories(${coreIncludeDirs})
include_directories("${cpputest_SOURCE_DIR}/include")
include_directories("${drivers}/CMSIS/Include")

add_subdirectory(Cosmos)
