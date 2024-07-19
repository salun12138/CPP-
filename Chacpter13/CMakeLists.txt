cmake_minimum_required(VERSION 3.24)
project(Chacpter13)

set(CMAKE_CXX_STANDARD 17)

add_executable(test1 test1/main.cpp test1/Cd.cpp test1/Cd.h)
add_executable(test2 test2/classic.cpp test2/classic.h test2/main.cpp)
add_executable(test4 test4/Port.cpp test4/Port.h)
