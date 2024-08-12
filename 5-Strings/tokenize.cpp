#include <iostream>
#include <cstring>

int main() {
    
    char the_string[81], *p;
    
    std::cout << "Input a string to parse: ";
    std::cin.getline(the_string, 81);
    p = strtok(the_string, ", ");
    while (p != nullptr) {
          std::cout << p << '\n';
          p = std::strtok(nullptr, ", ");
    }      
    return 0;
}
