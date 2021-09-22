cmake_minimum_required(VERSION 3.19)

project(FTL)

set(CMAKE_CXX_STANDARD 20)

# Debug suffix
set(DEBUG_SUFFIX)
if (CMAKE_BUILD_TYPE MATCHES "Debug")
    set(DEBUG_SUFFIX "d")
endif ()

# Target directory
if (DEBUG_SUFFIX MATCHES "d")
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/debug)
    set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/debug)
else()
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/release)
    set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/release)
endif ()

# Subdirectories
add_subdirectory(cpp)
