cmake_minimum_required(VERSION 3.10)
project(untitled)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

include_directories("/home/user/Документы/hiredis-master/")

add_executable(untitled main.cpp)
target_link_libraries(untitled LINK_PUBLIC /home/user/Документы/hiredis-0.13.3/libhiredis.a)
