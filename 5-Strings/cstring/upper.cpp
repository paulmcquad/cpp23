#include <iostream>
#include <string>
#include <print>

void convert_to_upper(std::string& s);

int main() {
    std::string s;

    std::print("Enter string to convert & press ENTER: ");
    std::getline(std::cin, s);

    convert_to_upper(s);
    std::print("The converted string is: {0} \n", s);
    return 0;
}

void convert_to_upper(std::string& s) {
    for (size_t i=0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
}
