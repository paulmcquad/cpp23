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

    // 2D Array
    int arrray2d[2][3]{{1,2,3},{4,5,6}};

    // 3D Array
    int arrray3d[3][3][1]{{1,2,3},{4,5,6},{7,8}};

    // 4D Array
    int arrray4d[4][3][1][1]{{1,2,3},{4,5,6},{7,8},{9,10}};

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

    std::print("{0} \n", (arrray2d[1][1])); // Outputs: 5
    std::print("{0} \n", (arrray3d[2][0][1]));  // Outputs: 8
    std::print("{0} \n", (arrray4d[3][0][0][0]));  // Outputs: 9

    std::print("{0} \n", (arrray3d[2][0][7]));  // Undefined Behavior while accessing array out of bounds

    return 0;
}
