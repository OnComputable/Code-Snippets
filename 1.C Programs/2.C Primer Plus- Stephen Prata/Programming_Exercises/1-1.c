/* Inch to Centimeter Conversion */
#include<stdio.h>

void main(void)
{
	float inch,centimeter;

	printf("Enter the value in inches:");
	scanf("%f",&inch);

	if(inch < 0)
	{
		printf("\nEnter the valid Value!!\n");
	}
	else
	{
		centimeter = 2.54 * inch;
		printf("The value in Centimeter is: %.3f cm.\n", centimeter);
	}
}
