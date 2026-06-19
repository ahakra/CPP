cmake_minimum_required(VERSION 3.20)

project(CPP
        VERSION 1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(CPP
        src/main.cpp
        src/tour_of_cpp/ch_01.cpp
)

target_include_directories(CPP
        PRIVATE
        src
)