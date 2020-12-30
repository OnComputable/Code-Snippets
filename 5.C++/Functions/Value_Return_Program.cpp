//Note:The template file will be copied to a new file. When you change the code of the template file you can create new file with this base code. 

#include <iostream>

// int is a return type 
int returnfive()
{
    return 5;
}

int main()
{
    std:: cout << returnfive() << '\n';
    std:: cout << returnfive() + 2 << '\n';
    
    returnfive(); // nothing is done with this  value main() just returns
    
    return 0;
}