// Que 3

#include <stdio.h>

// function declaration
void printer(char, int, int);	

// function definition
void printer(char ch, int rows, int cols)
{
	// prints given character in a block sized rows * cols
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}

// main function
int main(void)
{
	char ch;
	int rows, cols;

	printf("Enter a character, number of rows and number of columns: ");

	while (scanf("%c %d %d", &ch, &rows, &cols) == 3)
	{
		printer(ch, rows, cols);
		printf("Enter a character, number of rows and number of columns: ");
	}

	return 0;
}
