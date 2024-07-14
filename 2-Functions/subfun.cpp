#include <iostream>
#include <ctime>
#include <cstdlib>
#include <print>

int rand_0toN1(int n);

int main() {
	
    int total{0}, n{0};
    
    srand(time(nullptr)); // Set seed for random numbers.
    std::print("Welcome to NIM. Pick a starting total: ");
    std::cin >> total;
    while (true) {
         // Pick best response and print results.

         if ((total % 3) == 2) {
              total = total - 2;
              std::print("I am subtracting 2.");
         } else if ((total % 3) == 1) {
              --total;
              std::print("I am subtracting 1.");
         } else {
              n = 1 + rand_0toN1(2); // n = 1 or 2.
              total = total - n;
              std::print("I am subtracting ");
              std::print("{0}.", n);            
         }
         std::print("New total is {0}\n", total);
         if (total == 0) {
              std::print("I win!\n");
              break;
         }

         // Get user's response; must be 1 or 2.

         std::print("Enter num to subtract (1 or 2): ");
         std::cin >> n;
         while (n < 1 || n > 2) {
              std::print("Input must be 1 or 2.");
              std::print("Re-enter: ");
              std::cin >> n;
         }
         total = total - n;
         std::print("New total is {0}\n", total);
         if (total == 0) {
              std::print("You win!\n");
              break;
         }
    }
    return 0;
}

int rand_0toN1(int n) {
    return rand() % n;
}
