//https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/


// Simple solution ad hoc

#include <bits/stdc++.h>	// It includes all header files c++ have
// It makes your code unecessarily bloated :(

using namespace std;

int getOccurrence(int arr[], int); // function prototype


int main()
{
	int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2 };
	int n = sizeof(arr) / sizeof(arr[0]); // getting array size

	cout << getOccurrence(arr, n); // function calling

	return 0;
}


// function defn
int getOccurrence(int arr[], int arr_size)
{
	// fixing index for comparing
	for(int i = 0; i < arr_size; i++)
	{
		int count = 0;	// count is local to this loop

		// for iterating over array for each comparison 
		// of outer loop and return when an odd occuring 
		// element is found
		for(int j = 0; j < arr_size; j++)
		{
			if(arr[i] == arr[j])		
			{
				count++;
			}
		}
		if(count%2 != 0)
		{		
			return arr[i];
		}
	}

	return -1; // when no such element is found.

}
