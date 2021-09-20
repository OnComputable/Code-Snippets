//Link for Question and explanations
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/



// standard file for input output
#include <stdio.h>
//Here int return type is must.  
int main()
{
	// T - Number of Test Cases
	// r = Iterator over Result
	int T,r = 0;
	scanf("%d",&T);	// Scanning Test Cases number
	int Result[T];	// Result is array storing result for each test Case
	
	// Loop according to Number of Test Cases
	for(int i = 0 ;i<T;i++)
	{
		// CG - Cost of Green Balloon
		// CP - Cost of Purple Balloon
		// n - num of inputs.
		int CG,CP,n;

		scanf("%d%d",&CG, &CP);	// Taking inputs
		scanf("%d",&n);	
		// Arrays for input of Solved Data i.e. 1 or 0 for each case
		int G[n],P[n];

		//Counter for getting number of 1's in each case
		int GP = 0, PP = 0;

		// Iterator for taking inputs
		for(int j = 0;j < n; j++)
		{
			scanf("%d%d", &G[j],&P[j]);
		}	


		//Input to counter for number of 1's in each case
		for(int j = 0; j < n; j++)
		{
			if(G[j] == 1)
			{
				++GP; // first Column of 0's or 1's
			}
			if(P[j] == 1)
			{
				++PP; // Second Column of 0's or 1's
			}

		}
		
		// result calculation for comparing the cost of test cases
		// res1 for 1st Col - GREEN & 2nd Col - PURPLE
		// res2 for 1st Col - PURPLE & 2nd Col - GREEN 
		int res1, res2;
		res1 = ((CG*GP)+(CP*PP));
		res2 = ((CP*GP)+(CG*PP));
		
		// The least result will be stored in our Result[] array
		if( res1 < res2 )
		{
			Result[r] = res1;
		}
		else
		{
			Result[r] = res2;
		}
		++r; // for getting next result in next cell
	}

	// result Printing
	for(int z = 0; z<T; z++)
	{
		printf("%d\n",Result[z]);
	}
	// This is must otherwise gives error
	return 0;
}
