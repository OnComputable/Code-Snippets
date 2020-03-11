/********************************************************
 * [ File: first/first.c ]
 * ******************************************************/ 
#include <stdio.h>

#define FIRST_PART	7
#define LAST_PART	5
#define ALL_PARTS	FIRST_PART + LAST_PART

int main()
{
	printf("The square of all the parts is %d\n", ALL_PARTS * ALL_PARTS);

	return (0);
}

/********************************************************
 * Que 10-1: Answer: The reason it giving the wrong 
 * 	answer is because after preprocessing is over
 * 	the printf statement becomes as follows:--
 * 	printf("", 7 + 5 * 7 + 5)
 * 	which gets us to the wrong result.
 * ******************************************************/ 
