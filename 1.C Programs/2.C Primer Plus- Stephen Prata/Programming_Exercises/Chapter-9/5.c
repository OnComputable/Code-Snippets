// Que 5
#include <stdio.h>

// function declaration
void larger_of(double *, double *);

// function definition
void larger_of(double *num1, double *num2)
{
	(*num1 > *num2) ? (*num2 = *num1) : (*num1 = *num2);
}


int main(void)
{
	double num1, num2;

	printf("Test larger_of() function:\n");
	printf("****************************\n");
	printf("Enter two numbers num1  and num2: ");
	
	while (scanf("%lf %lf", &num1, &num2) == 2)
	{
		printf("Before calling larger_of(): \n");
		printf("num1 = %.3f, num2 = %.3f\n", num1, num2);

		larger_of(&num1, &num2);

		printf("After calling larger_of(): \n");
		printf("num1 = %.3f, num2 = %.3f\n", num1, num2);

		printf("Enter two numbers num1 and num2: ");
	}

	return 0;
}
