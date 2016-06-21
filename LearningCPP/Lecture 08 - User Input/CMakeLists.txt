cmake_minimum_required(VERSION 3.5)
project(Lecture_08___User_Input)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/UserInput.cpp)

add_executable(Lecture_08___User_Input ${SOURCE_FILES})