#include <iostream>
#include <print>

int main() {

    // Int Braced Initialization - C++11
    int  i{0}, n{0};

    // Prompt and input value of n.
    std::print("Input a number and press ENTER: ");
    std::cin >> n;
    i = 1;

    while (i <= n) {  // While i less than or equal n,
       std::print("{0} " "",  i);   //   Print i,
        i++;          //   Add 1 to i.
    }
    return 0;

}

