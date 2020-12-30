//Note:The template file will be copied to a new file. When you change the code of the template file you can create new file with this base code. 
// In cpp Nested function are not allowed so the right 
// way of getting same effect is as follows
#include <iostream>

int foo()
{
    std:: cout << "foo!\n";
    return 0;
}

int main()
{
    foo();
    
    return 0;
}

