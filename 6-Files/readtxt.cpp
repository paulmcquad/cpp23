#include <iostream>
#include <fstream>
#include <print>

#define COL_WIDTH 80

int main() {
    
    int c{0};   // input character
    char filename[FILENAME_MAX];
    char input_line[COL_WIDTH + 1];

    std::print("Enter a file name and press ENTER: ");
    std::cin.getline(filename, FILENAME_MAX);

    std::ifstream file_in(filename);

    if (! file_in) {
        std::print("{0} could not be opened. \n", filename);
        return -1;
    }

    while (true) {
        for(int i = 1; i <= 24 && ! file_in.eof(); ++i) {
            file_in.getline(input_line, COL_WIDTH);
            std::print("{0} \n", input_line);
        }
        if (file_in.eof()) {
            break;
        }
        std::print("More? (Press 'Q' and ENTER to quit)");
        std::cin.getline(input_line, COL_WIDTH);
        c = input_line[0];
        if (c == 'Q' || c == 'q') {
            break;
        }
    }
    return 0;
}
