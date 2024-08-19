cmake_minimum_required(VERSION 3.30)
project(cpp23-14)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

add_executable(binary binary.cpp)
add_executable(fibo fibo.cpp)
add_executable(range_based_for range_based_for.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
