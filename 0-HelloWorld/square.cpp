#include <iostream>
#include <print>

int main() {

    // Double Braced Initialization - C++11
    double n{0.0};

    // Prompt and input value of n.
    std::print("Input a number and press ENTER: ");
    std::cin >> n;

    // Calculate and output the square.
    std::print("The square is: {0} \n", (n * n));

    return 0;
}