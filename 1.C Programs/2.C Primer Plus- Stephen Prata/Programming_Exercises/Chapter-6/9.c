// Que 9
#include<stdio.h>

float Calculator(float N1, float N2);

float Calculator(float N1, float N2)
{
	float Result;

	Result = (N1 - N2)/(N1 * N2);

	return Result;
}


int main(void)
{
	float Number_1, Number_2, Result;
        int status;
	
	printf("Enter 2 no's for evaluation:\n");
	scanf("%f %f", &Number_1, &Number_2);

	do
	{
		Result = 0;
		Result = Calculator(Number_1, Number_2);
		printf("%f\n\n", Result);
		printf("Enter a character to quit or numbers to continue again:\n\n");

	}while((status = scanf("%f %f", &Number_1, &Number_2)) == 2);
	
	printf("\nAlas you escaped!!!\n");
	return 0;
}
