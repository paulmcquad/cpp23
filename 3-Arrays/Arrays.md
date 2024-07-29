# Arrays

An Array is used to store multiple values in a single variable, instead of declaring separate variables for each value.

## Types of Arrays

There are 3 types of an array in C++ :

 1. One-dimensional array
 2. Two-dimensional array
 3. Multidimensional array (3D and more)

## 1D - One-dimensional array

A typical declaration for an array in C++ is:
type name [elements];

// Single-braces - C++11 Support

    int num[4]{1, 2, 3, 4};
    double dnum[2]{0.5, 1.5};

OR

// Double-braces required in C++11

// num is an array of 4 int values

    std::array<int, 4> num{{1,2,3,4}};
    std::array<double, 2> dnum{{0.5, 1.5}};
    std::array<float, 3> fnum{{0.5, 1.5, 4.5}};

## 2D - Two-dimensional array

Also called an array of an array.

2D Array is:

    int arrray2d[2][3]{{1,2,3},{4,5,6}};

    [2] - No. of array: 2
    [3] - Size of Table of Elements (2x3) (4,5,6)

This array has 2 rows and 3 columns, which is why we have two rows of elements with 3 elements each.


Example :

    int arrray2d[2][3]{{2, 4, 5},{9, 0, 19}};

![](2D.webp)

## 3D - Three-dimensional array

Also called an array of an array of arrays.

3D Array is:

    int arrray3d[3][3][1]{{1,2,3},{4,5,6},{7,8}};

    [3] - No. of array: 3
    [3] - Size of Cude of Elements (3x3x1) (4,5,6)
    [1] - Size of next Table of Elements (1) (7,8)

## 4D - Four-dimensional array

4D Array is:

    int arrray4d[4][3][1][1]{{1,2,3},{4,5,6},{7,8},{9,10}};

    [4] - No. of array: 4
    [3] - Size of Structure of Elements (4x3x1x1) (4,5,6)
    [1] - Size of 2nd Elements Table (1) (7,8)
    [1] - Size of 3rd Elements Table (1) (9,10)