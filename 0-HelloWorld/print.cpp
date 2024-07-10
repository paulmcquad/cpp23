// g++ -std=gnu++23  print.cpp -o print
// Output:
// Hello World C++23!


#include <print>
 
int main()
{
    std::print("{0} {2}{1}!\n", "Hello World", 23, "C++"); // overload (2)
 
}