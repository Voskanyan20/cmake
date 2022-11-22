cmake_minimum_required(VERSION 2.8)

project(MyCalc)

set(CMAKE_BUILD_TYPE Release)
set(SRC src/add.cpp)

option(BUILD_SHARED_LIBS "Build using shared libraries" OFF)

include_directories(include)
add_library(${PROJECT_NAME} ${SRC})
