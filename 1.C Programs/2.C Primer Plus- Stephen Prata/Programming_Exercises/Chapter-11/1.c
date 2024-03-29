// Que 1.c

#include <stdio.h>
#include <string.h>

#define SIZE 20

char * sgetnchar(char *array, int n);

char * sgetnchar(char *array, int n)
{
	// gets n characters from input and stores them in character array
	
	char ch;

	for (int i= 0; i < n; i++)
	{
		if ((ch = getchar()) == EOF)
			break;

		*(array + i) = ch;
	}

	return array;
}

int main(void)
{
	// test sgetnchar
	
	char hello[SIZE] = "Hello, ";
	int space = SIZE - strlen(hello) - 1;

	printf("What's your name? (enter %d characters)\n", space);
	sgetnchar(hello + 7, space);
	puts(hello);

	return 0;
}
