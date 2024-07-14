#include <iostream>
#include <print>
#include <cmath>

// Function must be declared before being used.
bool prime(int n);

int main() {
    // Int Braced Initialization - C++11  
    int n{0};

    // Get a number n from the keyboard.
    std::print("Enter a number: ");
    std::cin >> n;

    // if / if else - Condition Statement
    if (prime(n)) { 
        std::print("Number is prime.\n");
    } else {
        std::print("Number is not prime.\n");
    }

    return 0;
}

// Prime-number function definition. Test divisors from
//  2 to sqrt of n. Return false if a divisor
//  found; otherwise, return true.
bool prime(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
       if (n % i == 0) {   // If i divides n evenly,
          return false;    //  n is not prime.
       }
    }
    return true;   // If no divisor found, n is prime.
}
