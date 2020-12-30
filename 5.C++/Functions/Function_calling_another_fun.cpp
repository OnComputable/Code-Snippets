//Note:The template file will be copied to a new file. When you change the code of the template file you can create new file with this base code. 
#include<iostream> // for std::cout

void doB()
{
    std:: cout << "In doB()\n";
}

void doA()
{
    std:: cout << "starting doA()\n";
    
    doB();
    
    std:: cout << "Ending doA()\n";
    
}

// Definition of function main()
int main()
{
    std:: cout << "Starting main()\n";
    
    doA();
    
    std:: cout << "Ending main()\n";
    
    return 0;
}