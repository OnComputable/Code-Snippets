// Que7

#include<stdio.h>

int main(void)
{
	// declaration
	float One_Inch = 2.54, Inches;

	// user input
	printf("Enter your height in inches: ");
	scanf("%f",&Inches);

	One_Inch *= Inches;

	printf("Your height in centimeter is: %f\n", One_Inch);

	return 0;
}
