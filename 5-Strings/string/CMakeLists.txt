cmake_minimum_required(VERSION 3.30)
project(cpp23-5)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

# Numberic conversions
add_executable(stod stod.cpp)
add_executable(stoi stoi.cpp)
add_executable(stoul stoul.cpp)
add_executable(stoull stoull.cpp)
add_executable(stof stof.cpp)
add_executable(stold stold.cpp)


# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
