/********************************************************
 * [ File:sqr/sqr.c ]
 * ******************************************************/ 
#include <stdio.h>
#define SQR(x) (x * x)

int main()
{
	int counter;	// counter for loop

	for (counter = 0; counter < 5; ++counter)
	{
		printf("x %d, X squared %d\n", counter+1, SQR(counter+1));
	}

	return (0);
}


/********************************************************
 * Que 10-5: Answer: 
 * ******************************************************/ 
