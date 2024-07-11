#include <iostream>
#include <print>

// Carl Friedrich Gauss Summation:
// Returns Summation of first n natural numbers 
constexpr int Summation(const int n);

int main() {

    // Int Braced Initialization - C++11  
    int sum{0};

    std::print("Enter a number: ");
    std::cin >> sum;
    std::print("1 to {1} = {0} \n", Summation(sum), sum);
   
    return 0;

}

constexpr int Summation(const int n)
{
    return n * (n + 1) / 2;
}