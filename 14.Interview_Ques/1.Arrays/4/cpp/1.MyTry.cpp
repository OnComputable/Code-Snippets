// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int);
void reverseArray(int arr[], int);
void swap(int*, int*);

int main(void)
{	
	int arr[] = { 1, 2, 3, 4, 5, 6};

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Array before reversal: \n";
	printArray(arr, n);
	
	reverseArray(arr, n);
	
	printArray(arr,n);

	return 0;
}


void printArray(int arr[], int size)
{
	for(int  i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";
}

void reverseArray(int arr[], int size)
{
	int start = 0, end = size-1;

	for(; start < end; start++, end--)
	{
		swap(&arr[start], &arr[end]);
	}

}

void swap(int* start, int* end)
{
	int temp = *start;
	*start = *end;
	*end = temp;
}
