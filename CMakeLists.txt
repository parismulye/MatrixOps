cmake_minimum_required(VERSION 2.8.9)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(MatrixOps)

file(GLOB SOURCES "./*.cc")

add_executable(test_code ${SOURCES})
