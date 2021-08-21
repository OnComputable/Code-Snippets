/* ----------------------------------------------------------------------
 * File Name: Function_Demo.cpp
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

void doPrint()
{
	std::cout << "In doPrint()\n";
}

int main()
{
	std::cout << "Starting main()\n";
	doPrint();

	std::cout << "Ending main()\n";

	return 0;
}
