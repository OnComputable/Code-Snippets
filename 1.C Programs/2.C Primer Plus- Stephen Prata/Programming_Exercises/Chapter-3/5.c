// Que5
#include<stdio.h>

int main(void)
{
	// declaration
	double Seconds_In_Year = 3.156e+7,My_Age;

	// user input
	printf("Enter your age in years: ");
	scanf("%lf", &My_Age);

	// conversion
	Seconds_In_Year *=My_Age;
	printf("My age in seconds is: %e\n", Seconds_In_Year);

	return 0;
}
