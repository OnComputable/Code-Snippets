/* Section - 1.4 Variable assignment and initialization
   CopyTyper - Swiss
   1.5 Introduction to iostream: cout, cin, and endl
   std::cin -- Just like it is possible to output more than one bit of text in a single line, it is also possible to input more than one value on a single line:
*/

#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{ }; // define variable x to hold user input (and zero-initialize it)
    int y{ }; // define variable y to hold user input (and zero-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively
    
    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}
