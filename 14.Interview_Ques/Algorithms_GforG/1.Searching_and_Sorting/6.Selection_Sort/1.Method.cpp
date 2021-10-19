//https://www.geeksforgeeks.org/selection-sort/

#include <bits/stdc++.h>	// includes all header files of c++ provided by g++
using namespace std;


// function prototype
void swap(int*, int*);
void selectionSort(int arr[], int n);
void printArray(int arr[], int);


// main
int main(void)
{
	int arr[] = { 64, 25, 12, 22, 11 };	// declaring and defining array
	int n = sizeof(arr) / sizeof(arr[0]);	// getting size of an array

	selectionSort(arr, n);			// applying selectionSort() as function
	cout << "Sorted array: \n";
			
	printArray(arr, n);			// printing array with function


	return 0;
}

// function definitions
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for(i = 0; i < n-1; i++)
	{
		min_idx = i;				// min index is first set to i which is 0 at the beginning

		for(j = i+1; j < n; j++)
		{
			if(arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}

		swap(&arr[min_idx], &arr[i]);		// the array is searched iteratively if any smaller element than that of current 'i' is presene
							// if it does we swap i with the smallest value.
	}
}


void swap(int *xp, int *yp)	// pass by reference is used for swapping
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void printArray(int arr[], int size)	// printing the array.
{
	int i;
	for(i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}




/* by the above code it is clear that the Time complexity for the Selection sort in above case is O(n^2)*/
