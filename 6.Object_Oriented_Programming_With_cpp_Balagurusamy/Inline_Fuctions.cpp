/* ----------------------------------------------------------------------
 * File Name: Inline_Fuctions.cpp
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

inline float mul(float x, float y)
{
	return (x*y);
}

inline double div(double p, double q)
{
	return (p/q);
}

int main()
{
	float a = 12.345;
	float b = 9.82;

	cout << mul(a,b) << "\n";
	cout << div(a,b) << "\n";


	return 0;
}

