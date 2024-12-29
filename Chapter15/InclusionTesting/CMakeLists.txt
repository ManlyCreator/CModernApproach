cmake_minimum_required(VERSION 3.5)

project(InclusionTesting)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(Stack/)

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} Stack)
