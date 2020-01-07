// Que 4

#include <stdio.h>

unsigned int counter(void);

unsigned int counter(void)
{
	static unsigned int call_count = 0;
	return ++call_count;
}

int main(void)
{
	// test counter()
	int iterations = 0;
	printf("How many times do you want to call counter()? ");
	scanf("%d", &iterations);
	for (int i = 0; i < iterations; i++)
		printf("counter() returns %u\n", counter());

	return 0;
}
