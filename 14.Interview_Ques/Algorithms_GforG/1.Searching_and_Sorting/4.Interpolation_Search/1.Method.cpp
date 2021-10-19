// https://www.geeksforgeeks.org/interpolation-search/

// Improvement over binary search through a certain formula
// The condition to apply this is very specific
// Cond 1 - The array must be sorted
// Cond 2 - The array must be uniformaly distributed i.e. distance between each element should be of a certain Arithematic progression for getting better result than Binary Search

// The other comparison and how efficiency of this algo decreses according to input and array element uniformity is given as ffollows : https://www.youtube.com/watch?v=hF9iJEPegNc



#include <bits/stdc++.h>
using namespace std;

int interpolationSearch(int arr[], int, int, int);


int main(void)
{
	int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int x = 18;	// element to be searched
	int index = interpolationSearch(arr, 0, n-1, x);

	if(index != -1)	// element found
	{
		cout << "Element found at index " << index;
	}
	else // element not found
	{
		cout << "Element not found.";
	}

	return 0;
}

int interpolationSearch(int arr[], int lo, int hi, int x)
{
	int pos;

	if(lo <= hi && x >= arr[lo] && x <= arr[hi])
	{
		pos = lo + (((double)(hi-lo) / (arr[hi] - arr[lo])) * (x-arr[lo]));	// formula as mentioned in video.


		// if element is the element currently pointed.
		if(arr[pos] == x)
		{	
			return pos;
		}

		// if element is less than currently pointed
		if(arr[pos] < x)
		{
			return interpolationSearch(arr, pos + 1, hi, x);
		}

		// if element is more than currently pointed
		if(arr[pos] > x)
		{
			return interpolationSearch(arr, lo, pos -1, x);
		}
	}

	return -1;
}
