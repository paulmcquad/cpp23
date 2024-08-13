cmake_minimum_required(VERSION 3.30)
project(cpp23-5)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

add_executable(adding2 adding2.cpp)
add_executable(buildstr buildstr.cpp)
add_executable(buildstr2 buildstr2.cpp)
add_executable(get_num get_num.cpp)
add_executable(tokenize tokenize.cpp)
add_executable(upper upper.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
