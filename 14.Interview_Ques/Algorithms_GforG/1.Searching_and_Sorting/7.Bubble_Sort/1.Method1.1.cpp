//https://www.geeksforgeeks.org/bubble-sort/

// Optimization to previous method if array is already sorted we could 
// break out of loop using a flag

#include <bits/stdc++.h>
using namespace std;


// func prototype
void swap(int*, int*);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);



//main
int main(void)
{	
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr)/sizeof(arr[0]);

	bubbleSort(arr, n);

	cout << "The sorted elements are: \n";
	printArray(arr, n);

	return 0;
}


// func definitions
void bubbleSort(int arr[], int n)
{
	int i, j; 
	bool swapped;

	for(i = 0; i < n-1; i++)
	{
		swapped = false;
		for(j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				swapped = true; // even if 1 swap occurs flag is set to true and then again it goes for next iteration of outer loop.
			}
		}


		if(swapped == false)
		{
			break;
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
