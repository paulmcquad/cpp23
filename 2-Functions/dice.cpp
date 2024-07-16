#include <iostream>
#include <cstdlib>
#include <ctime>
#include <print>

// Function must be declared before being used.
int rand_0toN1(int n);

int main() {
	
    int n{0};
    int r{0};
    
    srand(time(nullptr)); // Set seed for random numbers.
    std::print("Enter number of dice to roll: ");
    std::cin >> n;
    for (int i{1}; i <= n; ++i) {
        r = rand_0toN1(6) + 1; // Get a number 1 to 6
        std::print("{0} ", r);      // Print it
    }
    return 0;
}
// Random 0-to-N1 Function.
// Generate a random integer from 0 to N-1, with each
//  integer an equal probability.
//

// Function definition
int rand_0toN1(int n) {
    return rand() % n;
}
