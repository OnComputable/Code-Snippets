//https://www.geeksforgeeks.org/majority-element/

// Method 3 - Using moore's Voting Algorithm
//
//This metod is similar to how we vote and select candidate 
//from election

#include <bits/stdc++.h>
using namespace std;


void printMajority(int a[],int); // prints if candidate holds majority.
int  findCandidate(int a[],int); // finding the candidate with most votes with comparison to others.
bool isMajority(int a[],int,int); // finding if cand is majority or not.

int main()
{
	int a[] = { 1, 2, 3, 2, 3, 3, 2, 3, 5, 3, 1};
	int size = (sizeof(a)) / sizeof(a[0]); // array size

	printMajority(a, size);

	return 0;
}

void printMajority(int a[], int size)
{
	int cand = findCandidate(a,size);  // finds cand
	
	if(isMajority(a, size, cand)) // if majority exists.
	{
		cout << " " << cand << " ";
	}
	else
	{
		cout << "No majority Element\n";
	}

}

int findCandidate(int a[], int size)
{
	int maj_index = 0, count = 1;

	for(int i = 1; i < size; i++)
	{
		if(a[maj_index] == a[i]) // if next ele is same as curr ele ++ if not -- of count
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count == 0) // when count == 0 then index is changed
		{
			maj_index = i;
			count = 1;
		}
	}

	return a[maj_index]; // majority ele index is returned
}

bool isMajority(int a[], int size, int cand)
{
	int count = 0;
	for(int i = 0; i < size; i++) // finding freq of cand
	{
		if(a[i] == cand)
		{
			count++;
		}
	}

	// if majority exists.
	if(count > size / 2)
	{
		return 1;
	}
	else
	{
		return 0;	
	}
}
