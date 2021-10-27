/*
 * https://www.geeksforgeeks.org/comb-sort/
 *
 * Comb_Sort is an improvement over bubble sort it revolves around 1.3 number for  using 
 * it to run loop accordingly even if it's time complexity is same as bubble
 * sort still it works better than it.
 */

#include <bits/stdc++.h>
using namespace std;

int getNextGap(int);
void combSort(int [], int);
void printArray(int [], int);

int main(void)
{
	int a[] = { 8, 4, 1, 56, 3, -44, 23, -6, 28, 0 };
	int n = sizeof(a)/sizeof(a[0]);
	
	cout << "Before Sorting : \n";
	printArray(a, n);


	combSort(a, n);

	cout << "After Sorting : \n";
	printArray(a, n);

	return 0;
}


void combSort(int a[], int n)
{
	// gap initializing
	int gap = n;

	// to make sure that loop runs similar to bubble sort
	bool swapped = true;

	// keep running until gap is more than 1 and last iteration
	// caused a swap
	while(gap != 1 || swapped == true)
	{
		// find next gap
		gap = getNextGap(gap);


		// initialize swapped as false to check if swapped 
		// or not
		swapped = false;

		// compare all element with current gap and swap if left ele is 
		// bigger than the right one.
		for(int i = 0; i <n-gap; i++)
		{
			if(a[i] > a[i+gap])
			{
				swap(a[i], a[i+gap]);
				swapped = true;
			}
		}

	}
}

int getNextGap(int gap)
{
	// shrink gap by shrink factor
	gap = (gap*10)/13;

	if(gap < 1)
	{
		return 1;
	}
	return gap;
}


void printArray(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
}
