cmake_minimum_required(VERSION 3.30)
project(cpp23-4)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

add_executable(unique_ptr unique_ptr.cpp)
add_executable(unique_ptr1 unique_ptr1.cpp)
add_executable(shared_ptr shared_ptr.cpp)
add_executable(shared_ptr1 shared_ptr1.cpp)
add_executable(weak_ptr weak_ptr.cpp)


# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
