// Remember to include string, cstdlib, and ctime,
//  and using namespace std in the enclosing program.

class PrizeManager {
public:
	 PrizeManager() {srand(time(NULL));}
	 string get_good_prize();
	 string get_bad_prize();
};

string PrizeManager::get_good_prize() {
	 static const string prize_list[5] = {
	 "YOUR BRAND NEW CAR!",
	"A BA-ZILLION DOLLARS!",
	"A EUROPEAN VACATION!",
	"A CONDO IN HAWAII!",
	"TEA WITH THE QUEEN OF ENGLAND!"
	 };
     return prize_list[rand() % 5];
}

string PrizeManager::get_bad_prize() {
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
     return prize_list[rand() % 8];

}
