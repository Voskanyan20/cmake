cmake_minimum_required(VERSION 2.8)

project(MyCalc)

include_directories(include)
link_directories(/home/voskanyan20/Desktop/SystemProgramming/Tasks/22.11.22/calc/useLib/libs)

set(SRC src/main.cpp)
set(PROJECT_LINK_LIBS libMyLib.a)

add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} ${PROJECT_LINK_LIBS})

