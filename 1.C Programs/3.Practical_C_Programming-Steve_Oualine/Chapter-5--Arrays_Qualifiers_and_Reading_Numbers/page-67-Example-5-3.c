/********************************************************
 * [File: full/full.c] 
 * ******************************************************/ 

#include <stdio.h>
#include <string.h>

char first[100];	// first name
char last[100];		// last name
char full_name[200];	// full version of first and last name

int main()
{
	strcpy(first, "Steve");	// Initialize first name
	strcpy(last, "Oualine");// Initialize last name

	strcpy(full_name, first);	// full = "Steve"
	// Note: strcat not strcpy
	strcat(full_name, " ");		// full = "Steve "
	strcat(full_name, last);	// full = "Steve Oualine"

	printf("The full name is %s\n", full_name);

	return (0);
}
