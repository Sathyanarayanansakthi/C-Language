cmake_minimum_required(VERSION 4.0)
project(C_and_C__ C)

set(CMAKE_C_STANDARD 11)

add_executable(C_and_C__
        basic.c
        scan.c
        Operators/arit.c
        Operators/compare.c
        Operators/logical.c
        "Functions/1 function.c")
