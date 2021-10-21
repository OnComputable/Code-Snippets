// https://www.geeksforgeeks.org/array-rotation/

// Method2 : Rotate one by one

#include <bits/stdc++.h>
using namespace std;

void leftRotationbyOne(int arr[], int);
void leftRotate(int arr[], int, int);
void printArray(int arr[], int n);


int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int d = 2;

	leftRotate(arr, d, n);
	printArray(arr, n);

	return 0;
}

void leftRotate(int arr[], int d, int n)
{
	for(int  i = 0; i < d; i++)
	{
		leftRotationbyOne(arr, n);
	}
}

void leftRotationbyOne(int arr[], int n)
{
	int temp = arr[0];

	for(int i = 0; i < n -1; i++)
	{
		arr[i] = arr[i + 1];
	}

	arr[n-1] = temp;
}


void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";

}


/* The time complexity of this algorithm depends upon number of time rotationby one is called into number of times the array elements to be shifted by one position therefore, 'T(n) = O(n*d)'
 */
