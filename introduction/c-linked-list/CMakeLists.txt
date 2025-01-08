cmake_minimum_required(VERSION 3.15)

project(executable C)
set(TARGET "out")

set(CMAKE_C_STANDARD 23)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(
        SOURCES
        "src/main.c"
)
set(
    HEADERS
    "src/LinkedList.h"
)

include_directories(  ${CMAKE_SOURCE_DIR}/ext/log_c/src)
add_executable(${TARGET} ${SOURCES} ${HEADERS})
