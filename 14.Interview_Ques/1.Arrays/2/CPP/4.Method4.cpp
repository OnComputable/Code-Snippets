//https://www.geeksforgeeks.org/majority-element/

//Method4 = Using Hashmap

#include <bits/stdc++.h>
using namespace std;

void findMajority(int arr[], int);

int main()
{
	int arr[] = { 2, 2, 2, 2, 5, 5, 2, 3, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	findMajority(arr, n);
	

	return 0;
}

void findMajority(int arr[], int size)
{
	unordered_map<int, int>m; // declaration for key value map 'm'
	for(int i = 0; i < size; i++)	// taking element in map
	{
		m[arr[i]]++;
	}
	int count = 0;

	for(auto i: m)
	{
		if(i.second > size / 2)
		{
			count = 1;
			cout << "Majority found :" << i.first << endl;
			break;
		}
	}

	if(count == 0)
	{
		cout << "No majority element" << endl;
	}
}
