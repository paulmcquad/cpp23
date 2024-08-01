#include <stdlib.h>
#include <print>

int main()
{

    int a{2}, b{3}, c{4};

    //Define 3 pointer variables
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    //std::print("Value of pointer pa is: {0} \n", (void*)pa);

    // Casting Operators in C++
    // prefer static_cast because it's safer because it only lets you do "sensible" casts
    //std::print("Value of pointer pa is: {0} \n", static_cast<void*>(pa));
    //std::print("Value of pointer pa is: {0} \n", static_cast<void*>(pb));
    //std::print("Value of pointer pa is: {0} \n", static_cast<void*>(pc));

    //std::print("The values of a, b, and c are: ");
    //std::print("{0}, {1}, {2} \n",  a, b, c);

    // What pointers look like:
    std::print("| Value: {0} | Address: {1} |\n",a , static_cast<void*>(pa));
    std::print("| Value: {0} | Address: {1} |\n",b , static_cast<void*>(pb));
    std::print("| Value: {0} | Address: {1} |\n",c , static_cast<void*>(pc));



    //Same as:  int* pa = &a;
    int* test1;
    test1 = &a;


    // Dereference: Output the value of a with the pointer test1
    // Same as a{67};
    *test1 = 67; // Assign 67 to int pointed to by test1 (a).
    std::print("| Test - 67 / 90 |\n");
    std::print("| Value: {0} | Address: {1} |\n",a, static_cast<void*>(test1));

    // Dereference: Output the value of a with the pointer pa
    // Same as a{90};
    *pa = 90; // Assign 90 to int pointed to by pa (a).
    std::print("| Value: {0} | Address: {1} |\n",a, static_cast<void*>(pa));

    return 0;
}
