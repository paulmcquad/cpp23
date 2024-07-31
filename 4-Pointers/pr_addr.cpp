#include <stdlib.h>
#include <print>

int main()
{

    int a{2}, b{3}, c{4};
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    //std::print("Value of pointer pa is: {0} \n", (void*)pa);

    // Casting Operators in C++
    // prefer static_cast because it's safer because it only lets you do "sensible" casts
    std::print("Value of pointer pa is: {0} \n", static_cast<void*>(pa));
    std::print("Value of pointer pa is: {0} \n", static_cast<void*>(pb));
    std::print("Value of pointer pa is: {0} \n", static_cast<void*>(pc));

    std::print("The values of a, b, and c are: ");
    std::print("{0}, {1}, {2} \n",  a, b, c);
    
    return 0;
}
