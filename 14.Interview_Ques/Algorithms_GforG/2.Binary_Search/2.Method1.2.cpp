// https://www.geeksforgeeks.org/binary-search/

//Method 1.2: Used check function for easier look


#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 4;  // a large value for array size is taken

int a[N];
int n; // array size

int k; 	// element to be searched

// function declaration
bool Check(int);
void binSearch(int, int);

int main(void)
{
	cin>>n; // size of array

	// taking input to array
	// Note: Give array as input sorted otherwise it fails.
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	cin>>k; // taking number to be searched via input

	binSearch(0, n);

	return 0;
}


void binSearch(int lo, int hi)	// lo - lowest index ; hi - highest index
{
	while(lo<hi)
	{
		int mid=(lo+hi)/2;	// mid-element formula

		if(Check(mid)) // if true then means k<mid
		{
			hi=mid;	
		}
		else 	// if false then means k>mid
		{
			lo=mid+1;
		}
	}

	if(a[lo] == k)
	{
		cout << "Element found at index "<<lo;
	}	
	else
	{
		cout << "Element doesn't exist in array";
	}
}

bool Check(int dig)	// dig - element at positon of mid position
{
	int ele = a[dig];

	// if less than mid element
	if(k<=ele)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
