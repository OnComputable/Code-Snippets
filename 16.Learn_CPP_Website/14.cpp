/* Section - 1.6 — Uninitialized variables and undefined behavior
   CopyTyper - Swiss
   1.5 Introduction to iostream: cout, cin, and endl
   Let’s look at a simple example of implementation-defined behavior:
    g++ -std=c++17 -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pedantic-errors 2.cpp
*/

#include <iostream>

int main()
{
    std::cout << sizeof(int); // print how many bytes of memory an int value takes
    return 0;
}