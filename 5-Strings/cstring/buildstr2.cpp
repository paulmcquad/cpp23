#include <iostream>
#include <string>    // Include support for string class.[1]
using namespace std;

int main() {
    
    string str, name, addr, work;

    // Get three strings from the user.

    cout << "Enter name and press ENTER: ";
    getline(cin, name);
    cout << "Enter address and press ENTER: ";
    getline(cin, addr);
    cout << "Enter workplace and press ENTER: ";
    getline(cin, work);

    // Build the output string, and then print it.

    str = "\nMy name is " + name + ", " +
          "I live at " + addr +
          ",\nand I work at " + work + ".\n";

    cout << str << endl;
    return 0;
}
