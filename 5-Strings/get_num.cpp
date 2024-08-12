#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <print>

double get_number();

int main() {
    
    double x{0.0};

    while(true) {
        std::print("Enter a num (press ENTER to exit): ");
        x = get_number();
        if (x == 0.0) {
            break;
        }
        std::print("Square root of x is:{0} \n" ,sqrt(x));
    }
    return 0;
}

// Get-number function.
// Get number input by the user, taking only the first
//  numeric input entered. If user presses ENTER with
//  no input, then return a default value of 0.0.
//
double get_number() {
    char s[100];

    std::cin.getline(s, 100);
    if (strlen(s) == 0) {
        return 0.0;
    }
    return atof(s);
}
