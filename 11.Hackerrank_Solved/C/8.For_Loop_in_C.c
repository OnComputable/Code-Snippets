//https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=false&h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b,n;
    // Taking input for range
    scanf("%d\n%d", &a, &b);


    for(int n = a; n <= b; n++)
    {   
	  //Satisfying Condition 1 
        if(n <= 9)
        {
            switch(n)
            {
                case 1: printf("one\n");
                        break;
                case 2: printf("two\n");
                        break;
                case 3: printf("three\n");
                        break;
                case 4: printf("four\n");
                        break;
                case 5: printf("five\n");
                        break;
                case 6: printf("six\n");
                        break;
                case 7: printf("seven\n");
                        break;
                case 8: printf("eight\n");
                        break;
                case 9: printf("nine\n");
                        break;

            }
        }
	// Condition 2 
        if(n > 9)
        {
            if(n%2 == 0)
            {
                printf("even\n");
            }
	    // Condition 3
            else {
                printf("odd\n");
            }
        }
 
    } // for loop closing

    return 0;
}


