#include <iostream>
#include <print>

int main() {
	
    // Int Braced Initialization - C++11  
    int day{0};

    std::print("Enter a number (1 - 7): ");
    std::cin >> day;

    // Switch - Condition Statement
    switch (day) {
    case 1:
        std::print("Monday\n");
        break;
    case 2:
        std::print("Tuesday\n");
        break;
    case 3:
        std::print("Wednesday\n");
        break;
    case 4:
        std::print("Thursday\n");
        break;
    case 5:
        std::print("Friday\n");
        break;
    case 6:
        std::print("Saturday\n");
        break;
    case 7:
        std::print("Sunday\n");
        break;
    default:
        std::print("Invalid\n");
    }

    return 0;
}
