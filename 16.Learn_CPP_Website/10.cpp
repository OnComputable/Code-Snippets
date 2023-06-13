/* Section - 1.4 Variable assignment and initialization
   CopyTyper - Swiss
   1.5 Introduction to iostream: cout, cin, and endl
   std::cin
*/

#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{ }; // define variable x to hold user input  (and zero-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';
    return 0;
}