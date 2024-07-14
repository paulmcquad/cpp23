cmake_minimum_required(VERSION 3.30)
project(cpp23-2)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

# Complie to executables
add_executable(main main.cpp)


# Linux Builds:
# mkdir build
# cd build
# cmake .. 
# make