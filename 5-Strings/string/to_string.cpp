#include <string>
#include <print>
 
int main()
{
    for (const double f : {1.23456789555555, 23.43, 1e-9, 1e40, 1e-40, 123456789.0})
    {
         std::print("print:\t\t{0}\n", (std::to_string(f)));
    }
}