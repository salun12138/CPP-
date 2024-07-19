cmake_minimum_required(VERSION 3.24)
project(Chacpter12)

set(CMAKE_CXX_STANDARD 17)

add_executable(test1 test1/main.cpp test1/Cow.cpp test1/Cow.h)
add_executable(test2 test2/String2.cpp test2/String2.h test2/main.cpp)
add_executable(test3 test3/Stock.cpp test3/Stock.h test3/main.cpp)
add_executable(test4 test4/Stack.cpp test4/Stack.h test4/main.cpp)
add_executable(test5 test5/queue.cpp test5/queue.h test5/bank.cpp)
