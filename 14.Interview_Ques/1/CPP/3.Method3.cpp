/* ----------------------------------------------------------------------
 * File Name: 3.Method3.cpp
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

//Method 3: Hashing.

// The algo works on a simple logic " Result_sum - X " and by taking 
// help of data structure Hash table.:>

// Have to use "g++ -std=c++17 3.Method3.cpp" 
// for compilation old standard may not support 
// "unordered_set"
#include <bits/stdc++.h>
using namespace std;

void printPairs(int arr[], int arr_size, int sum)
{
	unordered_set<int> s;		// Easier to do it this way using "unordered_set"


	for(int i = 0; i < arr_size; i++)
	{	
		int temp = sum - arr[i];	// Storing in temp for comparing later

		if(s.find(temp) != s.end())	// if temp is in the array then print. i.e 
			// s.find(temp) does not return NULL as s.end() means NULL and no value is found
			// This is a little confusing but look it with the perspective of return values.
		{
			cout << "Pair with given sum "<< sum << " is (" << arr[i] << "," << temp << ")" << endl;
		}

		s.insert(arr[i]);	// If temp is not found then insert temp into the set
	}
}


int main(void)
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int n = 16;
	int arr_size = sizeof(A) / sizeof(A[0]);

	printPairs(A, arr_size, n); // Passing values to the function.

	return 0;
}

