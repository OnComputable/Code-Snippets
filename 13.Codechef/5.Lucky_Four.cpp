/* ----------------------------------------------------------------------
 * File Name: Lucky_Four.cpp
 * Purpose       :https://www.codechef.com/problems/LUCKFOUR
 * Creation Date :07-10-21
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
	int num, freq4;
	
	// Taking input for test cases.
	cin >> num;
	int array[num], freqArray[num];

	// taking input of numbers in array
	for(int i = 0; i < num; i++)
	{
		cin >> array[i];
	}	

	// We use some way to traverse array and count freq4
	
	for(int i = 0; i < num; i++)
	{
		int n = array[i];
		
		// I have taken each element of array into an integer and by using the couting logic
		// incremented the counter.
		while(n != 0)
		{
			if(n%10 == 4)
			{
				++freq4;
				n /= 10;
			}
			else
			{
				n /= 10;
			}
		}
		freqArray[i] = freq4;
		freq4 = 0;
	}


	// Printing the frequencies of 4 for each input number.
	for(int i = 0; i < num; i++)
	{
 		cout << freqArray[i] << "\n";
	}



	return 0;
}
