/* ----------------------------------------------------------------------
 * File Name: Add_and_Sub.cpp
 * Purpose       :
 * Creation Date :30-07-21
 * Modified Date :
 * Created By    : Swiss
 * ----------------------------------------------------------------------
 * VIM Commands : 1) To open multiple files in tab without exiting->
 * 		   :tabedit Path_or_filename(if in same folder)
 * 		  2) To switch between tabs -> gt (in visual mode)
 * ----------------------------------------------------------------------
 * Cpp Commands : 1) g++-9 -std=c++17 -Wall -Weffc++ -Wextra 
 *		     -Wsign-conversion -Werro FileName.cpp
 * ----------------------------------------------------------------------
*/

#include <iostream>

int main()
{
	int num1{0}, num2{0};

	std::cout << "Enter the 2 numbers: \n";
	std::cin >> num1;
	std::cout << "Enter another integer: \n";
	std::cin >> num2;
	std::cout << num1 <<" + "<<num2 << " is "<<num1+num2 <<"\n";
	std::cout << num1 <<" - "<<num2 << " is "<<num1-num2 <<"\n";


	return 0;
}
