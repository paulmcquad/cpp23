//#include <string>
//#include <cstdlib>
//#include <ctime>
//using namespace std;

class PinochleDeck
{
public:
    PinochleDeck();
    Card deal_a_card();

private:
    int cards[48];
    int nCard;
    void shuffle();
};
PinochleDeck::PinochleDeck()
{
    srand(time(NULL));
    for (int i = 0; i < 48; ++i)
    {
        cards[i] = i;
    }
    shuffle();
}
void PinochleDeck::shuffle()
{
    nCard = 0;
    for (int i = 47; i > 0; --i)
    {
        int j = rand() % (i + 1);
        int temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }
}
Card PinochleDeck::deal_a_card()
{
    if (nCard > 47)
    {
        cout << endl
             << "RESHUFFLING..." << endl;
        shuffle();
    }
    int r = (cards[nCard] % 6) + 7;
    // r = 9 thru A
    // Divide deck in half (%24), then divide by 6
    // to produce suit values 0 thru 3.
    int s = (cards[nCard++] % 24) / 6;
    return Card(r, s);
}