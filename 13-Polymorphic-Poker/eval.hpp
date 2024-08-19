// Note that enclosing program must include <string>
//  as well as using namespace std;
//
class Eval {
public:
    Eval(Card* pCards);
    string rank_hands();
private:
    int rankCounts[13];
    int suitCounts[4];
    int has_reps(int n);
    bool is_straight();
    bool verify_straight(int n);
    bool is_flush();
    bool is_two_pair();
};

Eval::Eval(Card* pCards) {
    for (int i = 0; i < 13; ++i) {  // Clear arrays
        rankCounts[i] = 0;
    }
    for (int i = 0; i < 4; ++i) { 
        suitCounts[i] = 0;
    }
    for(int i = 0; i < 5; ++i) {    // Init arrays
        int r = pCards[i].rank;
        int s = pCards[i].suit;
        ++rankCounts[r];
        ++suitCounts[s];
    }
}

string Eval::rank_hands() {
    string s;
    if (is_straight() && is_flush()) {
        if (rankCounts[12] && rankCounts[11]) {  // A&K
          s = "You have a ROYAL FLUSH! PAYOUT = 800";
        }else {
          s = "You have a STRAIGHT FLUSH! PAYOUT = 50";
        }
    } else if (has_reps(4)) {
        s = "You have FOUR OF A KIND!  PAYOUT = 25";
    } else if (has_reps(3) && has_reps(2)) {
        s = "You have a FULL HOUSE!  PAYOUT = 9";
    } else if (is_flush()) {
        s = "You have a FLUSH!  PAYOUT = 6";
    } else if (is_straight()) {
        s = "You have a STRAIGHT!  PAYOUT = 4";
    } else if (has_reps(3)) {
        s = "You have three of a kind.  PAYOUT = 3";
    } else if (is_two_pair()) {
        s = "You have two pair.  PAYOUT = 2";
    } else if (has_reps(2)) {
        s = "You have a pair.  PAYOUT = 1";
    } else {
        s ="You have no pair.  PAYOUT = 0.";
    }
    return s;
}

// Has reps function.
// Return true if any rank is repeated the
//   the specified number of times.

int Eval::has_reps(int n) {
    for(int i = 0; i < 13; ++i) {
        if (rankCounts[i] == n) {
            return true;
        }
    }
    return false;
}

// Is straight function.
// Look for first "singleton" in the ranks,
//   and then verify if it begins a straight.

bool Eval::is_straight() {
    for (int i = 0; i < 8; ++i) {
        if (rankCounts[i] == 1) {
            return verify_straight(i);
        }
    }
    return false;
}

bool Eval::verify_straight(int n) {
    for (int i = n + 1; i < n + 5; ++i) {
        if (rankCounts[i] != 1) {
            return false;
        }
    }
    return true;
}

bool Eval::is_flush() {
    for(int i = 0; i < 4; ++i) {
        if (suitCounts[i] == 5) {
            return true;
        }
    }
    return false;
}

bool Eval::is_two_pair() {
    int n = 0;
    for(int i = 0; i < 13; ++i) {
        if (rankCounts[i] == 2) {
            ++n;
        }
    }
    return n == 2;
}
