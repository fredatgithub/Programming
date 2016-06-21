cmake_minimum_required(VERSION 3.5)
project(Lecture_32___Data_Members)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/dog.h
    src/dog.cpp
    src/main.cpp)

include_directories(include)

add_executable(Lecture_32___Data_Members ${SOURCE_FILES})