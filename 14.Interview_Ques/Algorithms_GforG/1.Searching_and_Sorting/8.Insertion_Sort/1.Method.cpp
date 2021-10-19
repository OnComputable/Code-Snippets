// https://www.geeksforgeeks.org/insertion-sort/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int);
void printArray(int arr[], int);


int main(void)
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}


void insertionSort(int arr[], int n)
{
	int key, j;

	for(int i = 0; i < n; i++)
	{
		key = arr[i];
		j = i-1; // j is less than i from start for if we need to place elem before i we need this. [my thinking might be wrong]


		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


void printArray(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
