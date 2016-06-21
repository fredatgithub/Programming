cmake_minimum_required(VERSION 3.5)
project(Lecture_06___Variables)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Variables.cpp)

add_executable(Lecture_06___Variables ${SOURCE_FILES})