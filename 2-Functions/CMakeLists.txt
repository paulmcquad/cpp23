cmake_minimum_required(VERSION 3.30)
project(cpp23-2)

# Debugging Settings (uncomment) :
#add_compile_options(-Werror -Wall -Wextra -Wpedantic)

# Set C++ 23 Support
set(CMAKE_CXX_STANDARD 23)

# Complie to executables
add_executable(primefun primefun.cpp)
add_executable(primefun2 primefun2.cpp)
add_executable(avgfun avgfun.cpp)
add_executable(gcf gcf.cpp)
add_executable(dice dice.cpp)
add_executable(towerfun towerfun.cpp)
add_executable(subfun subfun.cpp)
add_executable(leapyear leapyear.cpp)
add_executable(chessboard chessboard.cpp)
add_executable(whilechessboard whilechessboard.cpp)
add_executable(cubed cubed.cpp)


# Linux Builds:
# mkdir build
# cd build
# cmake .. 
# make