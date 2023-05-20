cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)

project(rbcity)
add_executable(rbcity main.cpp
	src/play.cpp
        src/raygui.c)
target_compile_features(rbcity PRIVATE cxx_std_11)
target_include_directories(rbcity PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(rbcity raylib)
