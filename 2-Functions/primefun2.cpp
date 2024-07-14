#include <iostream>
#include <cmath>
#include <print>

// Function must be declared before being used.
void get_divisors(int n);
int main() {
	
    int n{0};
    std::print("Enter a number and press ENTER: ");
    std::cin >> n;
    get_divisors(n);
    std::print(" ");
    return 0;
}
// Get divisors function
//  This function prints all the divisors of n,
//  by finding the lowest divisor, i, and then
//  rerunning itself on n/i, the remaining quotient.
void get_divisors(int n) {
double sqrt_of_n = sqrt(n);
     for (int i{2}; i <= sqrt_of_n; ++i) {
         if (n % i == 0) {   // If i divides n evenly,
            std::print("{0} " "" , i);    //   Print i,
            get_divisors(n / i);  //   Factor n/i,
            return;               //   and exit.
         }
     }
     // If no divisor is found, then n is prime;
     //  Print n and make no further calls.
     std::print("{0}\n", n);   
}
