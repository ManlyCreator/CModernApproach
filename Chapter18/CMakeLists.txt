cmake_minimum_required(VERSION 3.5)

project(Chapter18)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(Test src/test.c)

include_directories(include/)

add_executable(SandBox sandBox.c)

target_link_libraries(SandBox Test)
