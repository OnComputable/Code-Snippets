// Que 2

#include <stdio.h>

// function declaration
void chline(char, int, int);

// function definition
void chline(char ch, int i, int j)
{
	int col;
	for(col = 1; col < i; col++)
	{
		putchar(' ');
	}
	
	for(; col <= j; col++)
	{
		putchar(ch);
	}
}

int main(void)
{
	char ch;
	int i, j;

	printf("Enter a character and two integers: ");
	while((scanf("%c %d %d", &ch, &i, &j)) == 3)
	{
		chline(ch, i, j);
		printf("\n");

		while(getchar() != '\n') continue;	// clear input

		printf("Enter a character and two integers: \n");
	}

	return 0;
}
