//https://www.geeksforgeeks.org/binary-search/

// Method2: Iterative approach to binary-search

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int, int, int);

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	int result = binarySearch(arr, 0, n - 1, x);

	(result == -1) ? cout << "Element is not present in the array" : cout<< "Element is present at index "<< result;

	return 0;
}


int binarySearch(int arr[], int l, int r, int x) // l-leftmost, r-rightmost
{
	while(l <= r)
	{
		int  m = l + (r - l) / 2;

		// x is present at mid
		if(arr[m] == x)
		{
			return m;
		}

		// x is greter than  x
		if(arr[m] < x)
		{
			l = m+1;
		}

		// x is smaller than x
		else
		{
			r = m -1;
		}
	}

	// x is not present in array
	return -1;
}
