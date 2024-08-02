// C++ program to demonstrate std::shared_ptr
#include <iostream>
#include <memory>

class A {
public:
    void show() { std::cout << "A::show();" << '\n'; }
};

int main()
{
    // creating a shared pointer and accessing the object
    std::shared_ptr<A> p1(new A);
    // printting the address of the managed object
    std::cout << "P1 -> " << p1.get() << '\n';
    p1->show();
  
    // creating a new shared pointer that shares ownership
    std::shared_ptr<A> p2(p1);
    p2->show();
  
    // printing addresses of P1 and P2
    std::cout << "P1 -> " << p1.get() << '\n';
    std::cout << "P2 -> " << p2.get() << '\n';
  
    // Returns the number of std::shared_ptr objects
    // referring to the same managed object.
    std::cout << "Reference Counter: " << p1.use_count() << '\n';
    std::cout << "Reference Counter: " << p2.use_count() << '\n';
  
    // Relinquishes ownership of p1 on the object
    // and pointer becomes NULL
    p1.reset();
    std::cout << "P1 -> " << p1.get() << '\n';
    std::cout << "Reference Counter: " << p2.use_count() << '\n';
    std::cout << "P2 -> " << p2.get() << '\n';
    /*
    These lines demonstrate that p1 no longer manages an
    object (get() returns nullptr), but p2 still manages the
    same object, so its reference count is 1.
        */
    return 0;
}
