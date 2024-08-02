// C++ program to illustrate the use of make_shared
#include <iostream>
#include <memory>

int main()
{
    // Creating shared pointers using std::make_shared
    std::shared_ptr<int> shr_ptr1 = std::make_shared<int>(42);
    std::shared_ptr<int> shr_ptr2 = std::make_shared<int>(24);
    // Accessing the values using the dereference operator
    // (*)
    std::cout << "Value 1: " << *shr_ptr1 << '\n';
    std::cout << "Value 2: " << *shr_ptr2 << '\n';
    // Using the assignment operator (=) to share ownership
    std::shared_ptr<int> shr_ptr3 = shr_ptr1;
    // Checking if shared pointer 1 and shared pointer 3
    // point to the same object
    if (shr_ptr1 == shr_ptr3) {
        std::cout << "shared pointer 1 and shared pointer 3 "
                "point to the same object."
             << '\n';
    }
    // Swapping the contents of shared pointer 2 and shared
    // pointer 3
    shr_ptr2.swap(shr_ptr3);
    // Checking the values after the swap
    std::cout << "Value 2 (after swap): " << *shr_ptr2 << '\n';
    std::cout << "Value 3 (after swap): " << *shr_ptr3 << '\n';
    // Using logical operators to check if shared pointers
    // are valid
    if (shr_ptr1 && shr_ptr2) {
        std::cout << "Both shared pointer 1 and shared pointer "
                "2 are valid."
             << '\n';
    }
    // Resetting a shared pointer
    shr_ptr1.reset();
}
