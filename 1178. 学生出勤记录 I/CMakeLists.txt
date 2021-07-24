cmake_minimum_required(VERSION 3.19)
project(1178__Student_Attendance_Record_I)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(1178__Student_Attendance_Record_I main.cpp)