//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/equal-elements-2-db70c1ae/



#include <stdio.h>

int main()
{
	int  T;
	// input for no of testcases and size of elements
	scanf("%d",&T);
	int Coins[T];

	// Number of times for test cases to run
	for(int i = 0; i < T; i++)
	{
		int N;
		scanf("%d",&N);
		int A[N], CounterO = 0, CounterE;
		for(int i = 0; i < N; i++)
		{
			scanf("%d", &A[i]);
		}

	//For every iteration over the array we are going to check 
		for(int i = 0; i < N; i++)
		{
			if(((A[i])%2) != 0)
			{
				++CounterO;
				continue;
			}
			else
			{
				++CounterE;
			}
		}

		// As we want to print the one which gives us the least price
		Coins[i] = ((CounterO > CounterE)? CounterE : CounterO);
		CounterO = 0;
		CounterE = 0;

	}

	for(int i = 0; i < T; i++)
	{
		printf("%d", Coins[i]);
		printf("\n");
	}

	return 0;
}

