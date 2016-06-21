cmake_minimum_required(VERSION 3.5)
project(Lecture_05___Outputting_Text)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/OutputtingText.cpp)

add_executable(Lecture_05___Outputting_Text ${SOURCE_FILES})