cmake_minimum_required(VERSION 3.8)
project(familyTree)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Branch.cpp Branch.h Tree.cpp Tree.h menu.cpp menu.h)
add_executable(familyTree ${SOURCE_FILES})