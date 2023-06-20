/* Section - 1.9 — Introduction to literals and operators
   CopyTyper - Swiss
   To further highlight the difference between literals and variables, let’s examine this short program:
    g++ -std=c++17 -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pedantic-errors 2.cpp
*/

#include <iostream>

int main()
{
    std::cout << 5 << '\n'; // print the value of a literal

    int x { 5 };
    std::cout << x << '\n'; // print the value of a variable
    return 0;
}