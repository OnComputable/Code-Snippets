// https://www.geeksforgeeks.org/counting-sort/

#include <bits/stdc++.h>
#include <string.h>
using namespace std;

#define RANGE 255	// range for ascii value

void countSort(char []);
void printArray(int arr[], int);
void printCArray(char arr[], int);

int main()
{
	char arr[] = "geeksforgeeks";

	countSort(arr);

	cout << "Sorted character array is: "<< arr;
	cout << endl;
	return 0;
}


void countSort(char arr[])
{
	char output[strlen(arr)];
	int count[RANGE + 1], i;

	memset(count, 0, sizeof(count));	// setting all ele of count as 0

	// storing count of each character
	for(i = 0; arr[i]; ++i)
	{
		++count[arr[i]];
	}
	

	printArray(count, 256);


	// getting indexes of the correct positions
	for(i = 1; i <= RANGE; ++i)
	{
		count[i] += count[i - 1];
	}

	
	printArray(count, 256);

	// storing the values in output array

	for(i = 0; arr[i]; ++i)
	{
		output[count[arr[i]] - 1] = arr[i];
		--count[arr[i]];
	}

	printCArray(output,13);

	for(i = 0; arr[i]; ++i)
	{
		arr[i] = output[i];
	}

	printCArray(arr, 13);

}


void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i];
	}

	cout << "\n\n\n";


}


void printCArray(char arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i];
	}

	cout << "\n\n";
}
