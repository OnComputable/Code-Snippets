/* ----------------------------------------------------------------------
 * File Name: First_and_Last_Digit.cpp
 * Purpose       : https://www.codechef.com/problems/FLOW004
 * Creation Date :30-09-21
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
	int T, N;

	cin >> T;

	int sum_array[T];

	for(int i =0 ; i < T; i++)
	{
		int first_Digit = 0, last_Digit, sum = 0;
		cin >> N;
	
		last_Digit = N%10;
		while(N>9)
		{
			N /= 10;
		}
		
			first_Digit = N;
		sum_array[i] = (first_Digit + last_Digit);
	}

	for(int i = 0; i < T; i++)
	{
		cout << sum_array[i] << "\n";
	}

	return 0;
}
