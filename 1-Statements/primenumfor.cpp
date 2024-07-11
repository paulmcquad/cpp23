#include <iostream>
#include <print>
#include <cmath>

int main() {
    // Int Braced Initialization - C++11  
    int n{0};
    bool is_prime = true; // Boolean Flag

    // Get a number n from the keyboard.
    std::print("Enter a number: ");
    std::cin >> n;

    // Test for prime by checking for divisibility
    //  by all whole numbers from 2 to sqrt(n).

    // For Loop - Iteration Statement
    for (int i{2}; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            is_prime = false;
        }
    }

    // if / if else - Condition Statement
    if (is_prime) {
        std::print("Number is prime.\n");
    } else {
        std::print("Number is not prime.\n");
    }

    return 0;
}
