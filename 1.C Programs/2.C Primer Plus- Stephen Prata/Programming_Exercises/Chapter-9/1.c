// Que 1

#include <stdio.h>

// function declaration or signature
double min(double, double);

// function definition
double min(double x, double y)
{
	return x < y ? x : y ;
}


// main program
int main(void)
{
	double x, y;

	printf("Enter two double values (press 'q' to quit): ");

	while (scanf("%lf %lf",&x, &y) == 2)
	{
		printf("The minimum of %.3f and %.3f is %.3f.\n", x, y, min(x,y));
		printf("Enter 'q' to exit.\n");
	}

	return 0;
}
