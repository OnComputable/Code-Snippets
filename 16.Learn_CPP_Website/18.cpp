/* Section - 1.x Chapter 1 summary and quiz
   Writer - Swiss
   First program
   g++ -std=c++17 -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pedantic-errors 2.cpp
*/

#include <iostream>

int main()
{
    int num1{ }, num2{ };
    std::cout << "Enter an integer: ";
    std::cin >> num1;
    std::cout << "Enter another integer: ";
    std::cin >> num2;

    std::cout <<  num1 << " + " << num2 << " is " << num1 + num2 << '\n';
    std::cout <<  num1 << " - " << num2 << " is " << num1 - num2 << '\n';

    return 0;
}