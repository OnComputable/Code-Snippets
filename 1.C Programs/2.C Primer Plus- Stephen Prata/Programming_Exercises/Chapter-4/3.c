// Que3

#include<stdio.h>

int main(void)
{
	float First_Float, Second_Float;

	printf("Enter the 2 values:\n");
	scanf("%f", &First_Float);
	scanf("%f", &Second_Float);

	printf("The first value is: %.1f\nThe second value is: %.2e\n", First_Float, Second_Float);
	printf("The first value is: %+.3fThe second value is:%.3E\n", First_Float, Second_Float);

	return 0;
}
