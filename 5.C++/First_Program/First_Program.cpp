#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int num{ 0 };	// define variable num as an integer variable
	std::cin >> num;	// get integer value from user's keyboard

	std::cout << "Double that number is: " << num * 2 << '\n'; // use an expression to multiply num * 2 at the point where we are going to print it

	std::cout << "Triple that number is: " << num * 3 << '\n';

	return 0;
}
