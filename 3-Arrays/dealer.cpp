#include <iostream>
#include <string>     // Needed for string class.
#include <cstdlib>    // Needed for randomization.
#include <ctime>
#include <print>

int deck[52];

std::string card_names[13] = {"A", "2", "3", "4", "5", "6",
   "7", "8", "9", "10", "J", "Q", "K" };

void swap_cards(int i, int j);
int rand0_to_N(int n);

int main() {
    //srand(ctime(NULL));  // Set random seed.
    srand(time(0)); //use current time as seed for random generator
    
    // Initialize deck 0, 1, 2, 3... 51
    for (int i{0}; i < 52; ++i) {
        deck[i] = i;
    }

    // Shuffle deck.
    for (int i{51}; i > 0; --i) {
        int j = rand0_to_N(i);
        swap_cards(i, j);
    }

    // Deal 5 cards.
    for (int i{0}; i < 5; ++i) {
        int j = deck[i] % 13;
        std::print("{0} ", card_names[j]);
    }
    std::print("\n");
    return 0;
}

//
void swap_cards(int i, int j) {
    int temp = deck[i];
    deck[i] = deck[j];
    deck[j] = temp;
}

//
int rand0_to_N(int n) {
    return rand() % (n + 1);
}
