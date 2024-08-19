#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

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

class DoorManager {
public:
	 DoorManager() {srand(time(NULL)); }
	 void start_new_game();
	 void set_sel_door(int n);
	 int get_alt_door() { return altDoor + 1; }
	 int get_bad_door() { return badDoor + 1; }
	 bool query_door(int n) {return n == (winDoor + 1); }
private:
	 int winDoor;
	 int selDoor, altDoor, badDoor;
};

void DoorManager::start_new_game() {
 winDoor = rand() % 3;
}

void DoorManager::set_sel_door(int n) {
	 selDoor = n - 1;
	 if (selDoor == winDoor) {
	 if (rand() % 2) {  // Random true or false
	 altDoor = (selDoor + 1) % 3;
	 badDoor = (selDoor + 2) % 3;
	 } else {
	 badDoor = (selDoor + 1) % 3;
	 altDoor = (selDoor + 2) % 3;
	 }
	 } else { //Else, if the selected door is not the
					// winning door...

			 // Alternative door MUST be the winning door!
	 altDoor = winDoor;

			 // Assign badDoor the number in {0, 1, 2}
			 //  not equal to either selDoor or altDoor.
	 badDoor = 3 - selDoor - altDoor;
	 }
}



void play_game();
int get_number();

PrizeManager prize_mgr;
DoorManager  door_mgr;

int main() {
	
 cout << "Welcome to Good Deal, Bad Deal!" << endl;
 cout << "I'm your host, Monty Schmall." << endl;
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
 string s;
 cout << "Which of three doors would you like (1, 2, 3)? ";
 int n = get_number();
	 door_mgr.set_sel_door(n);
	 cout << "Before I reveal what's behind the door, " << endl;
	 cout << "I'm going to show a door you DIDN'T pick." << endl;
	 cout << endl;
	 cout << "Behind Door No. " << door_mgr.get_bad_door()
		  << " is..." << prize_mgr.get_bad_prize() << endl << endl;
	 cout << "Now, would you like to switch from Door No. ";
		cout << n << endl << "to Door No. ";
	 cout << door_mgr.get_alt_door() << "? (Y or N): ";
    getline(cin, s);
	 if (s[0] == 'Y' || s[0] == 'y') {
	 n = door_mgr.get_alt_door();
	 }
 cout << endl << "Ok. You just won... ";
 if (door_mgr.query_door(n)) {
 cout << prize_mgr.get_good_prize();
 } else {
 cout << prize_mgr.get_bad_prize();
 }
 cout << endl << endl;
}

int get_number() {
 string sInput;
 while(true) {
 getline(cin, sInput);
 int n = stoi(sInput);
 if (n >= 1 && n <= 3) {
 return n;
 }
 cout << "You must enter 1, 2, or 3. Re-enter: ";
    }
}
