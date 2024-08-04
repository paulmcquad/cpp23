#include <iostream>
#include <string>

void convert_to_upper(std::string& s);

int main() {
    std::string s;

    std::cout << "Enter string to convert & press ENTER: ";
    std::getline(std::cin, s);

    convert_to_upper(s);
    std::cout << "The converted string is:" << '\n'
    << s << '\n';
    return 0;
}

void convert_to_upper(std::string& s) {
    for (size_t i=0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
}
