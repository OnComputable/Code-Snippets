// Que 2.c

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 20

char * sgetnchar(char *array, int n);

char * sgetnchar(char *array, int n)
{
	// get characters from input and store them in character array
	// stopping after n characters or first whitespace
	
	int i = 0;
	char ch;

	while ((ch = getchar()) != EOF && !isspace(ch) && i < n)
	{
		*(array + i) = ch;
		i++;
	}

	return array;
}

int main(void)
{
	// test sgetnchar
	
	char hello[SIZE] = "Hello, ";
	int space = SIZE - strlen(hello) - 1;

	puts("What's your name?");
	sgetnchar(hello + 7, space);
	puts(hello);

	return 0;
}
