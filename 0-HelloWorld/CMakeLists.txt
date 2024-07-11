cmake_minimum_required(VERSION 3.30)
project(cpp23)

# Debugging Settings (uncomment) :
#add_compile_options(-Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

# Complie to executables
add_executable(print print.cpp)
add_executable(convert convert.cpp)
add_executable(square square.cpp)
add_executable(counter counter.cpp)
add_executable(sum sum.cpp)
add_executable(sum1 sum1.cpp)

# Linux Builds:
# mkdir build
# cd build
# cmake .. 
# make