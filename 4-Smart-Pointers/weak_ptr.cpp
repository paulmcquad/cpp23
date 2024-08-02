// C++ program to illustrate the use of weak_ptr
#include <iostream>
#include <memory>

using namespace std;

// declaring a dummy object
class Object {
public:
	Object(int value) : data(value)
	{
		cout << "Object created with value: " << data
			<< '\n';
	}

	~Object()
	{
		cout << "Object destroyed with value: " << data
			<< '\n';
	}
	int data;
};

// driver code
int main()
{
	// creating shared pointer with resource ownership
	shared_ptr<Object> sharedObjectA = make_shared<Object>(42);

	// creating weak pointer to the previously created
	// shared objects
	weak_ptr<Object> weakObjectA = sharedObjectA;

	// Access objects using weak_ptr
	if (!weakObjectA.expired()) {
		cout << "The value stored in sharedObjectA:"
			<< (*weakObjectA.lock()).data << '\n';
	}

	// deleting object
	sharedObjectA.reset();
	cout << "End of the Program" << '\n';

	return 0;
}
