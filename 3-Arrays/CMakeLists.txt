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
#add_executable(arr1 arr1.cpp)
# Executable + Linking with <fmt/format.h>
#add_executable(arr2fmt arr2fmt.cpp)
#target_link_libraries(arr2fmt fmt)

# Linux Builds:
# mkdir build
# cd build
# cmake .. 
# make