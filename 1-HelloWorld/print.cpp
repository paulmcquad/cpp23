// g++ -std=gnu++23  print.cpp -o print
// Output:
// Hello C++23!


#include <print>
 
int main()
{
    std::print("{0} {2}{1}!\n", "Hello", 23, "C++"); // overload (2)
 
}