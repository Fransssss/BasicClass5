cmake_minimum_required(VERSION 3.21)
project(BasicClass5)

set(CMAKE_CXX_STANDARD 14)

add_executable(BasicClass5 main.cpp Dog.cpp Dog.h CapitalizeWord.h ValidateNumber.h)
