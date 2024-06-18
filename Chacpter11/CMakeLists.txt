cmake_minimum_required(VERSION 3.24)
project(Chacpter11)

set(CMAKE_CXX_STANDARD 17)

add_executable(test1 test1/main.cpp test1/vect.h test1/vect.cpp)
add_executable(test2 test2/vect.h test2/vect.cpp test2/randwalk.cpp)
add_executable(test3 test3/randwalk.cpp test2/vect.h test2/vect.cpp)
add_executable(test4 test4/mytime3.h test4/mytime3.cpp test4/main.cpp)
add_executable(test5 test5/Stonewt.cpp test5/Stonewt.h)
add_executable(test7 test7/Complex.cpp test7/Complex.h test7/main.cpp)