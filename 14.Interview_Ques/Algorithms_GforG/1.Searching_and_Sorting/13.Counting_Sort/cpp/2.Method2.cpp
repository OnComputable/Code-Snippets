//https://www.geeksforgeeks.org/counting-sort/
//
//The problem with previous method was it would be unable to sort -ve elements.
// We have used character array in previous example but same applies to numbers which are +ve.
// compile with $g++ -std=c++17 progname.cpp

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int>&);
void printArray(vector<int>&);

int main(void)
{	
	vector<int> arr = { -5, -10, 0, -3, 8, 5, -1, 10 };
	countSort(arr);
	printArray(arr);

	return 0;
}


void countSort(vector<int>& arr)
{
	// *max_element and *min_element is present in the library
	int max = *max_element(arr.begin(), arr.end());
	int min = *min_element(arr.begin(), arr.end());
	int range = max - min + 1;

	// creating two vectors named
	// as count<> and output<>
	vector<int> count(range), output(arr.size());
	
	for(int i = 0; i < arr.size(); i++)
	{
		count[arr[i] - min]++;
	}

	for(int i = 1; i < count.size(); i++)
	{
		count[i] += count[i - 1];
	}


	for(int i = arr.size() - 1; i >= 0; i--)
	{
		output[count[arr[i] - min] - 1] = arr[i];
		count[arr[i] - min]--;
	}

	// final array copying into arr which is the original 
	// result carrying array.
	for(int i = 0; i < arr.size(); i++)
	{
		arr[i] = output[i];
	}

}

void printArray(vector<int>& arr)
{
	for(int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\n";
}
