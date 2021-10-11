//https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

// Method3: X-OR  - > Modulo 2 sum
//
// Truth Table 
//
// A   |   B  |   XOR
// 0   |  0   |	  0
// 0   |  1   |	  1
// 1   |  0   |	  1
// 1   |  1   |	  0
//bitwise XOR of all the elements. XOR of all elements gives us odd occurring elements.


#include <bits/stdc++.h>
using namespace std;

int getOddOccurence(int arr[], int);

int main()
{
	int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4};
	int n = sizeof(arr) / sizeof(arr[0]);


	cout << getOddOccurence(arr, n);

	return 0;
}

int getOddOccurence(int arr[], int size)
{
	int res = 0;
	for(int  i= 0 ; i < size; i++)
	{
		res = res ^ arr[i];	// just x-OR all the elements you get the number that occured odd number of times in the array
		// I have not tested for if multiple odd no. of numbers are present in the array.
		// I tested for above and it returns addition of the numbers which have odd occurence :>
	}

	return res;
}

