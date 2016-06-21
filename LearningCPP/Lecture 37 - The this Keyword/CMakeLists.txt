cmake_minimum_required(VERSION 3.5)
project(Lecture_37___The_this_Keyword)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Main.cpp
    Student.cpp
    Student.h)

add_executable(Lecture_37___The_this_Keyword ${SOURCE_FILES})