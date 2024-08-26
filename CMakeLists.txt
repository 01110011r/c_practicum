cmake_minimum_required(VERSION 3.28)
project(CPracticum C)

set(CMAKE_C_STANDARD 11)

add_executable(CPracticum main.c
        src/bitwise_operators.c
        include/bitwise_operators.h
        include/printing_pattern-2.h
        src/printing_pattern-2.c)
