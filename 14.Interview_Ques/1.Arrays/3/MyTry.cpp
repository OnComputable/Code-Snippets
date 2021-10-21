//https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/


// Find the number occuring odd number of times

#include <iostream> // for input output 

using namespace std;

int main(void)
{
	int arr[] = { 5, 7, 2, 7, 5, 2, 5 };

	int count = 0, index;
	int arr_size = sizeof(arr) / sizeof(arr[0]);	// getting sizeof array
	
	//outer loop for fixing index for comparing 
	for(int  i = 0; i < arr_size; i++)
	{
		// to get the count
		for(int j = 0; j < arr_size; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				index = i;
			}
		}

		// if count is even reset count
		if(count%2 == 0)
		{
			count = 0;
		}
		else	// else go for printing we found our odd guy
		{
			break;
		}
	}

	cout << arr[index] << "\n";

	return 0;
}


// This implementation takes O(n)^2 time need better algo.
