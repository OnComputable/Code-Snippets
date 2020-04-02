/********************************************************
 * [ File: scat/scat.c ]
 * ******************************************************/ 
#include <stdio.h>
#include <string.h>

char first[100];	// First name of person
char last[100];		// Last name of person

// First and last name combined
char full[100];

int main()
{
	strcpy(first, "John");
	strcpy(last, "Doe");

	strcpy(full, first);
	strcat(full, ' ');
	strcat(full, last);

	printf("The name is %s\n", full);

	return (0);
}

/********************************************************
 * Question: 19-4 : Answer: Here we are using a char
 * 		insted of string as strcat() function
 * 		takes string as it's input. The error is
 * 		caught by the compiler. It might not 
 *		get caught in old compilers. 
 * ******************************************************/ 
