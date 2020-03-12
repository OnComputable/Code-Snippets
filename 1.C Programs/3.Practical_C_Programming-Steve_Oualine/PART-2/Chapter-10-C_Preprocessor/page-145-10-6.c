/********************************************************
 * [ File: size/size.c ]
 * ******************************************************/
#include <stdio.h>

#define SIZE	10;
#define FUDGE	SIZE -2;

int main()
{
	int size;	// size to really use

	size = FUDGE;
	printf("Size is %d\n", size);

	return (0);
}

/********************************************************
 * Que 10-3: Answer: The problem is with ; that is 
 * 	given at the end of the preprocessor please
 * 	avoid the repeatition of ';'. 
 * ******************************************************/ 
