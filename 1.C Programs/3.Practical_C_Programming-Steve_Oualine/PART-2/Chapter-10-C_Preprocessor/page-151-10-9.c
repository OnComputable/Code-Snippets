/********************************************************
 * [ File: sqr-i/sqr-i.c ]
 * ******************************************************/ 
#include <stdio.h>
#define SQR(x) ((x) * (x))

int main()
{
	int counter;	// counter for loop

	counter = 0;

	while (counter < 5)
		printf("x %d square %d\n", counter, SQR(++counter));

	return (0);
}

/********************************************************
 * Que: 10-6 : Answer: The statement SQR(++counter)
 * 	is incremented twice once while execution 
 * 	and once due to macro expansion. 
 * ******************************************************/ 
