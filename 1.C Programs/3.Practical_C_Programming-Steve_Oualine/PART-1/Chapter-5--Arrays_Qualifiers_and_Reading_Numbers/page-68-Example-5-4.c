/********************************************************
 * [File: length/length.c]
 * ******************************************************/ 

#include <stdio.h>
#include <string.h>

char line[100];	// Line we are looking at

int main()
{
	printf("Enter a line: ");
	fgets(line, sizeof(line), stdin);

	printf("The length of the line is: %d\n", strlen(line));
	
	return (0);
}
