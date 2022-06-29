cmake_minimum_required(VERSION 3.3)
project(sense)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/build/debug")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})

file(GLOB_RECURSE SOURCES src/*.c)

add_executable(sense ${SOURCES})
target_include_directories(sense PRIVATE src)
