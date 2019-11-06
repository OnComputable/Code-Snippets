//Que 4
#include<stdio.h>
#define ONE_FOOT_CM 30.48
#define ONE_INCH_CM 2.54
int main(void)
{
	float Height_in_CM, Foot, Inches;
	double Height;

	printf("Enter a height in centimeters:");
	scanf("%f", &Height_in_CM);

	while(Height_in_CM > 0)
	{
		Foot =(int)(Height_in_CM / ONE_FOOT_CM); 
		Inches = (Height_in_CM / ONE_FOOT_CM)- Foot;
		Inches *= 12;

		printf("%.0f cm = %.0f feet, %.1f inches\n", Height_in_CM, Foot, Inches);

		printf("Enter a height in centimeter (<=0 to quit): ");
		scanf("%f", &Height_in_CM);
	}

	return 0;
}
