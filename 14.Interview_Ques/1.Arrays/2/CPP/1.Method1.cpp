// https://www.geeksforgeeks.org/majority-element/

#include <bits/stdc++.h>
using namespace std;

void findMajority(int arr[], int n); // fun prototype

int main(void)
{
	int arr[] = { 1, 1, 2, 1, 3, 5, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);	// to get size of array

	findMajority(arr, n);	// function calling

	return 0;
}

void findMajority(int arr[], int n) // function definition
{
	int maxCount = 0;	// for maximum freq from array
	int index = -1;	// sentil [flag value, or a signal]
	// but in our implementation we did not use it.
	for(int i = 0; i < n; i++)
	{
		int count = 0;	// count for each element freq counting
		for(int j = 0; j < n; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
		}

		// if maxcount is less replace with current count
		if(count > maxCount)
		{
			maxCount = count;
			index = i;	// return index for printing
		}
	}

	// printing if major element exists.
	if(maxCount > n/2)
	{
		cout << arr[index] << endl;
	}
	else
	{
		cout << "No majority Element" << endl;
	}
}
