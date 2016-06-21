cmake_minimum_required(VERSION 3.5)
project(Lecture_16___Comparing_Floats)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Source.cpp)

add_executable(Lecture_16___Comparing_Floats ${SOURCE_FILES})