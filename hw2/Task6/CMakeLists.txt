cmake_minimum_required(VERSION 3.0)
project(Task6)

if (CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS "-H -std=c++17 -lpthread -O3 ${CMAKE_CXX_FLAGS}")
    endif()
    set(SOURCES main.cpp)
    add_executable(Task6 ${SOURCES})
	target_link_libraries(Task6 ${CMAKE_SOURCE_DIR}/twoNormVector.a)
