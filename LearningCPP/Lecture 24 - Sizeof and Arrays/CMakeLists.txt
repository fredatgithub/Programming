cmake_minimum_required(VERSION 3.5)
project(Lecture_24___Sizeof_and_Arrays)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Source.cpp)

add_executable(Lecture_24___Sizeof_and_Arrays ${SOURCE_FILES})