cmake_minimum_required(VERSION 3.0)
project(transpose)

if (CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS "-H -std=c++17 -lpthread -O3 ${CMAKE_CXX_FLAGS}")
    endif()
	set(SOURCES main.cpp transpose.cpp)
    add_executable(transpose ${SOURCES})
	target_link_libraries(transpose ${CMAKE_SOURCE_DIR}/../../lib/Math5610.a)
