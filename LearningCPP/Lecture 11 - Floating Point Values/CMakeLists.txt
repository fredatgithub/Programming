cmake_minimum_required(VERSION 3.5)
project(Lecture_11___Floating_Point_Values)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Floats.cpp)

add_executable(Lecture_11___Floating_Point_Values ${SOURCE_FILES})