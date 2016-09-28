cmake_minimum_required(VERSION 3.6)
project(C_Programming_Exercise)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    C_Program_2_exsersice.c
    C_Program_2_exsersice.h
    CMakeLists.txt
    main.c)

add_executable(C_Programming_Exercise ${SOURCE_FILES})