cmake_minimum_required(VERSION 3.5)
project(Lecture_36___Overloading_Constructors)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/Employee.h
    src/Employee.cpp
    src/main.cpp)

add_executable(Lecture_36___Overloading_Constructors ${SOURCE_FILES})