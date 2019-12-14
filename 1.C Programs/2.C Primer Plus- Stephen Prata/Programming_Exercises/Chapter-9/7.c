// Que 7
#include <stdio.h>
#include <ctype.h>

int letter_location(char ch);

int letter_location(char ch)
{

	if (isalpha(ch))
	{
		ch = tolower(ch);
		return (ch - 'a' + 1);
	}
	else
	{
		return -1;
	}
}

int main(void)
{
	char ch;
	int location = 0;

	while ((ch = getchar()) != EOF)
	{
		if ((location = letter_location(ch)) == -1)
		{
			printf("%c is not a letter\n\n", ch);
		}
		else
		{
			printf("%c is a letter: location = %d\n", ch, location);
		}
	}

	return 0;
}
