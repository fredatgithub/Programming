cmake_minimum_required(VERSION 3.5)
project(Lecture_07___Strings)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Strings.cpp)

add_executable(Lecture_07___Strings ${SOURCE_FILES})