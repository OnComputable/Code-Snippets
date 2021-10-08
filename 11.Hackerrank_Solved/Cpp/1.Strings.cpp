/* ----------------------------------------------------------------------
 * File Name: 1.Strings.cpp
 * Purpose       :https://www.hackerrank.com/challenges/c-tutorial-strings/problem
 * Creation Date :08-10-21
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
#include <string>
using namespace std;

int main()
{
	string a,b,c;
	int len_a, len_b;
	cin >> a;
	cin >> b;
	
	// Printing size of strings
	len_a = a.size();
	len_b = b.size();

	cout << len_a << " " << len_b << endl;

	// Concatinating a and b and printing
	c = a+b;
	
	cout << c << endl;

	// Swapping the characters.
	
	char a0 = a[0];
	char b0 = b[0];

	a[0] = b0;
	b[0] = a0;

	cout << a << " " << b << endl;



	return 0;
}
