cmake_minimum_required(VERSION 2.8)
project(ctrtxlib)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
set(CMAKE_C_FLAGS_DEBUG "-O0 -ggdb")
set(CMAKE_C_FLAGS_RELEASE "-O3")

include_directories(include)

set(SOURCE_FILES src/print.c)

add_library(ctrtx STATIC ${SOURCE_FILES})

set_target_properties(ctrtx PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")
