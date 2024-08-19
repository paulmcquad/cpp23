// Remember to include string, cstdlib, and ctime,
//  and using namespace std in the enclosing program.

class PrizeManager {
public:
 PrizeManager();
 string get_good_prize();
 string get_bad_prize();
private:
    int good_array[5];
    int bad_array[8];
    int good_index;
    int bad_index;
    void shuffle(int *p, int n);
};

PrizeManager::PrizeManager() {
     srand(time(NULL));
     for (int i = 0; i < 5; ++i) {
          good_array[i] = i;
     }
     for (int i = 0; i < 8; ++i) {
          bad_array[i] = i;
     }
     good_array = bad_array = 0;
     shuffle(good_array, 5);
     shuffle(bad_array, 8);
}

string PrizeManager::get_good_prize() {
     if (good_index >= 5) {
         shuffle(good_array, 5);
         good_index = 0;
     }
	 static const string prize_list[5] = {
	 "YOUR BRAND NEW CAR!",
	"A BA-ZILLION DOLLARS!",
	"A EUROPEAN VACATION!",
	"A CONDO IN HAWAII!",
	"TEA WITH THE QUEEN OF ENGLAND!"
	 };
 return prize_list[good_array[good_index++]];
}

string PrizeManager::get_bad_prize() {
     if (bad_index >= 8) {
         shuffle(bad_array, 8);
         bad_index = 0;
     }
	 static const string prize_list[8] = {
	"two week's supply of Spam.",
	"a crate of rotting fish heads.",
	"a visit from a circus clown.",
	"two weeks at a clown college.",
	"a ten-year-old VCR player.",
	"a lesson from a mime.",
	"psychoanalysis from a clown.",
	"a tour of the city dump."
	 };
 return prize_list[bad_array[bad_index++]];
}

 void PrizeManager::shuffle(int *p, int n) {
     for (int i = n - 1; i > 1; --i) {
          j = rand() % (i + 1); // j = random 0 to i
          int temp = p[i];       // SWAP!
          p[i] = p[j];
          p[j] = temp;
     }
}
