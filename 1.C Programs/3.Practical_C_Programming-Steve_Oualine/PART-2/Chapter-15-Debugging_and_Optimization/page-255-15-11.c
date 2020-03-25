/********************************************************
 * [ Flush2/flush2.c ]
 * ******************************************************/ 
#include <stdio.h>
int main()
{
	int i, j;	// two random integers

	i = 1;
	j = 0;

	printf("Starting\n");
	fflush(stdout);

	printf("Before divide...");
	fflush(stdout);

	i = i / j;	// divide by zero error

	printf("After\n");
	fflush(stdout);

	return (0);
}
