//https://www.geeksforgeeks.org/linear-search/

// It is the same as previous method because here we are performing 2 ‘if’ operations in one iteration of the loop and in previous method we performed only 1 ‘if’ operation. This makes both the time complexities same.

// Compilation --
//
//> g++ -std=c++17 3.Method2.cpp 


#include <bits/stdc++.h>
using namespace std;

void search(vector<int> arr, int search_Element);


int main(void)
{
	vector<int> arr{ 1, 2, 3, 4, 5 };
	int search_Element = 5;

	search(arr, search_Element);

	return 0;
}


void search(vector<int> arr, int search_Element)
{
	int left = 0;
	int length = arr.size();	// method from vector class
	int position = -1;	// used sort of flag
	int right = length - 1;

	for(left = 0; left <= right;)
	{
		
		// finding from left side
		if(arr[left] == search_Element)
		{
			position = left; 	// here left was 0
			cout << "Element found in Array at " << position + 1 << " Position with " << left + 1 << " Attempt";

			break;
		}	
		// if ended

		// finding from right side
		if(arr[right] == search_Element)
		{
			position = right;	// here right is length-1
			cout << "Element found in Array at " << position + 1 << " Position with " << length - right << " Attempt";

			break;
		}// if ended

		left++;
		right--;	// incrementing and decrementing for next iteration of left and right.

	} // for ended

	// if element not found
	if(position == -1)
	{
		cout << "Not found in Array with "<< left << " Attempt";
	}
}

