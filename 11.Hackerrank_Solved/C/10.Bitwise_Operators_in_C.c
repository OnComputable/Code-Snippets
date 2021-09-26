//https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
// This problem tought so many things - Debugging, (why it is required [spent 6 hours debugging it :>]), Code structures
// Handling Corner cases and multiple approaches to the problem. It took a lot of time but the Aha moment at the last
// is Worth the effort.
// This is not much optimal solution to the problem as code written is lousy
// Handled cases as per the test case and again found that for some cases it didn't work.
// But finally fixed them all :> HaPPY. I will celebrate this with a cake :)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {

	// The size of array for operation result storage
	// needs to be - Sum of first natural numbers
	// i.e. ((n-1)(n-1+1)) / 2  [Little modified]	
    int result_index = (((n-1)*(n))/2);
    int cases[n], And_Op[result_index], Or_Op[result_index], Exor_Op[result_index];
    int MAX_AND = 0, MAX_OR = 0, MAX_EXOR = 0;


    // Initialized array with elements
    for(int i = 0, j = 1; i < n; i++)
    {
        cases[i] = j;
        ++j;
    }

    //operations on array
    for(int i = 0, m = 0, j = 1; i<result_index; i++)
    {
            And_Op[i] = (cases[m]) & (cases[j]);
            Or_Op[i] = (cases[m]) | (cases[j]);
            Exor_Op[i] = (cases[m]) ^ (cases[j]);

            if((j+1) >= n)
            {
                ++m;
                j = m + 1;
                if(j > n)
                {
                    break;
                }
            }
            else {
                ++j;
            }

    }


    // Case array
    for(int i = 0; i<n; i++)
    {
            printf("%d ", cases[i]);
    }
   printf("\n");

   // And operation array
    for(int i = 0; i < result_index; i++)
    {
        printf("%d ", And_Op[i]);
    }
    printf("\n");

    // OR operation array
    for(int i = 0; i < result_index; i++)
    {
            printf("%d ", Or_Op[i]);
    }
    printf("\n");

    // ExOR operation array
    for(int i = 0; i < result_index; i++)
    {
            printf("%d ", Exor_Op[i]);
    }
    printf("\n");


  // And MAX


       for(int i = 0; i < result_index; i++)
       {
	    if((i+1) < result_index)
	    {
		if((And_Op[i] <= And_Op[i+1]))
		{
			if((And_Op[i+1] < k) && (MAX_AND < And_Op[i+1]))
			{
				MAX_AND = And_Op[i+1];
			}
			else if((And_Op[i] < k) && (And_Op[i] >= MAX_AND))
			{
				MAX_AND = And_Op[i];
				continue;
			}
			else if(And_Op[i+1] >= k)
			{
				continue;
			}

		}
		else if((And_Op[i] < k) && (And_Op[i] >= MAX_AND))
		{	
			MAX_AND = And_Op[i];
		}
    		}
    	   else
    	   {
	   	 if((And_Op[i] < k) && (And_Op[i] >= MAX_AND))
	    	{
	    		MAX_AND = And_Op[i];
	    	}
			break;
    	  }

    	}// for ended
   

// OR Started

       for(int i = 0; i < result_index; i++)
       {
	   	 if((i+1) < result_index)
	    	{
			if((Or_Op[i] <= Or_Op[i+1]))
			{
				if((Or_Op[i+1] < k) && (MAX_OR < Or_Op[i+1]))
				{
					MAX_OR = Or_Op[i+1];
				}
				else if((Or_Op[i] < k) && (Or_Op[i] >= MAX_OR))
				{
					MAX_OR = Or_Op[i];
				}
				else if(Or_Op[i+1] >= k)
				{
					continue;
				}

		}
		else if((Or_Op[i] < k) && (Or_Op[i] >= MAX_OR))
		{
			MAX_OR = Or_Op[i];
		}
    		}
    		else
    		{
	    		if((Or_Op[i] < k) && (Or_Op[i] >= MAX_OR))
	   		{
	    			MAX_OR = Or_Op[i];
	    		}
			break;
    		}

    	}// for ended
   



	// EXOR MAX

       for(int i = 0; i < result_index; i++)
       {
		    if((i+1) < result_index)
		    {
			if((Exor_Op[i] <= Exor_Op[i+1]))
			{
				if((Exor_Op[i+1] < k) && (MAX_EXOR < Exor_Op[i+1]))
				{
					MAX_EXOR = Exor_Op[i+1];
				}
				else if((Exor_Op[i] < k) && (Exor_Op[i] >= MAX_EXOR))
				{
					MAX_EXOR = Exor_Op[i];
					continue;
				}
				else if(Exor_Op[i+1] >= k)
				{
					continue;
				}

			}
		   else if((Exor_Op[i] < k) && (Exor_Op[i] >= MAX_EXOR))
		   {
			MAX_EXOR = Exor_Op[i];
		   }
    		   }
    		   else
    		   {
	    		if((Exor_Op[i] < k) && (Exor_Op[i] >= MAX_EXOR))
	    		 {
	    			MAX_EXOR = Exor_Op[i];
	   		 }
				break;
   		    }

    	}// for ended
   



	printf("%d\n%d\n%d", MAX_AND, MAX_OR, MAX_EXOR);
	    
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

