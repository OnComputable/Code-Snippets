//https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/


// Method2: Using hashing for storing values as key value pair
// which could be accessed by hash in O(1) time 
// it have just a problem that it requires extra space.
// But we get time complexity as O(n).
// and space complexity as O(n).


#include <bits/stdc++.h>

using namespace std;

int getOddOccurence(int arr[], int);

int main()
{
	int arr[] = { 2, 2, 3, 3, 5, 5, 5};

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << getOddOccurence(arr, n);


	return 0;
}

int getOddOccurence(int arr[], int size)
{
	unordered_map<int, int> hash; // creation of hashmap

	for(int i = 0; i < size; i++)
	{
		hash[arr[i]]++;		// getting number into hashmap
	}

	// hash is stored as following
	//
	//	Element		Frequency
	//	2		2
	//	3		2
	//	5		3
	//
	//
	// for iterating over has and checking it
	// number occurs odd times in the hash.
	for(auto i : hash)
	{
		if(i.second %2 != 0) // here i.second is the frequency of the element
		{
			return i.first; // i.first is the element.
		}
	}

	return -1; // no such element found
}

// for understanding STL
// https://www.geeksforgeeks.org/traversing-a-map-or-unordered_map-in-cpp-stl/
