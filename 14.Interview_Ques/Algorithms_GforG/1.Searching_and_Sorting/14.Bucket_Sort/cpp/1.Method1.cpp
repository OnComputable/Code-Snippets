// https://www.geeksforgeeks.org/bucket-sort-2/

// Method 1: Bucket sort on number like 0.10, 0.20 like floating
// point numbers

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void bucketSort(float arr[], int n);


int main(void)
{
	float arr[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
	int n = sizeof(arr) / sizeof(arr[0]);

	bucketSort(arr, n);

	cout << "Sorted array is \n";

	for(int i = 0; i < n; i++)
	{
		cout << arr[i]  << " ";
	}

	return 0;
}

void bucketSort(float arr[], int n)
{
	// creating empty buckets
	vector<float> b[n];

	// putting array elements in diff buckets
	for(int i = 0; i < n; i++)
	{
		int bi = n*arr[i];	// index of bucket
		b[bi].push_back(arr[i]);
	}

	// sorting individual buckets
	for(int i = 0; i < n; i++)
	{
		sort(b[i].begin(), b[i].end());	// sort function is present in the libraries
	}

	// concatenate all buckets into arr[]
	int index = 0;
	for(int i = 0; i< n; i++)
	{
		for(int j = 0; j < b[i].size(); j++)
		{
			arr[index++] = b[i][j];
		}
	}



}
