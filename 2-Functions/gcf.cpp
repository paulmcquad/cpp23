#include <cstdlib>
#include <iostream>
#include <print>

// Greatest common divisor function declaration.
int gcf(int a, int b);

int main() {
	
    int a{0}, b{0}; // Inputs to GCF.
    
    std::print("Enter a: ");
    std::cin >> a;
    std::print("Enter b: ");
    std::cin >> b;
    std::print("GCF = {0}\n", gcf(a, b));
    return 0;
}

// Greatest common divisor function definition.
int gcf(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcf(b, a%b);
    }
}
