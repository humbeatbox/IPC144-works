cmake_minimum_required(VERSION 3.27)
project(ws5 C)

set(CMAKE_C_STANDARD 99)

add_executable(ws5 main.c
        utils.c
        utils.h
        report.c
        report.h
)
