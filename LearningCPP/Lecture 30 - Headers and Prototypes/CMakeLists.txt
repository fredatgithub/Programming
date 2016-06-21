cmake_minimum_required(VERSION 3.5)
project(Lecture_30___Headers_and_Prototypes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/pythagoreanTheorem.h
    src/main.cpp
    src/pythagoreanTheorem.cpp)

add_executable(Lecture_30___Headers_and_Prototypes ${SOURCE_FILES})