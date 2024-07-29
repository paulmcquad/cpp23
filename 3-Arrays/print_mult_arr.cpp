#include <iostream>
#include <array> // std::array
#include <print>

// Libera Chat - C++ Channel
// [23:05] <Alipha> array<array<int, 3>, 7> foo; // is 7 arrays each with 3 ints.
// [23:07] <Alipha> C++ doesn't have "multidimensional arrays", but rather arrays of arrays (of arrays of arrays of...)


int main() {
    // local array Single-braces - Prior C++11
    double scores[5]{0.5, 1.5, 2.5, 3.5, 4.5};

    // std::array
    // Double-braces required in C++11
    std::array<double, 5> newscores{{0.5, 1.5, 2.5, 3.5, 4.5}};
    
    std::array<float, 3> newfloat{{0.5, 1.5, 4.5}};


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


    return 0;
}
