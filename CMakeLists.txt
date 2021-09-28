cmake_minimum_required(VERSION 3.19)

project(FTL)

set(CMAKE_CXX_STANDARD 20)

# Target directory
if (CMAKE_BUILD_TYPE MATCHES "Debug")
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/debug)
    set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/debug)
else()
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/release)
    set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/release)
endif ()

# Subdirectories
add_subdirectory(cpp)
