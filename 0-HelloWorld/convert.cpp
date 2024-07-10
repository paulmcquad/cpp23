#include <iostream>
#include <print>

int main() {
    
    // Double Braced Initialization - C++11
    double ctemp{0.0}, ftemp{0.0};

    std::print("Input a Celsius temp and press ENTER: ");
    std::cin >> ctemp;
    ftemp = (ctemp * 1.8) + 32;
    std::print("Fahrenheit temp is: {0} \n", ftemp);
    
    return 0;
}