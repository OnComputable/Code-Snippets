/********************************************************
 * [ File: ret/ret.c ]
 * ******************************************************/ 
#include <stdio.h>

int main()
{
	// Get the square of a number
	int i = square(5);

	printf("i is %d\n", i);

	return (0);
}

float square(s)
int s;
{
	return (s * s);
}

/********************************************************
 * Question: 19-2 : Answer: There are no prototype 
 * 		prototype are required when we are 
 * 		writing the funtion definition after
 * 		the main. That is why prototypes are 
 * 		required before main.
 * 		i.e. float square();
 * ******************************************************/ 
