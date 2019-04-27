cmake_minimum_required(VERSION 3.0)
project(Task8)

if (CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS "-H -std=c++17 -lpthread -O3 ${CMAKE_CXX_FLAGS}")
    endif()
    set(SOURCES main.cpp matrixProduct.cpp)
    add_executable(Task8 ${SOURCES})
	target_link_libraries(Task8 ${CMAKE_SOURCE_DIR}/../lib/Math5610.a)
