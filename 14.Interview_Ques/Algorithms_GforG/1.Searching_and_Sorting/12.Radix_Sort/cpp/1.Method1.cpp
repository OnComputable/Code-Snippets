//https://www.geeksforgeeks.org/radix-sort/

// Method 1: Here it is implemented by taking d as 10
// This code is highly short written i.e. in less number of instruction for understanding
// them trace them on paper or use debugger.

#include <iostream>
using namespace std;

void radixSort(int [], int);
int getMax(int [], int);
void print(int [], int);
void countSort(int [], int, int);

int main(void)
{
	int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
	int n = sizeof(arr) / sizeof(arr[0]);

	radixSort(arr, n);
	
	print(arr, n);

	return 0;
}

void radixSort(int arr[], int n)
{
	int m = getMax(arr,n);	//to find number of digit

	// applying countingSort workflow
	// here exp would be 1- > 10 - > 100
	for(int exp = 1; m/exp > 0; exp *= 10)
	{
			countSort(arr, n, exp);
	}


}

int getMax(int arr[], int n)
{
	int mx = arr[0];

	for(int i = 1; i < n; i++)
	{
		if(arr[i] > mx)
		{
			mx = arr[i];
		}
	}

	return mx;
}

void print(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void countSort(int arr[], int n , int exp)
{
	int output[n];
	int count[10] = { 0 };	// initializes all ele of array to 0

	// store occurences in count[]
	// stores the digit as per the exp that is 1's place
	// 10th place and so on
	for(int i = 0; i < n; i++)
	{
		count[(arr[i] / exp) % 10]++;
		/*
		 *	[2][0][2][0][1][2][1][0][0][0]  This is what array looks like after total for loop
		 *
		 */	
	}

	for(int i = 1; i < 10; i++)
	{
		count[i] += count[i -1];

		/*
		 *
		 *	[2][2][4][4][5][7][8][8][8][8]  This is what array looks like after total for loop
		 *
		 */
	}

	// Build the output array
	for(int i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] -1] = arr[i];
		count[(arr[i] / exp) % 10]--;

		/*
		 * 
		 *	[170][90][802][2][24][45][75][66]  This is what "output array" looks like after total for loop 
		 *	for first calling of countSort()
		 *
		 */
	}


	// getting sorted array for current digit in original array
	for(int i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}

}
