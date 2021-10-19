//https://www.geeksforgeeks.org/binary-search/

// Method 1 : Recursive implementation of BSearch

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int, int, int);

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	int result = binarySearch(arr, 0, n - 1, x);

	(result == -1) ? cout <<"Element is not present in array": cout << "Element is present at index " << result ;

	return 0;
}

int binarySearch(int arr[], int l, int r, int x)
{
	if(r >= l)
	{
		int mid = l +(r-1) / 2;  // getting at middle element

		// if array to be found is middle itself
		if(arr[mid] == x)
		{
			return mid;
		}

		if(arr[mid] > x)
		{
			return binarySearch(arr, l, mid - 1, x); // x is smaller than middle then recursively apply binarysearch on left side of middle
		}

		return binarySearch(arr, mid + 1, r, x);	// x is present at right side of middle element
	}

	return -1;	// element is not present in array.
}
