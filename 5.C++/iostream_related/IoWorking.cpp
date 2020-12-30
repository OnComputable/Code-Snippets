/* 
#include <iostream> 	// for std::cout

int main()
{
	std::cout << 4;	// print 4 to console

	return 0;
}

*/

/*

#include <iostream>	// for std::cout

int main()
{	
	int x{ 5 };	// define integer variable x, initialized with value 5
	std::cout << x;	// print value of x(5) to console

	return 0;
}

*/

/*
#include <iostream>	// for std::cout

int main()
{
	std::cout << "Hello" << " world!";

	return 0;
}
*/

/*
#include <iostream>	// for std::cout

int main()
{
	int x{ 5 };
	std::cout << "x is equal to: " << x;
		
	return 0;
}
*/

/*
#include <iostream>	// for std::cout

int main()
{
	std::cout << "Hi!";
	std::cout << "My name is Alex.";
	
	return 0;
}
*/

/*
#include <iostream>	// for std::cout and std::endl

int main()
{
	std::cout << "Hi!" << std::endl;	// std::endl will cause cursor to move to the next line of the console
	std::cout << "My name is Alex."	<< std::endl;
		
	return 0;
}
*/

/*
#include <iostream>	// for std::cout

int main()
{
	int x{ 5 };
	std::cout << "x is equal to: " << x << '\n';	// using '\n' standalone
	std::cout << "And that's all, folks!\n"; // Using '\n' embedded into a double-quoted place of text (note: no single quotes when used this way)

	return 0;
}
*/

/*
#include <iostream>	// for std::cout and std::cin

int main()
{
	std::cout << "Enter a number: ";	// ask user for a number
	int x{ };	// define variable x to hold user input (and zero-initialize it)
	std::cin >> x;	// get number from keyboard and store it in variable x
	std::cout << "You entered " << x << '\n';

	return 0;
}
*/

#include <iostream>	// for std::cout and std::cin

int main()
{
	std::cout << "Enter a number: ";	// ask user for a number
	int x{};	// define variable x to hold user input
	std::cin >> x;	// get number from keyboard and store it in variable x
	std::cout << "You entered " << x << '\n';

	return 0;
}
