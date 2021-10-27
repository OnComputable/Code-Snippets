/*
 *
 * https://www.geeksforgeeks.org/pigeonhole-sort/
 *
 */

#include <bits/stdc++.h>
using namespace std;

void pigeonHole(int [], int);
void printArray(int [], int);

int main(void)
{
	int arr[] = { 8, 3, 2, 7, 4, 6, 8 };
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array before Sorting: \n";
	printArray(arr, n);

	pigeonHole(arr, n);

	cout << "\nSorted array is: \n";
	printArray(arr, n);

	return 0;
}

void pigeonHole(int arr[], int n)
{
	// find min and max values in arr[]
	int min = arr[0], max = arr[0];

	for(int i = 1; i < n; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}	
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}

	// finding range here range would be 7
	int range = max - min  + 1;

	vector<int> holes[range];

	// traverse through input array and put every ele in its respective hole
	for(int i = 0; i < n; i++)
	{
		holes[arr[i]-min].push_back(arr[i]);
	}

	// now traverse the holes i.e. vector above and take it's elements and 
	// put it in array
	int index = 0;

	for(int i = 0; i < range; i++)
	{
		vector<int>::iterator it;	// iterator is defined in library
		for(it = holes[i].begin(); it != holes[i].end(); ++it)
		{
			arr[index++] = *it;
		}
	}
}


void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
