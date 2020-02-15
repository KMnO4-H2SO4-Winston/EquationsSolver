cmake_minimum_required(VERSION 3.13)
project(EquationsSolver)

set(CMAKE_CXX_STANDARD 11)

add_executable(EquationsSolver
        code/main.cpp
        code/equation.cpp
        code/equation.h
        code/expression.cpp
        code/expression.h
        code/term.cpp
        code/term.h
        code/error.h)
