/* Section - 1.11 — Developing your first program
   CopyTyper - Swiss
   First program
    g++ -std=c++17 -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pedantic-errors 2.cpp
*/

#include <iostream>

int main() // note: this program hhas an error somewhere
{
    std::cout << "Enter an integer: ";

    int num{ }; // define variable num as an integer variable
    std::cin >> num; // get integer value from user's keyboard

    std::cout << "Double "<< num << " is: "  << num * 2 << '\n'; // use an expression to multiply num * 2 at the point where we are going to print it
    std::cout << "Triple "<< num << " is: " << num * 3 << '\n';

    return 0;
}