#include <iostream>
#include <ctime>
#include <print>

int rand_0toN1(int n);
int hits[10]; // global array

int main() {
    
    int n{0};  // Number of trials; prompt from user
    int r{0};  // Holds a random value

    srand(time(nullptr));   // Set seed for randomizing.

    std::print("Enter how many trials and press ENTER: ");
    std::cin >> n;

    // Run n trials. For each trial, get a num 0 to 9
    //  and then increment the corresponding element
    //  in the hits array.

    for (int i{0}; i < n; ++i) {
        r = rand_0toN1(10);
        ++hits[r];
    }

    // Print all elements in the hits array, along
    //  with ratio of hits to EXPECTED hits (n / 10).

    for (int i{0}; i < 10; ++i) {
       std::print("{0}: {1} Accuracy: ", i, hits[i]);
       double results = hits[i];
       std::print("{0}\n", (results / (n / 10.0)));
    }
    return 0;
}

// Random 0-to-N1 Function.
// Generate a random integer from 0 to N-1.
//
int rand_0toN1(int n) {
    return rand() % n;
}
