// Que 10
#include <stdio.h>
#include <stdlib.h>

void to_base_n(int integer, int base);

void to_base_n(int integer, int base)
{
	// handling invalid bases
	if (base < 2 || 10 < base)
	{
		printf("Error: base must be between 2 and 10");
		return;
	}

	// stop recursion
	if (integer == 0) return;

	// handle negative integers
	if (integer < 0)
	{
		putchar('-');
		integer = abs(integer);
	}

	to_base_n(integer / base, base);
	printf("%d", integer % base);

	return;
}


int main(void)
{
	int integer , base;

	printf("Test to_base_n() function\n");
	printf("Enter an integer in base 10 and a base to convert to: ");

	while (scanf("%d %d", &integer, &base) == 2)
	{
		to_base_n(integer, base);
		putchar('\n');

		printf("Enter an integer in base 10 and a base to convert to: \n");
	}

	return 0;
}
