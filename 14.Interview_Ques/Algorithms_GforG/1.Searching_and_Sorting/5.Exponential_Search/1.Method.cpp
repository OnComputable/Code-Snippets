// https://www.geeksforgeeks.org/exponential-search/
// array must be sorted for this to apply
// Here we jump exponentially for checking if ele is
// present closer to that jump
// we jump and check with power of 2.

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int, int, int);
int exponentialSearch(int arr[], int, int);

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;

	int result = exponentialSearch(arr, n, x);

	(result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result ;

	return 0;
}


int exponentialSearch(int arr[], int n, int x)
{
	// if present at the positon provided
	if(arr[0] == x)
	{
		return 0;
	}

	// increasing value of i exponentially and checking for the range
	int i = 1;
	while(i < n && arr[i] <= x)
	{
		i <<= 1;
	}

	return binarySearch(arr, i/2, min(i, n-1), x); // min funciton is present in the header.
}

// Recursive bin Search code has greater complexity than 
// iterative one in terms of space.
// location of x in given arr[l....r] 

int binarySearch(int arr[], int l, int r, int x)
{
	if(r >= 1)
	{
		int mid = l + (r - l)/2;

		// if ele is present at pointed location
		if(arr[mid] == x)
		{
			return mid;
		}

		// if ele is smaller than pointed loc
		if(arr[mid] > x)
		{
			return binarySearch(arr, l, mid-l, x);
		}

		// ele is greater than pointed loc
		return binarySearch(arr, mid+l, r, x);
	}

	// if ele is not found
	return -1;
}
