/* https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/
 *
 * Method1 : Counting 0's or 1's
 */


#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n);
void print(int arr[], int);

int main(void)
{
	int arr[] = { 0, 1, 0, 1, 1, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, n);
	print(arr, n);

	return 0;
}


void print(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] <<" ";
	}
	cout << "\n";
}

void sort(int arr[], int size)
{
	int count = 0;	// counts no of 0's in the array

	for(int i = 0; i < size; i++)
	{
		if(arr[i] == 0)
		{
			count++;
		}	
	}

	for(int i = 0; i < count; i++)
	{
		arr[i] = 0;
	}

	for(int i = count; i < size; i++ )
	{
		arr[i] = 1;
	}
}
