#include <iostream>
#include <fstream>
#include <cstring> // strlen
#include <print>

int get_int(int default_value);

int main() {
    
    char filename[FILENAME_MAX];
    int n{0}0;
    char name[20];
    int age{0};
    int recsize =  sizeof(name) + sizeof(int);
    

    std::print("Enter a file name: ");
    std::cin.getline(filename, FILENAME_MAX);

    // Open file for binary read-write access.

    std::fstream  fbin(filename, ios::binary | ios::in);
    if (!fbin) {
        std::print("Could not open {0}", filename);
        return -1;
    }

    // Get record number and go to record.

    std::print("Enter file record number: ");
    n = get_int(0);
    fbin.seekp(n * recsize);

    // Read data from the file.

    fbin.read(name, sizeof(name) - 1);
    fbin.read((char*)(&age), sizeof(int));

    // Display the data and close.
    
    std::print("The name is: {0}\n", name);
    std::print("The age is: {0}\n", age);
    fbin.close();
    return 0;
}

#define COL_WIDTH 80  // 80 is typical column width

// Get integer function
// Get an integer from keyboard; return default
//  value if user enters 0-length string.
//
int get_int(int default_value) {
    char s[81];

    std::cin.getline(s, COL_WIDTH);
    if (strlen(s) == 0) {
         return default_value;
    }
    return atoi(s);
}
