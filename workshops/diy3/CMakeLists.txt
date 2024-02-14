cmake_minimum_required(VERSION 3.27)
project(diy3 C)

set(CMAKE_C_STANDARD 11)

add_executable(diy3 main.c
        utils.c
        report.h
        utils.h
        marks.c
        marks.h
        report.c)
