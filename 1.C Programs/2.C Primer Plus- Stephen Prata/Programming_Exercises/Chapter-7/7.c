//Que 7
#include<stdio.h>
#define BASIC_PAY 10.0
#define OVERTIME_HOURS 40.0
#define OVERTIME_INCREMENTOR 1.5
#define TAX_RATE_FOR_FIRST_300 0.15
#define TAX_FIRST_BOUNDRY 300
#define TAX_RATE_FOR_NEXT_150 0.20
#define TAX_SECOND_BOUNDRY 450
#define TAX_RATE_FOR_REST 0.25

float gross_pay(float Hours_Per_Week);
float Calculate_Taxes(float Gross_Pay);

float gross_pay(float Hours_Per_Week)
{
	if(Hours_Per_Week > OVERTIME_HOURS)
	{
		return OVERTIME_HOURS*BASIC_PAY + (Hours_Per_Week - OVERTIME_HOURS) * BASIC_PAY * OVERTIME_INCREMENTOR;
	}
	else
	{
		return Hours_Per_Week * BASIC_PAY;
	}
}

float Calculate_Taxes(float Gross_Pay)
{
	if(Gross_Pay > TAX_SECOND_BOUNDRY)
	{
		return TAX_RATE_FOR_REST * (Gross_Pay - TAX_SECOND_BOUNDRY) + TAX_RATE_FOR_NEXT_150 * (TAX_SECOND_BOUNDRY - TAX_FIRST_BOUNDRY) + TAX_RATE_FOR_FIRST_300 * TAX_FIRST_BOUNDRY;
	}
	else if(Gross_Pay > TAX_FIRST_BOUNDRY)
	{
		return TAX_RATE_FOR_NEXT_150 * (Gross_Pay - TAX_FIRST_BOUNDRY) + TAX_RATE_FOR_FIRST_300 * TAX_FIRST_BOUNDRY;
	}
	else
	{
		return TAX_RATE_FOR_FIRST_300 * Gross_Pay;
	}
	
}

int main(void)
{
	float Hours_Per_Week, Gross_Pay, Taxes, Net_Pay;

	printf("Enter the hours worked in a week: ");
	
	if(scanf("%f", &Hours_Per_Week) == 1)
	{
		Gross_Pay = gross_pay(Hours_Per_Week);
		Taxes = Calculate_Taxes(Gross_Pay);
		Net_Pay = Gross_Pay - Taxes;

		printf("For %.1f hours of work you get $%.2f and pay $%.2f taxes.\n\n", Hours_Per_Week, Gross_Pay, Taxes);
		printf("Your Net Pay is $%.2f\n", Net_Pay);
	}
	
	return 0;
}
