cmake_minimum_required(VERSION 3.5)
project(Lecture_35___String_Streams)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/Enemy.h
    include/Person.h
    src/Enemy.cpp
    src/main.cpp
    src/Person.cpp)

add_executable(Lecture_35___String_Streams ${SOURCE_FILES})