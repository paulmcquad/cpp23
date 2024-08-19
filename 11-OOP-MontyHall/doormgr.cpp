// The program that includes this class should also include
// cstdlib and ctime.
//
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
