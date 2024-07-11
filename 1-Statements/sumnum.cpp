#include <iostream>
#include <print>

int main(){

    int num{0}, sum{0};

    //Do - While Loop - Iteration Statement
    do{
        // taking the input
        std::print("Enter a number to add: ");
        std::cin >> num;
        sum += num;
    }
    // Enter 0 to exit loop
    while (num > 0);   

    // displaying the sum
    std::print("\nThe sum is: {0} \n", sum);    

    return 0;
}