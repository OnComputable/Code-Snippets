// https://www.geeksforgeeks.org/array-rotation/

// Method1 : Using temp array

#include<iostream>

using namespace std;


void printArray(int arr[], int);


int main(void)
{
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int d = 2;
	int tarray[d];
	
	for(int i = 0; i < d; i++)
	{
		tarray[i] = arr[i];
	}
	
	printArray(arr, n);
	printArray(tarray, d);

	int swap = n-d;

	for(int i = 0; i < swap; i++)
	{
		arr[i] = arr[i+2];
	}

//	printArray(arr, n);

	for(int i = swap, j = 0; i < n; i++, j++)
	{
		arr[i] = tarray[j];
	}

	printArray(arr,n);





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
