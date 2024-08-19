#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "card.hpp"
#include "deck.hpp"
// INCLUDE THE DECK AND CARD CLASS
// DECLARATIONS AND DEFINITIIONS HERE.

Deck my_deck;
Card aCards[5];
void play_game();

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
         cout << i + 1 << ". ";
         cout << aCards[i].display() << endl;
     }
}
