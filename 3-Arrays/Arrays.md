# Arrays

An Array is used to store multiple values in a single variable, instead of declaring separate variables for each value.

## Types of Arrays

There are 3 types of an array in C++ :

 1. One-dimensional array
 2. Two-dimensional array
 3. Multidimensional array

## Declare an array

A typical declaration for an array in C++ is:
type name [elements];

// local array Single-braces - Prior C++11

int num[4] = {1, 2, 3, 4};
double dnum[2] = {0.5, 1.5};

OR

#include <array>

// num is an array of 4 int values

// Double-braces required in C++11

std::array<int, 4> num{{1,2,3,4}};
std::array<double, 2> dnum{{0.5, 1.5}};
std::array<float, 3> fnum{{0.5, 1.5, 4.5}};
