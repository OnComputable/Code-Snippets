/********************************************************
 * [ File: copy/copy.c ]
 * ******************************************************/ 

#include <stdio.h>
const char FILE_NAME[] = "input.txt";
#include <stdlib.h>

int main()
{
	int count = 0;		// number of characters seen
	FILE *in_file;		// input file

	// character of EOF flag from input
	int ch;

	in_file = fopen("input.txt", "r");
	if (in_file == NULL)
	{
		printf("Cannot open %s\n", "input.txt" );
		exit(8);
	}

	while (1)
	{
		ch = fgetc(in_file);
		if (ch == EOF)
			break;
		++count;
	}

	printf("Number of characters in %s is %d\n", "input.txt", count);
	fclose(in_file);

	return (0);
}
