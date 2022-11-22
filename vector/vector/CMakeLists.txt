cmake_minimum_required(VERSION 2.8)

project(MyVect)

include_directories(include)

file(GLOB SRC src/*.cpp)

add_executable(${PROJECT_NAME} ${SRC})

