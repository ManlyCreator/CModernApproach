cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(Justification)

add_subdirectory(Word/)
add_subdirectory(Line/)

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} Word Line)
