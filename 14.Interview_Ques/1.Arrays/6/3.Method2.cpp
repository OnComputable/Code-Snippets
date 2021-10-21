/*https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/
 *
 * Method2 : Use two indexes to traverse
 *	The time complexity of this algo  is O(n)
 *	Only by one iteration over the array the array is seggregated.
 */

#include <bits/stdc++.h>
using namespace std;

void sort(int [], int size);
void printArray(int [], int size);

int main(void)
{
	int arr[] = {0, 1, 0, 1, 1, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, n);

	printArray(arr, n);

	return 0;
}


void printArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}


void sort(int arr[], int size)
{
	int left = 0, right = size - 1;

	while(left < right)
	{
		while(arr[left] == 0 && left < right) // until 0's go right
		{
			left++;
		}

		while(arr[right] == 1 && left < right)	// until 1's go left
		{
			right--;
		}

		if(left < right)	// this is the core of this alforithm traverse it on paper it will be clear.
		{
			arr[left] = 0;
			arr[right] = 1;
			left++;
			right--;
		}
	}
}
