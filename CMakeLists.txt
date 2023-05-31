cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
project(rbcity)

# raylib
find_package(raylib QUIET)
if (NOT raylib_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 4.5.0
    )
    FetchContent_MakeAvailable(raylib)
endif()

# raylib-cpp
find_package(raylib_cpp QUIET)
if (NOT raylib_cpp_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        raylib_cpp
        GIT_REPOSITORY https://github.com/RobLoach/raylib-cpp.git
        GIT_TAG v4.5.0
    )
    FetchContent_MakeAvailable(raylib_cpp)
endif()

# Set the path to raylib if necessary
if (WIN32)
  set(raylib_DIR "C:\\raylib\\raylib")
endif()

# Executables
add_executable(rbcity main.cpp
	src/play.cpp
    src/raygui.c)
    
target_compile_features(rbcity PRIVATE cxx_std_11)
target_include_directories(rbcity PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(rbcity raylib)
