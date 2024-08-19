// Remember to include string and
// using namespace std in the enclosing program.

class Card {
public:
    Card() {}
    Card(int r, int s) { rank = r; suit = s; }
    int rank;
    int suit;
    string display();
};

string Card::display() {
    static const string aRanks[] = {" 2", " 3", " 4",
      " 5", " 6", " 7", " 8", " 9", "10", " J", " Q",
      " K", " A" };
    static const string aSuits[] = {
      "clubs", "diamonds", "hearts", "spades" };
    return aRanks[rank] + " of " + aSuits[suit] + ".";
}
