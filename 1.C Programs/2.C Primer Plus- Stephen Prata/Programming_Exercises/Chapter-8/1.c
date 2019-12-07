// Que 1.c

#include<stdio.h>

int main(void)
{
	char ch;
	int counter = 0;

	while((ch = getchar()) != EOF)
	{
		++counter;
	}

	printf("\nThe number of characters are: %d\n", counter);

	return 0;
}
