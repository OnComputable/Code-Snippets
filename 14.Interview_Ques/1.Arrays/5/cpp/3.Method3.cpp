// https://www.geeksforgeeks.org/array-rotation/

// Method 3 : Juggling algorithm
 

// This is the best algo for the problem 
// T(n) = O(n)


#include <bits/stdc++.h>
using namespace std;

int gcd(int, int);	// calculates gcd of two numbers
void leftRotate(int arr[], int, int);	// rotates left by d positions
void printArray(int arr[], int);	// prints the array


int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	leftRotate(arr, 2, n);
	printArray(arr, n);

	return 0;
}


void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}


int  gcd(int a, int b)
{
	if(b == 0)
	{
		return a;	// base condn for recursion
	}
	else
	{
		return gcd(b, a % b);	// recursive call to gcd : Trace it with this exaple on paper for understanding. returns 1 in this case
	}
}

void leftRotate(int arr[], int d, int n)
{
	d %= n;

	int g_c_d = gcd(d, n);

	for(int i = 0; i < g_c_d; i++)
	{
		int temp = arr[i];
		int j = i;

		while(1)
		{
			int k = j + d;
			if(k >= n)
			{
				k = k - n;
			}
			if(k == i)
			{
				break;
			}

			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}
