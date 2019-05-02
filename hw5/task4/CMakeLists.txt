cmake_minimum_required(VERSION 3.0)
project(hw5_Task4)

if (CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS "-H -std=c++17 -lpthread -O3 ${CMAKE_CXX_FLAGS}")
    endif()
	set(SOURCES main.cpp generatePosDef.cpp)
    add_executable(Task4 ${SOURCES})
	target_link_libraries(Task4 ${CMAKE_SOURCE_DIR}/../../lib/Math5610.a)
