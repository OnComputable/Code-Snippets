/* ----------------------------------------------------------------------
 * File Name: 4.Method4.cpp
 * Purpose       :
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

// Method 4: Using remainders of the elements less than x.
// This method is just an alternative to the above method
// I didn't checked deeper for all corner cases
// but I think it fails for the -ve values present in the array.
// And it also doesn't give better time complexity than previous method
// It might give better for space complexity but output might be wrong
// Frankly it's an overkill. I might be wrong but need to check
// Further.

#include <iostream>
using namespace std;

void printPairs(int a[], int n, int x)
{
	int i;
	int rem[x];


	//[`0`]`0`]`0`]`0`] initializing array with zeroes
	for(i = 0; i < x; i++)
	{
		rem[i] = 0;
	}

	for(i = 0; i < n; i++)
	{
		if(a[i] < x) // We only need numbers less than x as number greater than it is not usable [Until some -ve elements are present in the array]
		{
			rem[a[i] % x]++;
		}
	}

	// finding pairs like (1,5)(2,4)(3,3) as given
	// in example on website
	for(i = 1; i < x/2; i++)
	{
		if(rem[i] > 0 && rem[x - i] > 0)
		{
			cout << "Yes" << "\n";
			break;
		}
	}
	if(i >= x / 2)
	{
		if(x % 2 == 0)
		{
			if(rem[x / 2] > 1)
			{
				cout << "Yes" << "\n";
			}
			else
			{
				cout << "No" << "\n";
			}
		}
		else
		{
			if(rem[x / 2] > 0 && rem[x - x / 2] > 0)
			{
				cout << "Yes"<< "\n";
			}
			else
			{
				cout << "No\n";
			}
		}
	}
}

int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int n = 16;
	int arr_size = sizeof(A) / sizeof(A[0]);

	printPairs(A, arr_size, n);

	return 0;
}
