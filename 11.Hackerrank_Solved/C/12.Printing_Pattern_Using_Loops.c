//https://www.hackerrank.com/challenges/printing-pattern-2


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int len = n + (n-1); // length of character in one row

   for(int i = 0; i <len; i++ )
   {
	for(int j = 0; j<len; j++)
	{
		int min; // Helps with printing characters

		//  i < j
		if(i < j)
		{
			min = i;
		}
		else
		{
			min = j;
		}


		// min < (len - i)
		if(min < len - i)
		{	
			min = min;
		}
		else
		{
			min = len-i-1;
		}

		// min < (len-j-1)
		if(min < (len-j-1))
		{
			min = min;
		}
		else
		{
			min = len-j-1;
		}
		printf("%d", n-min);
	}
	// Printing newline after each of j loop running
	printf("\n");
   }
    return 0;
}
