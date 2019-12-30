// Que 5.c

#include <stdio.h>
#define LIMIT 50

char * findchar(char *str, const char ch);

char * findchar(char *str, const char ch)
{
	// find and return pointer to first occurece of
	// char ch in string str. return NULL if not found
	
	while (*str != '\0')
	{
		if (*str == ch)
			return str;
		str++;
	}

	// if ch is not found, return NULL
	return NULL;
}

int main(void)
{
	char string[LIMIT];
	char *chloc;
	char ch;

	// test findchar()
	printf("Enter a string to search: ");
	fgets(string, LIMIT, stdin);
	while (string[0] != '\n')
	{
		printf("Enter a character to search for: ");
		ch = getchar();
		// discard rest of line if any
		if (ch != '\n')
			while (getchar() != '\n')
				continue;

		chloc = findchar(string, ch);
		if (chloc == NULL)
			printf("Character %c not found in %s", ch, string);
		else
			printf("Character %c found at index %lu in %s", ch, chloc - string, string );

		// get new input
		printf("Enter a string to search (empty line to quit): ");
		fgets(string, LIMIT, stdin);
	}

	puts("Bye");

	return 0;
}
