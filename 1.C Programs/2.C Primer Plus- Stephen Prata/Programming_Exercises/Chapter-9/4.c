// Que 4

#include <stdio.h>

// function signature
double harmonic_mean(double, double);

// fucntion declaration
double harmonic_mean(double num1, double num2)
{
	return (2/ (1/num1 + 1/num2));
}

int main(void)
{
	double num1, num2;

	printf("Harmonic Mean Calculator\n");
	printf("Enter two numbers:\n");

	while (scanf("%lf %lf", &num1, &num2) == 2)
	{
		printf("%.2f\n", harmonic_mean(num1, num2));

		printf("Enter two numbers:\n");
	}


	return 0;
}
