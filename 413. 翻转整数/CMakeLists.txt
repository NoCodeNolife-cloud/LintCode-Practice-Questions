cmake_minimum_required(VERSION 3.19)
project(413__Reverse_Integer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

add_executable(413__Reverse_Integer main.cpp)