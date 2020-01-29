// Que 4.c

#include <stdio.h>
#include <limits.h>

#define CLEARINPUT while (getchar() != '\n') continue

int checkbit(int value, int position);

int checkbit(int value, int position)
{
	// return the state of the bit in the given position of the integer value
	
	value >>= (position - 1);
	return value & 1;
}

int main(void)
{
	// test checkbit()
	
	int value, position, ch;

	printf("Enter an integer: ");
	while (scanf("%d", &value) == 1)
	{
		printf("Enter a position: ");
		while (scanf("%d", &position) == 1)
		{
			printf("Position %d of %d is %d\n", position, value, 
					checkbit(value, position));
			printf("Enter a position: ");
		}
		CLEARINPUT;
		printf("\nEnter an integer: ");
	}

	puts("Bye.");

	return 0;
}
