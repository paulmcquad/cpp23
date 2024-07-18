#include <iostream>
#include <print>

int main() {
    
    double scores[5] = {0.5, 1.5, 2.5, 3.5, 4.5};

    for(int i = 0; i < 5; ++i) {
        std::print("{0} ", scores[i]);
    }
    return 0;
}
