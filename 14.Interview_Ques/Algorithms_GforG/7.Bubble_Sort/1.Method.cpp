//https://www.geeksforgeeks.org/bubble-sort/


#include <bits/stdc++.h>
using namespace std;

// Function prototype
void swap(int*, int*);
void bubbleSort(int arr[], int);
void printArray(int arr[], int);


// main function
int  main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);	// size of array

	bubbleSort(arr, n);	// bubble sort fun calling
	cout << "Sorted array: \n";

	printArray(arr, n);	// printing sorted array

	return 0;
	
}


// func defn
void bubbleSort(int arr[], int n)
{
	int i, j;
	for(i = 0; i < n-1; i++)	// loop with i it requires n-1 iterations always
	{
		
		for(j = 0; j < n-i-1; j++)	// loop with j swapping if curr j and next j satisfies following if.
		{
			if(arr[j] >  arr[j+1])	
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}


void printArray(int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
