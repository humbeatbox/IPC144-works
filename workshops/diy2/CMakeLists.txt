cmake_minimum_required(VERSION 3.27)
project(diy2 C)

set(CMAKE_C_STANDARD 11)

add_executable(diy2 main.c
        utils.c
        draw.c)
