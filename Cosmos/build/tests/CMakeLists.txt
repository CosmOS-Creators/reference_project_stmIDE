cmake_minimum_required(VERSION 3.14)

set(BUILD_TESTS "1")

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(UNIT_TEST_SOURCE_WILDCARD "ut.cpp")
set(UNIT_TEST_DIRECTORY_WILDCARD "test/ut")

FILE(GLOB_RECURSE CORE_INCLUDE_DIRECTORIES LIST_DIRECTORIES true ${CORE})
list(FILTER CORE_INCLUDE_DIRECTORIES INCLUDE REGEX "^.*/inc$")

FILE(GLOB_RECURSE MOCK_INCLUDE_DIRECTORIES LIST_DIRECTORIES true ${CORE})
list(FILTER MOCK_INCLUDE_DIRECTORIES INCLUDE REGEX "^.*/mock.*")

FILE(GLOB_RECURSE MOCK_SOURCES  "${CORE}/*.cpp")
list(FILTER MOCK_SOURCES INCLUDE REGEX ".*mock.*" )

include_directories(${MOCK_INCLUDE_DIRECTORIES})
include_directories(${CORE_INCLUDE_DIRECTORIES})
include_directories("${DRIVERS}/CMSIS/Include")

add_compile_options("--coverage")
add_link_options("--coverage")

add_definitions(
	-DARCH_32BIT
	-DADDR_32BIT
)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../.. ${CMAKE_CURRENT_BINARY_DIR}/Cosmos)
