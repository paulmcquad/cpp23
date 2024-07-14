cmake_minimum_required(VERSION 3.30)
project(cpp23-1)

# Debugging Settings (uncomment) :
add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

# Complie to executables
add_executable(evennum evennum.cpp)
add_executable(primenum primenum.cpp)
add_executable(primenumfor primenumfor.cpp)
add_executable(age age.cpp)
add_executable(day day.cpp)
add_executable(sumnum sumnum.cpp)
add_executable(guessing guessing.cpp)
add_executable(printnum printnum.cpp)
add_executable(forcon forcon.cpp)


# Linux Builds:
# mkdir build
# cd build
# cmake .. 
# make