cmake_minimum_required(VERSION 3.30)
project(cpp23-15)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

add_executable(fract5 fract5.cpp)
add_executable(fract6 fract6.cpp)
add_executable(point3 point3.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
