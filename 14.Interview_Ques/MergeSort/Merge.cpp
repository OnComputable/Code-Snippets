//https://www.geeksforgeeks.org/merge-sort/
// To run - g++ -std=c++17 programname   -> reason for this is auto class used in the program [to automatically detect the datatype of variable used according to the usage similar to python and previous version of c++ may or may not support it.] 

#include <iostream>
using namespace std;

void merge(int array[], int const, int const, int const);
void mergeSort(int array[], int const, int const);
void printArray(int A[], int);

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	auto arr_size = sizeof(arr) / sizeof(arr[0]); // getting size of arr.

	cout << "Given array is \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);

	return 0;
}

void printArray(int A[], int size)
{
	for(auto i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
}

void mergeSort(int array[], int const begin, int const end)
{
	if(begin >= end)	
	{
		return;	// when indexes cross eachother.
	}

	auto mid = begin + (end - begin) / 2; // logic for dividing array in two parts.

	mergeSort(array, begin, mid); // divide from middle first half recursively
	mergeSort(array, mid + 1, end); // divide second half recursively
	merge(array, begin, mid, end); // after processing using merge merge them.
}


void merge(int array[], int const left, int const mid, int const right)
{
	auto const subArrayOne = mid - left + 1;
	auto const subArrayTwo = right - mid;

	auto *leftArray = new int[subArrayOne], *rightArray = new int[subArrayTwo];

	for(auto i = 0; i < subArrayOne; i++)
	{
		leftArray[i] = array[left + i];
	}

	for(auto j = 0; j < subArrayTwo; j++)
	{
		rightArray[j] = array[mid + 1 + j];
	}

	auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
	int indexOfMergedArray = left;

	while(indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
	{
		if(leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
		{
			array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else
		{
			array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}


	while(indexOfSubArrayOne < subArrayOne)
	{
		array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}

	while(indexOfSubArrayTwo < subArrayTwo)
	{
		array[indexOfMergedArray] =  rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
}
