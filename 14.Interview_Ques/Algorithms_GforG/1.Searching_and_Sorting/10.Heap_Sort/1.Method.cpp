//https://www.geeksforgeeks.org/heap-sort/

//for sorting the array we are using a min heap here as we like out array to 
//be sorted in ascending order.

#include<iostream>
using namespace std;


// function prototypes
void heapify(int arr[], int, int);
void heapSort(int arr[],int);
void printArray(int arr[], int);


// main function
int main(void)
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]); // getting size of the array
	
	cout << "Unsorted array is: \n";
	printArray(arr, n);

	heapSort(arr, n);	// function call for heapsort

	cout << "Sorted array is \n";
	printArray(arr, n);

	return 0;
}


// function declaration
void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}	


void heapSort(int arr[] ,int n)
{
	for(int i = n / 2 -1; i >= 0; i--)	// getting the middle index of the array and starting from that which is i. [rearranging the array]
	{
		heapify(arr, n , i);
	}

	for(int i = n - 1; i > 0; i--)	// extractiong element one by one from the heap as our main goal was to sort the elements.
	{
		swap(arr[0], arr[i]);	// for getting the ele out we move root ele to end and then we extract it.

		heapify(arr, i, 0);	// after this we call heapify for getting the smallest ele at the top again.
	}
}

void heapify(int arr[], int n, int i)
{
	int largest = i;	// largest is the root node initially
	int l = 2 * i + 1;	// left child index
	int r = 2 * i + 2;	// right child index

	if(l < n && arr[l] > arr[largest])	// if left child is larger than root
	{
		largest = l;
	}

	if(r < n && arr[r] > arr[largest])	// if right child is larger than root
	{
		largest = r;
	}

	if(largest != i)	// and if root is not largest and that is known by the above two conditions
	{
		swap(arr[i], arr[largest]);	// swapping it with the one of the child which is largest.

		heapify(arr, n, largest);	// applying heapify for recursively affecting it's subtrees.
	}
}
