#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

#include "card.hpp"
#include "deck.hpp"
// INCLUDE THE DECK AND CARD CLASS
// DECLARATIONS AND DEFINITIIONS HERE.

Deck my_deck;
Card aCards[5];
bool aFlags[5];
vector<int> selVec;

void play_game();
bool draw();

int main() {
	
    string s;
    while (true) {
        play_game();
        cout << "Play again? (Y or N): ";
        getline(cin, s);
        if (s[0] == 'N' || s[0] == 'n') {
            break;
        }
    }
    return 0;
}

void play_game() {
     for (int i = 0; i < 5; ++i) {
         aCards[i] = my_deck.deal_a_card();
         aFlags[i] = false;
         cout << i + 1 << ". ";
         cout << aCards[i].display() << endl;
     }
     cout << endl;

     // Draw new cards, and then re-display

     if (draw()) {
         for (int i = 0; i < 5; ++i) {
             cout << i + 1 << ". ";
             cout << aCards[i].display();
             if (aFlags[i]) {
                 cout << " *";
             }
             cout << endl;
         }
         cout << endl;
     }
}

bool draw() {
    string sInput;
    selVec.clear();
    cout << "Input #'s of cards to redraw: ";
    getline(cin, sInput);
    if (sInput.size() == 0) {
        return false;
    }
    // Read input string, adding an
    //  element to selVec for each digit read.

    for (size_t i = 0; i < sInput.size(); ++i) {
        int n = sInput[i] - '0';
        if (n >= 1 && n <= 5) {
            selVec.push_back(n - 1);
        }
    }
    // For each number (0-4) in selVec, redraw
    //  the corresponding card.

    for (size_t i = 0; i < selVec.size(); ++i) {
        int j = selVec[i];  // Select a card
        aCards[j] = my_deck.deal_a_card();
        aFlags[j] = true;
    }
    return true;
}
