// Que 6
#include <stdio.h>
#include <ctype.h>		// used to check if the input character is space or not.

// used to get only the first character from the input.
int get_first(void);

int get_first(void)
{
	// returns first non-whitespace character and clears
	// remaining input until next line break or EOF
	
	int ch, garbage;

	// take an input until a space character arrives.
	do
	{
		ch = getchar();
	}while(isspace(ch));

	// take the input until the character is space or it is a end of file and remove it 
	// from the buffer.
	while((garbage = getchar()) != '\n' && garbage != EOF)
		;

	return ch;
}

int main(void)
{
	int ch;

	printf("Test program for get_first():\n");
	printf("Enter a line; you should see the first non-whitespace\n");
	printf("character echoed in the terminal:\n");

	ch = get_first();
	printf("%c\n", ch);

	return 0;
}
