cmake_minimum_required(VERSION 3.20)

project(CPP
        VERSION 1.0
        LANGUAGES CXX
)

# Use modern C++
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add executable
add_executable(CPP
        src/main.cpp
)

# Include headers
target_include_directories(CPP
        PRIVATE
        src
)
target_compile_features(CPP
        PRIVATE
        cxx_std_23
)