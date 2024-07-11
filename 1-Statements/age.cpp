#include <iostream>
#include <print>

int main() {
	
    // Int Braced Initialization - C++11  
    int age{0};

    std::print("Enter an age and press ENTER: ");
    std::cin >> age;

    // if / else if - Condition Statement
    if(age > 18){
        std::print("Person is an adult.\n");
    } else if (age > 12 && age < 18) { 
        std::print("Person is a teenager.\n");
    } else {
        std::print("Person is a child.\n");
    }
    return 0;
}
