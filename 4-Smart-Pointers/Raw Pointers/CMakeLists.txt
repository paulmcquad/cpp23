cmake_minimum_required(VERSION 3.30)
project(cpp23-4)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

add_executable(double_it double_it.cpp)
add_executable(pr_addr pr_addr.cpp)
add_executable(sort sort.cpp)
add_executable(zero_out zero_out.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
