//Que 7
#include<stdio.h>

int CubeMe(int number);

int CubeMe(int number)
{
	number = number * number * number;
	return number;
}

int main(void)
{
	double Number, Result;
	
	printf("Enter the number to be cubed:\n");
	scanf("%lf", &Number);

	Result = CubeMe(Number);

	printf("The cube of %.0lf is %.0lf.\n", Number, Result);

	return 0;
}
