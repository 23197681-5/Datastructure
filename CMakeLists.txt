cmake_minimum_required(VERSION 3.6)
project(caula)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c aula2/ex1.h)
add_executable(caula ${SOURCE_FILES})
target_link_libraries(caula m)