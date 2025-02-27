cmake_minimum_required(VERSION 3.30)
project(Biblioteca)

set(CMAKE_CXX_STANDARD 20)

add_executable(Biblioteca main.cpp
        Livro.cpp
        Livro.h
        Biblioteca.cpp
        Biblioteca.h)
