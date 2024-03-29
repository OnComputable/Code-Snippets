// Que 2.c

#include <stdio.h>
#include "1.h"

#define INVERSE(X) (1. / (X))
#define HARM_MEAN(X, Y) (1. / ((INVERSE(X) + INVERSE(Y)) / 2))

int main(void)
{
	// test HARM_MEAN
	
	double x, y;
	printf("Enter two numbers: ");
	while (scanf("%lf %lf", &x, &y) == 2)
	{
		CLEARINPUT;
		printf("The harmonic mean of %.3f and %.3f is: %.3f.\n", x, y, HARM_MEAN(x, y));

		printf("Enter two numbers: ");
	}
	puts("Bye. ");

	return 0;
}
