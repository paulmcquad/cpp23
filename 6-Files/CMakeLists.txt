cmake_minimum_required(VERSION 3.30)
project(cpp23-6)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)
add_executable(readbin readbin.cpp)
add_executable(readtxt readtxt.cpp)
add_executable(writebin writebin.cpp)
add_executable(writetxt writetxt.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
