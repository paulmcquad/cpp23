#include <iostream>
#include <print>

// Functions must be declared before being used.
int Square(int n);
int Cube(int);

int main()
{

    std::print("The square of 27 is {0}\n", Square(27));
    std::print("The cube of 27 is {0}\n", Cube(27));

    return 0;
}

// Function definition
int Square(int n)
{
    return n * n;
}

// Function definition
int Cube(int n)
{
    return n * n * n;
}