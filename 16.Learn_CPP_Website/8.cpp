/* Section - 1.4 Variable assignment and initialization
   CopyTyper - Swiss
    “end line” -- flushes the buffer at each occurence which is inefficient therefore use '\n'
*/

#include <iostream> // for std::cout and std::endl

int main()
{
    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line of the console
    std::cout << "My name is Alex." << std::endl;

    return 0;
}