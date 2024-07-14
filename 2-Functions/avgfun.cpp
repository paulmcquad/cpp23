#include <iostream>
#include <print>
#include <cmath>

// Function must be declared before being used.
double avg(double x, double y);

int main() {
    // Int Braced Initialization - C++11  
    double a{0.0};
    double b{0.0};

    std::print("Enter first number and press ENTER: ");
    std::cin >> a;
    std::print("Enter second number and press ENTER: ");
    std::cin >> b;

    std::print("Average is: {0}\n", avg(a, b));
    return 0;
}

// Average-number function definition
double avg(double x, double y) {
    return (x + y)/2;
}
