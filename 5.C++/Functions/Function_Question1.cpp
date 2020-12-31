#include <iostream>

int doubleNumber(int x)
{
	return 2 * x;
}

int main()
{
	int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	std::cout << "The double of entered number is : " << doubleNumber(x) << '\n';

	return 0;
}
