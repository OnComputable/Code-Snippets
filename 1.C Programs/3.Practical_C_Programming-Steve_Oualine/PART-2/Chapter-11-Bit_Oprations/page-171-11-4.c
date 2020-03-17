/********************************************************
 * [ File: loop/loop.c ]
 * ******************************************************/ 
#include <stdio.h>

int main()
{
	short int i;	// Loop counter
	unsigned char ch;	// Loop counter of another kind

	// Works
	for (i = 0x80; i != 0; i = (i >> 1))
	{
		printf("i is %x (%d)\n", i, i);
	}

	// Fails
	for (ch = 0x80; ch != 0; ch = (ch >> 1))
	{
		printf("ch is %x (%d)\n", ch, ch);
	}

	return (0);
}

/************************************************************
 * Question : 11-2 : Answer: The problem is with char ch
 * 	variable as the sign bit gets into way of shifting
 * 	while in integer the bits are sufficient for sign
 * 	bit to have it's own space.
 * 	i.e. int 00000000 10000002
 * 	     char 10000002
 * 	Therefore to fulfill the need make char as unsigned. 
 * ***********************************************************/ 
