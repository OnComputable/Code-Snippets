// Que 4.c
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 20

char * getword(char *target, int max);

char * getword(char *target, int max)
{
	// read input into character array target
	// stop after first word, EOF or max characters
	// discard rest of the line
	
	char ch;
	int i = 0;
	bool inword = false;

	while ((ch = getchar()) != EOF && i < max)
	{
		if (isspace(ch))
		{
			if (inword)
				break;	// word is over, exit while loop
			else
			{
				continue;	// skip leading whitespace
			}
		}

		// if ch is not whitespace
		if (!inword)
			inword = true;

		*(target + i) = ch;
		i++;
	}

	// discard rest of the line if any
	if (ch != '\n')
		while ((ch = getchar()) != '\n')
			continue;

	return target;
}


int main(void)
{
	// test getword()
	
	char hello[SIZE] = "Hello, ";
	int space = SIZE - strlen(hello) - 1;

	puts("What's your name?");
	getword(hello + 7, space);
	puts(hello);

	return 0;
}
