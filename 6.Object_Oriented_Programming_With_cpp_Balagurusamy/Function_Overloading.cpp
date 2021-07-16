/* ----------------------------------------------------------------------
 * File Name: Function_Overloading.cpp
 * Purpose       :
 * Creation Date :15-07-21
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

using namespace std;

int volume(int);
double volume(double, int);
long volume(long, int, int);

int main()
{
	cout << volume(10) << "\n";
	cout << volume(2.5, 8) << "\n";
	cout << volume(100L, 75, 15) << "\n";

	return 0;
}

int volume(int s)
{
	return(s*s*s);
}

double volume(double r, int h)
{
	return(3.14519*r*r*h);
}

long volume(long l, int b, int h)
{
	return(l*b*h);
}
