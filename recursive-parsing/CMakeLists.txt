cmake_minimum_required(VERSION 3.8)
project(recursive-parsing)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp lexical_analyser.h parser.h Token.h Tree.h)
add_executable(recursive-parsing ${SOURCE_FILES})