#include <iostream>
#include <array> // std::array
#include <print>

int main() {
    // Single-braces - C++11 Support
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
