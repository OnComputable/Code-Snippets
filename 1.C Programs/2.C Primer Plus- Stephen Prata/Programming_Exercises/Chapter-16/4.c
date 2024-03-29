// Que 4.c

#include <stdio.h>
#include <time.h>

void timeout(double time);

void timeout(double time)
{
	clock_t start, end;

	start = clock();

	while (((end = clock()) - start) / (double) CLOCKS_PER_SEC < time)
		continue;

	return;
}

int main(void)
{
	double time;

	printf("Enter desired time delay in seconds: ");
	while (scanf("%lf", &time) == 1)
	{
		puts("Starting.");
		timeout(time);
		printf("It is now %2f seconds later!\n", time);
		printf("Enter desired time delay in seconds: ");
	}
	puts("Bye.");

	return 0;
}
