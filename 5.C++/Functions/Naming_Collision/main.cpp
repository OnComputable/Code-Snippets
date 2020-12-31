/* ----------------------------------------------------------------------
 * File Name: main.cpp
 * Purpose       : Naming collissin due to a.cpp
 * Creation Date :31-12-20
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
#include<iostream>

void myFcn(int x)
{
	std::cout << 2 * x;
}

int main()
{
	return 0;
}
