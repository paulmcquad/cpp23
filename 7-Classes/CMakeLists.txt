cmake_minimum_required(VERSION 3.30)
project(cpp23-7)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

add_executable(fract2 fract2.cpp)
add_executable(fract3 fract3.cpp)
add_executable(point point.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
