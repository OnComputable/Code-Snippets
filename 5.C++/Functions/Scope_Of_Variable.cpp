#include <iostream>

// x is not in scope anywhere in this function
void doSomething()
{
	std::cout << "Hello!\n";
}

int main()
{
	// x can not be used here because it's not in scope yet
	
	int x{ 0 }; // x enters scope here and can now be used

	doSomething();

	return 0;
} // x goes out of scope here and can no longer be used
