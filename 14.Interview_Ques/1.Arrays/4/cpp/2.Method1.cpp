//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

// iterative way

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int, int);
void printArray(int arr[], int);


int main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6};

	int n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	reverseArray(arr, 0, n-1);

	
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


void reverseArray(int arr[], int start, int end)
{
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
