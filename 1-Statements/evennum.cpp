#include <iostream>
#include <print>

int main() {
    // Int Braced Initialization - C++11  
    int n{0};

    // Get a number n from the keyboard.
    std::print("Enter a number: ");
    std::cin >> n;

    // Get remainder after dividing by 2.
    // if remainder is 0, then n is even.

    // if / if else - Condition Statement
    if (n % 2 == 0) {
            std::print("The number is even.\n");
    } else {
            std::print("The number is odd.\n");

    }

    return 0;
}
