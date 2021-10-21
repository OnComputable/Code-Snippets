/* https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/
 *
 * Method2.1: It is similar to previous method but much simplified
 *
 * Here too the time complexity is O(n)
 *
 */

#include <bits/stdc++.h>
using namespace std;

void sort(int [], int);
void printArray(int [], int);

int main(void)
{
	int arr[] = {0, 1, 0, 1, 1, 1};
	int size = sizeof(arr)/ sizeof(arr[0]);

	sort(arr, size);
	printArray(arr, size);

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
	int type0 = 0, type1 = size - 1;

	while(type0 < type1)	// until indexes cross eachother
	{
		if(arr[type0] == 1)
		{
			swap(arr[type0], arr[type1]);
			type1--;
		}
		else
		{
			type0++;
		}
	}
}
