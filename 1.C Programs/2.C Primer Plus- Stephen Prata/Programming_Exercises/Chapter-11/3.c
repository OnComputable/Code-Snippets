// Que 3.c

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 20

char * getword(char *target);

char * getword(char *target)
{
	// read input into character array target
	// stop after first word or EOF
	// discard rest of the line
	
	char ch;
	int i = 0;
	bool inword = false;

	while ((ch = getchar()) != EOF)
	{
		if (isspace(ch))
		{	
			if (inword)
			{
				break;	// word is over, exit while loop
			}
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

	printf("What's your name?");
	getword(hello + 7);
	puts(hello);

	return 0;
}
