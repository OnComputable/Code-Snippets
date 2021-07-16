/* ----------------------------------------------------------------------
 * File Name: Average_of_two_numbers.cpp
 * Purpose       :
 * Creation Date :01-07-21
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
	float number1, number2, sum, average;

	cout << "Enter two numbers: ";
	cin >> number1;
	cin >> number2;

	sum = number1 + number2;
	average = sum/2;

	cout << "Sum = " << sum << "\n";
	cout << "Average = " << average << "\n";
	

	return 0;
}
