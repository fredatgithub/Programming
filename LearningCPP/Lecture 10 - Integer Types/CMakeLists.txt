cmake_minimum_required(VERSION 3.5)
project(Lecture_10___Integer_Types)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Types.cpp)

add_executable(Lecture_10___Integer_Types ${SOURCE_FILES})