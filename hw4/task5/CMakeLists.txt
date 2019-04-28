cmake_minimum_required(VERSION 3.0)
project(hw4_Task5)

if (CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS "-H -std=c++17 -lpthread -O3 ${CMAKE_CXX_FLAGS}")
    endif()
	set(SOURCES main.cpp solveUpperTriangular.cpp)
    add_executable(Task5 ${SOURCES})
	target_link_libraries(Task5 ${CMAKE_SOURCE_DIR}/../lib/Math5610.a)
