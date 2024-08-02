// C++ Program to implement unique_ptr 
#include <iostream> 
#include <memory> 

struct A { 
	void printA() { std::cout << "A struct...." << '\n'; } 
	//~A() { std::cout << "A Dest...." << '\n'; } 
}; 
int main() 
{ 
	std::unique_ptr<A> p1(new A); 
	p1->printA(); 
	
	// displays address of the containing pointer 
	std::cout << p1.get() << '\n'; 

	// now address stored in p1 should get copied to p2 
	std::unique_ptr<A> p2 = std::move(p1); 

	p2->printA(); 
	std::cout << p1.get() << '\n'; 
	std::cout << p2.get() << '\n'; 


	return 0; 
}
