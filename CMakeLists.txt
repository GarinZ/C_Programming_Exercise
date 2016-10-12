cmake_minimum_required(VERSION 3.6)
project(C_Programming_Exercise)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        C_Program_2_exercise.c
        C_Program_2_exercise.h
    CMakeLists.txt
    main.c C_Program_3_exercise.c C_Program_3_exercise.h C_Program_5_exercise.h C_Program_5_exercise.c)

add_executable(C_Programming_Exercise ${SOURCE_FILES})