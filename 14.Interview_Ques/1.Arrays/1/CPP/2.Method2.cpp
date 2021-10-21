/* ----------------------------------------------------------------------
 * File Name: 2.Method2.cpp
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

//Method: Sorting and Two-Pointers technique
// The following method is to find if  pair exits or not it doesn't show which pair 
// gives the result..


#include <bits/stdc++.h>
using namespace std;

bool hasArrayTwoCandidates(int A[], int arr_size, int sum);	// fun prototype for checking if pair exists.

int main(void)
{
	int A[] = { 1, 4, 45, 6, 10, -8 };
	int n = 16;
	int arr_size = sizeof(A) / sizeof(A[0]);	// To get size of array.

	// Printing if pair exists or not.
	if(hasArrayTwoCandidates(A, arr_size, n))
	{
		cout << "Array has two elements with given sum" << endl;
	}
	else
	{
		cout << "Array doesn't have two elements with given sum" << endl;
	}

	return 0;
}

// fun definition 
bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
{
	int l, r;	// left and right two indexes at leftmost and rightmost sides of array.

	sort(A, A + arr_size);	// sorting method present in c++ itself. 

	l = 0;	// At the start
	r = arr_size - 1;	// At the end

	// until l<r
	while(l < r)
	{
		if(A[l] + A[r] == sum)	//  if l and r indexes element addition produces result then return
		{
			return 1;
		}
		else if(A[l] + A[r] < sum)	
		{
			l++;
		}
		else
		{
			r--;
		}
	}
	return 0;
}
