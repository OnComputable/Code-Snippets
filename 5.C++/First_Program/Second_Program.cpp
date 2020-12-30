#include <iostream>

int main()
{
	int integer1{0}, integer2{0};
	std::cout << "Enter an integer: ";
	std::cin >> integer1;
	std::cout << "Enter another integer: ";
	std::cin >> integer2;

	std::cout << integer1 << " + " << integer2 << " is " << integer1 + integer2 << ".\n";
	std::cout << integer1 << " - " << integer2  << " is " << integer1 - integer2 << ".\n";

	return 0;
}

// good solution

/*
#include <iostream>

int main()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;

	int y{};
	std::cout << "Enter another integer: ";
	std::cin >> y;

	std::cout << x << " + " << y << " is " << x + y << ".\n";
	std::cout << x << " - " << y << " is " << x - y << ".\n";
	
	return 0;
}
*/


