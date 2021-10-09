/* ----------------------------------------------------------------------
 * File Name: MyTry.cpp
 * Purpose       :Find a majority element in an array of size ‘n’
 * Creation Date :09-10-21
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
	int arr[9] = {3,3,4,2,4,4,2,4,4};	// Hardcoded array:)

	int n = 9/2;	// condition for frequency to be majority element

	int count = 0, maxCount = 0, maxIndex;	

	// Outer loop to hold 1 element at index i and to compare with 
	// other element and adding it to count for later comparison
	// with maxcount for finding maximum frequency element.
	for(int i = 0; i < 9; i++)
	{
		// Inner loop for comparison
		for(int j = 0; j < 9; j++)
		{
			if(arr[i] == arr[j])
			{
				count++; // counter incresed for frequency
			}
		}

		if(count > maxCount)
		{
			maxCount = count; // Getting ele with max freq.
			maxIndex = i;	// returning it's index
		}

	}

	// If it is mostly occuring element.
	if(maxCount > n)
	{
		cout << arr[maxIndex] << endl;
	}
	else
	{
		cout << "No such element exists\n";
	}

	return 0;
}
