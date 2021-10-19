// https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

//Segregate 0s and 1s in an array

#include <iostream>
using namespace std;

void printArray(int arr[], int);
void sortArray(int arr[], int);
void swap(int*, int*);

int main(void)
{
	int arr[] = {0, 1, 0, 1, 1, 1, 0, 0, 0};

	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "The input array is : \n";
	printArray(arr, size);

	sortArray(arr, size);

	cout <<"The sorted array is: \n";
       printArray(arr, size);	

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


void sortArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{	
		if(arr[i] == 0)
		{
			continue;
		}
		else
		{
			for(int j = i+1; j < size; j++ )
			{
				if(arr[j] == 0 )
				{
					swap(&arr[i], &arr[j]);
				}
			}
		}
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
