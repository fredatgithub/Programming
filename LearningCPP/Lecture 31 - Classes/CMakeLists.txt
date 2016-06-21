cmake_minimum_required(VERSION 3.5)
project(Lecture_31___Classes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/cat.h
    src/cat.cpp
    src/main.cpp)

add_executable(Lecture_31___Classes ${SOURCE_FILES})