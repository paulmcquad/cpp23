#include <iostream>
#include <fstream>
#include <cstring> // strlen
#include <print>

int get_int(int default_value);

int main() {
    
    char filename[FILENAME_MAX];
    int n{0};
    char name[20];
    int age{0};
    int recsize = sizeof(name) + sizeof(int);
    

    std::print("Enter a file name: ");
    std::cin.getline(filename, FILENAME_MAX);

    // Open file for binary write.    

    std::fstream  fbin(filename, std::ios::binary | std::ios::out);
    if (!fbin) {
        std::print("Could not open {0}", filename);
        return -1;
    }

    //  Get record number to write to.

    std::print("Enter file record number: ");
    n = get_int(0);

    // Get data from end user.

    std::print("Enter name: ");
    std::cin.getline(name, sizeof(name) - 1);
    std::print("Enter age: ");
    age = get_int(0);

    // Write data to the file.

    fbin.seekp(n * recsize);
    fbin.write(name, sizeof(name) - 1);
    fbin.write((char*)(&age), sizeof(int));
    fbin.close();
    return 0;
}

#define COL_WIDTH 80  // 80 is typical column width

// Get integer function
// Get an integer from keyboard; return default
//  value if user enters 0-length string.
//
int get_int(int default_value) {
    char s[COL_WIDTH+1];

    std::cin.getline(s, COL_WIDTH);
    if (strlen(s) == 0) {
         return default_value;
    }
    return atoi(s);
}
