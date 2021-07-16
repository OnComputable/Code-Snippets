/* ----------------------------------------------------------------------
 * File Name: Default_Arguments.cpp
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

int main()
{
	float amount;

	float value(float p, int n, float r=0.15);
	void printline(char ch='*', int len=40);

	printline();

	amount = value(5000.00,5);

	cout << "\n	Final value = " << amount << "\n\n";

	printline('=');

	return 0;
}

float value(float p, int n, float r)
{
	int year = 1;
	float sum = p;

	while(year <= n)
	{
		sum = sum*(1+r);
		year = year+1;
	}
	return(sum);
}

void printline(char ch, int len)
{
	for(int i = 1; i <=len; i++) 
	{
		cout << ch;
	}
	cout << endl;
}
