//https://www.geeksforgeeks.org/linear-search/

// Linear Search Finding an element and returning it's index 
// from the array

#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6};

	int index = -1;

	int x = 7;

	for(int i = 0 ; i < 6; i++)
	{
		cout << arr[i] << " "; 
	}
	cout << endl;
	cout << "X is: "<< x <<endl;

	for(int i = 0; i < 6; i++)
	{
		if(arr[i] == x)
		{
			index =  i;
		}
	}

	if(index >= 0)
	{
		cout << "It is present at index no: "<< index << endl;
	}
	else
	{
		cout << "It is not present in the array."<< endl;
	}
	return 0;
}

// Note: It only reaturns the first element it sees onto array
// 	If multiple occurences of the same element is presents in the array
// 	it only gets us the first position is finds his element.
//
// 	Here T() = O(n) 
