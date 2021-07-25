cmake_minimum_required(VERSION 3.19)
project(1059__Delete_and_Earn)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

add_executable(1059__Delete_and_Earn main.cpp)