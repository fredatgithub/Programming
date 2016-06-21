cmake_minimum_required(VERSION 3.5)
project(Lecture_34___Getters_and_Setters)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/Player.h
    src/main.cpp
    src/Player.cpp)

add_executable(Lecture_34___Getters_and_Setters ${SOURCE_FILES})