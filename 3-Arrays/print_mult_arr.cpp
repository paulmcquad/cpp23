#include <iostream>
#include <array> // std::array
#include <print>

// Libera Chat - C++ Channel
// [23:05] <Alipha> array<array<int, 3>, 7> foo; // is 7 arrays each with 3 ints.
// [23:07] <Alipha> C++ doesn't have "multidimensional arrays", but rather arrays of arrays (of arrays of arrays of...)


int main() {
    // Single-braces - C++11 Support
    double scores[5]{0.5, 1.5, 2.5, 3.5, 4.5};

    // std::array
    // Double-braces required in C++11
    std::array<double, 5> newscores{{0.5, 1.5, 2.5, 3.5, 4.5}};
    
    std::array<float, 3> newfloat{{0.5, 1.5, 4.5}};

    // 2D Array - 2 Rows x 3 Columns
    int array2d[2][3]{{1,2,3},{4,5,6}};

    // 3D Array - 3 Rows x 3 Columns
    int array3d[3][3][1]{{1,2,3},{4,5,6},{7,8}};

    // 4D Array - 4 Rows x 3 Columns
    int array4d[4][3][1][1]{{1,2,3},{4,5,6},{7,8},{9,10}};

    for(int i{0}; i < 5; ++i) {
        std::print("{0} ", scores[i]);
    }
    std::print("\n");

    for(int i{0}; i < 5; ++i) {
        std::print("{0} ", newscores[i]);
    }
    std::print("\n");

    for(int i{0}; i < 3; ++i) {
        std::print("{0} ", newfloat[i]);
    }
    std::print("\n");

    // Test 2D Array - 2 Rows x 3 Columns
    std::print("{0} \n", (array2d[1][1])); // Outputs: 5

    // Test 3D Array - 3 Rows x 3 Columns
    std::print("{0} \n", (array3d[2][0][1]));  // Outputs: 8
    std::print("{0} \n", (array3d[2][0][2]));  // Outputs: 0

    std::print("{0} \n", (array3d[2][0][3]));  // Undefined Behavior while accessing array out of bounds

    // Test 4D Array - 4 Rows x 3 Columns
    std::print("{0} \n", (array4d[2][1][0][0]));  // Outputs: 8
    std::print("{0} \n", (array4d[2][2][0][0]));  // Outputs: 0

    std::print("{0} \n", (array4d[3][0][0][0]));  // Outputs: 9
    std::print("{0} \n", (array4d[3][1][0][0]));  // Outputs: 10
    std::print("{0} \n", (array4d[3][2][0][0]));  // Outputs: 0




    return 0;
}
