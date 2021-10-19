//https://www.geeksforgeeks.org/jump-search/


#include <bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int, int);

int main(void)
{
	int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610 };
	int x = 55;
	int n = sizeof(arr) / sizeof(arr[0]);

	// finding index for x if it exists in array
	int index = jumpSearch(arr, x, n);

	// printing where x exists
	cout << "\nNumber " << x << " is at index " << index;

	return 0;
}


int jumpSearch(int arr[], int x, int n)
{
	// size of jump
	int step = sqrt(n); // by doing this for above array we get '4' as block size to be jumped.

	int prev = 0;

	while(arr[min(step, n) - 1] < x)
	{
		prev = step;
		step += sqrt(n); 
		if(prev >= n)
		{
			return -1;
		}
	}


	while(arr[prev] < x)
	{
		prev++;

		if(prev == min(step, n))
		{
			return -1;
		}

	}

	// if element is found
	if(arr[prev] == x)
	{
		return prev;
	}

	return -1;

}
