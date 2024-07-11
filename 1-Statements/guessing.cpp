#include <iostream>
#include <cstdlib>    // Supports rand and srand functions.
#include <ctime>      // Supports time function.
#include <print>


int main() {

    int  n{0};
    bool do_more = true;

    srand(time(nullptr));         // Set random seed.
    int target = rand() % 50 + 1; // Get random 1-50.

    do {
        std::print("Enter your guess: ");
        std::cin >> n;
        if (n == 0) {
            std::print("Bye! ");
            do_more = false;
        } else if (n > target) {
            std::print("Guess is too high. ");
        } else if (n < target) {
            std::print("Guess is too low. ");
        } else {
            std::print("You win! ");
            std::print("Answer is {0}!\n", n);
            do_more = false;
        }
    } while (do_more);

    return 0;
}
