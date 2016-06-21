cmake_minimum_required(VERSION 3.5)
project(Lecture_38___Constructor_Initialization_Lists)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Main.cpp
    Teacher.cpp
    Teacher.h)

add_executable(Lecture_38___Constructor_Initialization_Lists ${SOURCE_FILES})