// Que 3.c

#include <stdio.h>
#define CLEARINPUT while (getchar() != '\n') continue;

int onbits(int n);

int onbits(int n)
{
	// returns number of bits in n set to 1
	int count = 0;
	while (n != 0)
	{
		if (n & 1)
			count++;
		n >>= 1;
	}
	return count;
}

int main(void)
{
	// test onbits
	
	int n, bits;

	printf("Enter an integer (non-integer to quit): ");
	while (scanf("%d", &n) == 1)
	{
		CLEARINPUT;

		bits = onbits(n);
		printf("There are %d on bits in %d\n", bits, n);
		printf("Enter an integer (non-integer to quit): ");
	}

	return 0;
}
