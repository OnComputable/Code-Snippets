// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

// Recursive way

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int, int);
void printArray(int arr[], int);

int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6};

	printArray(arr, 6);

	reverseArray(arr, 0, 5);

	cout << "Reversed array is: " << "\n";

	printArray(arr, 6);

	return 0;
}


void printArray(int arr[], int size)
{
	for(int i = 0; i< size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void reverseArray(int arr[], int start, int end)
{
	if(start >= end)	// base condn for recursion to stop
	{
		return;
	}

	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;


	reverseArray(arr, start + 1, end - 1);	// recursive call here we used start + 1 and end - 1 instead of start++  and end-- because the later assigns the value to start and end but the first one doesnt.
}
