/* Section - 1.6 — Uninitialized variables and undefined behavior
   CopyTyper - Swiss
   1.5 Introduction to iostream: cout, cin, and endl
   Using the values of uninitialized variables can lead to unexpected results. Consider the following short program:
    g++ -std=c++17 -Wall -Weffc++ -Wextra -Wsign-conversion 2.cpp
*/

#include <iostream>

int main()
{

    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized
    return 0;
}