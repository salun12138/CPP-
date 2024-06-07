cmake_minimum_required(VERSION 3.24)
project(Chacpter10)

set(CMAKE_CXX_STANDARD 17)

add_executable(test1 test1/main.cpp test1/bank.h test1/bank.cpp)
add_executable(test2 test2/main.cpp test2/Person.cpp test2/Person.h)
add_executable(test5 test5/Stack.cpp test5/Stack.h test5/main.cpp)
add_executable(test6 test6/Move.cpp test6/Move.h test6/main.cpp)
add_executable(test7 test7/Plorg.cpp test7/Plorg.h test7/main.cpp)
add_executable(test8 test8/List.cpp test8/List.h test8/main.cpp)