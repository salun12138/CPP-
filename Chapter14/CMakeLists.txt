cmake_minimum_required(VERSION 3.24)
project(Chapter14)

set(CMAKE_CXX_STANDARD 17)

add_executable(test1 test1/main.cpp test1/pairs.cpp test1/Wine.cpp test1/Wine.h)
add_executable(test2 test2/pairs.cpp test2/Wine.cpp test2/Wine.h test2/main.cpp)
add_executable(test3 test3/main.cpp test3/QueueTp.cpp test3/QueueTp.h test3/workermi.cpp test3/workermi.h)
add_executable(test4 test4/Person.cpp test4/Person.h test4/main.cpp)
add_executable(test5 test5/emp.cpp test5/emp.h test5/main.cpp)
