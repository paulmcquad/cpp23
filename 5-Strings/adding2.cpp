#include <iostream>
#include <cstring>    // Include support for string class.[1]
using namespace std;

bool get_next_num(int *p);

int main() {

     int sum = 0;
     int n = 0;

     while (get_next_num(&n)) {
          sum += n;
     }
     cout << "The total is: " << sum << endl;
     return 0;
}

bool get_next_num(int *p) {
     string input_line;
     cout << "Enter num (press ENTER to quit): ";
     getline(cin, input_line);
     if (input_line.size() == 0) {
          return false;
     }
     *p = stoi(input_line);
     return true;
}
