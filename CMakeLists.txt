cmake_minimum_required(VERSION 3.14)

project(PhoinList LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(RESOURCES_CPP main.cpp phoinlist.cpp)
set(RESOURCE_H phoinlist.h)

add_executable(phoinlist ${RESOURCES_CPP} ${RESOURCE_H})

