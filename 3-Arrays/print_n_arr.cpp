#include <iostream>
#include <string>
#include <print>

std::string tens_names[10] = {"", "", "twenty", "thirty", "forty",
   "fifty", "sixty", "seventy", "eighty", "ninety" };

std::string units_names[10] = {"", "one", "two", "three", "four",
   "five", "six", "seven", "eight", "nine" };

int main() {
    
    int n{0};

    std::print("Enter a number from 20 to 99: ");
    std::cin >> n;
    int tens_digits = n / 10;
    int units_digits = n % 10;
    std::print("The number you entered was ");
    std::print("{0} ", tens_names[tens_digits]);
    std::print("{0} \n", units_names[units_digits]);
    return 0;
}
