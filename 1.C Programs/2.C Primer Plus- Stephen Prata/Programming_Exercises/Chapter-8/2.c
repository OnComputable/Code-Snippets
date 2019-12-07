// Que 2
#include<stdio.h>

int main(void)
{
	// variable declaration.
	int ch, char_count = 0;

	// for character inputs until EOF.
	while((ch = getchar()) != EOF)
	{	
		// for space character
		if (ch >= ' ' )
			printf("\n\'%c\': %d\n", ch, ch);
		// for newline character
		else if (ch == '\n')
			printf("\n\'\\n\': %d\n", ch);
		// for tab character
		else if (ch == '\t')
			printf("\n\'\\t\': %d\n", ch + 64, ch);
		else	// ascii control characters
			printf("\n\'^%c\': %d\n", ch + 64, ch);

		char_count++;
		if(char_count % 10 == 0)
			printf("\n");	// print new line for every 10 characters
		else
			printf(" ");	// otherwise, print spaces
	}

	printf("\n");

	return 0;
}
