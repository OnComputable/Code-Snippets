// Que 8
#include<stdio.h>

int main(void)
{
	float Number_1, Number_2, Result;
	int status;

	printf("Enter two float values to carry out the operation:\n");
 	scanf("%f %f", &Number_1, &Number_2);
	
	do
	{
	Result = 0;
	Result = (Number_1 - Number_2)/(Number_1 * Number_2);

	printf("%f\n", Result);
	printf("\nPress a character to Quit:\n");

	}while((status = scanf("%f %f",&Number_1, &Number_2)) == 2);
	


	return 0;
}
