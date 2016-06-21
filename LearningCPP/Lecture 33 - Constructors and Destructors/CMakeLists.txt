cmake_minimum_required(VERSION 3.5)
project(Lecture_33___Constructors_and_Destructors)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/horse.h
    src/horse.cpp
    src/main.cpp)

add_executable(Lecture_33___Constructors_and_Destructors ${SOURCE_FILES})