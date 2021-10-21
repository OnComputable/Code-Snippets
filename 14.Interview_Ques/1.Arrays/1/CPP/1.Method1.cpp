/* ----------------------------------------------------------------------
 * File Name: 1.Method1.cpp
 * Purpose       : https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
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

//Method: Using simple logic by calculating array’s elements itself.


#include <iostream>
using namespace std;


// Function for checking if pair for given sum x exists or not.
bool chkPair(int A[], int size, int x)		// It's input is Array, Size of Array, Sum required
{
	for(int i = 0; i < (size - 1); i++)	// i needs to travers only upto size-1 as last ele. will be covered by j
	{
		for(int j = (i+1); j < size; j++ )	// It's like this [ ][ ]...
							//                 i-> j -->   Comparing each pair.
		{
			if(A[i] + A[j] == x)	// if pair exists
			{
				cout << "Pair with a given sum " << x << " is (" << A[i] << ", " << A[j] << ")" << endl;
				return 1;
			}

		}
	}

	return 0;
}


int main(void)
{
	int A[] = {0, -1, 2, -3, 1};
	int x = -2;	
	int size = sizeof(A) / sizeof(A[0]);	// It's to get size of Array 

	// If pair exits and if doesn't printing message. 	if return value of chkPair == 1 then if is executed otherwise else
	// is executed.
	if(chkPair(A,size, x))
	{
		cout << "Valid pair exists" << endl;
	}
	else
	{
		cout << "No valid pair exists for " << x << endl;
	}

	return 0;
}
