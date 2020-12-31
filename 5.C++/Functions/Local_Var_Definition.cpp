#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int x{};	// x defined here
	std::cin >> x;	// and used here

	std::cout << "Enter another integer: ";
	int y{};	// y defined here
	std::cin >> y;	// and used here

	int sum{ x + y }; // sum defined here
	std::cout << "The sum is: " << sum << '\n'; // and used here

	return 0;
}

// BEST PRACTICE :: Define ur local var as close to their first use as reasonable
