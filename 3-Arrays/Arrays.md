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

int num[4] = {1, 2, 3, 4};

OR

#include <array>

// num is an array of 4 int values
std::array<int, 4> num{{1,2,3,4}}; // Double-braces required in C++11
