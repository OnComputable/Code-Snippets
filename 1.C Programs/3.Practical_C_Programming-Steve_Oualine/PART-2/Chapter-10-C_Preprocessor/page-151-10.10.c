/********************************************************
 * [ File: rec/rec.c ]
 * ******************************************************/ 
#include <stdio.h>
#define RECIPROCAL (number) (1.0/ (number))

int main()
{
	float counter;	// counter for our table

	for (counter = 0.0; counter < 10.0; counter += 1.0)
	{
		printf("1/%f = %f\n", counter, RECIPROCAL(counter));
	}	

	return (0);
}

/********************************************************
 * Question: 10-7 : Answer: In macro RECIPROCAL
 * 	definition of the variable number is wrong 
 * 	due to space in between RECIPROCAL and number
 * 	i.e it should be 'RECIPROCAL(number)' 
 * ******************************************************/ 
