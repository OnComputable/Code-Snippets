/********************************************************
 * [ File: high/high.c ]
 * ******************************************************/ 

#include <stdio.h>

const int HIGH_SPEED = (1<<7);	// modem is running fast

// we are using a hardwired connection
const int DIRECT_CONNECT = (1<<8);

char flags = 0;		// start with nothing

int main()
{
	flags |= HIGH_SPEED;	// we are running fast
	flags |= DIRECT_CONNECT;	// because we are wired together

	if ((flags & HIGH_SPEED) != 0)
		printf("High Speed set\n");

	if ((flags & DIRECT_CONNECT) != 0)
		printf("Direct Connect set\n");

	return (0);
}

/********************************************************
 * Question 11-1: Answer:  On my system both the Conne -
 * 	ctions worked! That might not be the case
 * 	after looking at the answer I realized that the
 * 	use of char for flag could not fit the 
 * 	DIRECT_CONNECT values. Therefore flag must be 
 * 	stored as short to fix it.
 * ******************************************************/ 
