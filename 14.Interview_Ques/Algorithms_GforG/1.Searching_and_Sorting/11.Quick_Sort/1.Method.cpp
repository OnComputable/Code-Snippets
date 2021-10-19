// https://www.geeksforgeeks.org/quick-sort/

#include <bits/stdc++.h>
using namespace std;

void swap(int*, int*);
int  partition(int arr[], int, int);	// last ele as pivot implementation
void quickSort(int arr[], int, int);
void printArray(int arr[], int);


int main(void)
{
	int arr[] = {10, 7, 8, 9, 1, 5};	
	int n = sizeof(arr) / sizeof(arr[0]);	// getting size of array

	cout << "Before sorting:\n";
	printArray(arr, n);

	quickSort(arr, 0, n - 1);

	cout << "Sorted array: \n";
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

void quickSort(int arr[], int low, int high)
{
	if(low < high)
	{
		int pi = partition(arr, low, high); // pi - partitioning index
		// Now solve the partitions created by the partitioning index
		quickSort(arr, low, pi - 1);	//left partition
		quickSort(arr, pi + 1, high);	// right partition
		// here see that the one element is reached at it's correct index position.And partitions time complexity is based onto this only as in which way the 'pi'
		// divides the array into partitions.
	}
}

int  partition(int arr[], int low, int high)
{
	int pivot = arr[high];	// last ele as pivot
	int i = (low - 1);

	for(int  j= low; j <= high - 1; j++)
	{
		if(arr[j] < pivot)// if curr ele is smaller than the pivot
		{	
			i++;	//increment index of smaller ele
			swap(&arr[i], &arr[j]);

		}
	}

	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}


void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
