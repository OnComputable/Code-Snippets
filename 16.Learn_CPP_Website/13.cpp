/* Section - 1.6 — Uninitialized variables and undefined behavior
   CopyTyper - Swiss
   1.5 Introduction to iostream: cout, cin, and endl
   If your compiler won’t let you compile and run the above program (e.g. because it treats the issue as an error), here is a possible solution to get around this issue:
    g++ -std=c++17 -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pedantic-errors 2.cpp
*/

#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to tricl the compiler into thinking variable x is used
{

}

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized

    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen (who knows what we'll get, because x is unitialized)
    std::cout << x << '\n';

    return 0;
}