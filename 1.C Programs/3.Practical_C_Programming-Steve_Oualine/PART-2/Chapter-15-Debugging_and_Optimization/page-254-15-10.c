/********************************************************
 * [ File: flush/flush.c ]
 * ******************************************************/ 
#include <stdio.h>
int main()
{
	int i, j;	// two random integers

	i = 1;
	j = 0;
	printf("Starting\n");
	printf("Before divide...");
	i = i / j;	// divide by zero error
	printf("After\n");
	return (0);
}
