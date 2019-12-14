// Que 6
#include <stdio.h>

void sort_variables(double *num1, double *num2, double *num3);

void sort_variables(double *num1, double *num2, double *num3)
{
	double temp;

	if(*num1 > *num2)
	{
		// switch num1 and num2
		temp = *num2;
		*num2 = *num1;
		*num1 = temp;
	}

	if(*num2 > *num3)
	{
		// switch num2 and num3
		temp = *num3;
		*num3 = *num2;
		*num2 = temp;

		if(*num1 > *num2)
		{
			// switch num1 and num2
			temp = *num2;
			*num2 = *num1;
			*num1 = temp;
		}
	}

}

int main(void)
{
	double num1, num2, num3;

	printf("Test sort_variables() : \n");
	printf("Enter three numbers num2, num2 and num3:\n");

	while (scanf("%lf %lf %lf", &num1, &num2, &num3) == 3)
	{
		putchar('\n');
		printf("Before calling sort_variables:\n");
		printf("num1 = %.3f, num2 = %.3f, num3 = %.3f\n", num1, num2, num3);

		sort_variables(&num1, &num2, &num3);
		
		putchar('\n');

		printf("After calling sort_variables:\n");
		printf("num1 = %.3f, num2 = %.3f, num3 = %.3f\n", num1, num2, num3);

		putchar('\n');

		printf("Enter three numbers num1, num2, and num3:\n");

	}

	return 0;
}
