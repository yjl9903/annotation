cmake_minimum_required(VERSION 3.31)
project(annotation)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(solution solution.cpp)

add_executable(generator generator.cpp)
