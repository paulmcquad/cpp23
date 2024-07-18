cmake_minimum_required(VERSION 3.30)
project(cpp23-2)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

# Complie to executables
add_executable(dealer dealer.cpp)
add_executable(print_arr print_arr.cpp)
add_executable(print_n_arr print_n_arr.cpp)
add_executable(stats stats.cpp)
add_executable(graderecords2 graderecords2.cpp)

# Linux Builds:
# mkdir build
# cd build
# cmake .. 
# make