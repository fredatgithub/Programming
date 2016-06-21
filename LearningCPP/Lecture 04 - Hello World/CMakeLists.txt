cmake_minimum_required(VERSION 3.5)
project(Lecture_04___Hello_World)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/HelloWorld.cpp)

add_executable(Lecture_04___Hello_World ${SOURCE_FILES})