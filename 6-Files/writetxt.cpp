#include <iostream>
#include <fstream>
#include <print>

#define MAX_PATH 255

int main() {
    
    char filename[MAX_PATH + 1];

    std::print("Enter a file name and press ENTER: ");
    std::cin.getline(filename, MAX_PATH);
    std::ofstream file_out(filename);
    if (! file_out) {
        std::print("{0} could not be opened. \n", filename);
        return -1;
    }
    std::print("{0} was opened. \n", filename);
    file_out << "I read the" << "\n";
    file_out << "news today," << "\n";
    file_out << "ooh boy.";
    file_out.close();
    return 0;
}
