// Remember to include string, cstdlib, ctime and
// using namespace std in the enclosing program.

class Deck {
public:
    Deck();
    Card deal_a_card();
private:
    int cards[52];
    int iCard;
    void shuffle();
};

Deck::Deck() {
    srand(time(NULL));
    for (int i = 0; i < 52; ++i) {
        cards[i] = i;
    }
    shuffle();
}

void Deck::shuffle() {
    iCard = 0;
    for (int i = 51; i > 0; --i) {
        int j = rand() % (i + 1);
        int temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }
}

Card Deck::deal_a_card() {
    if (iCard > 51) {
        cout << endl << "RESHUFFLING..." << endl;
        shuffle();
    }
    int r = cards[iCard] % 13;
    int s = cards[iCard++] / 13;
    return Card(r, s);
}
