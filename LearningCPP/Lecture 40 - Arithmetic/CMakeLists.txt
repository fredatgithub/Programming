cmake_minimum_required(VERSION 3.5)
project(Lecture_40___Arithmetic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# HEADERS
set(SOURCE_FILES
        include/SecondConverter.h
        )

# SOURCE
set(SOURCE_FILES
        src/main.cpp
        src/SecondConverter.cpp
        )


add_executable(Lecture_40___Arithmetic ${SOURCE_FILES})