// Que 8
#include<stdio.h>
//#define BASIC_PAY 10.0
#define OVERTIME_HOURS 40.0
#define OVERTIME_INCREMENTOR 1.5
#define TAX_RATE_FOR_FIRST_300 0.15
#define TAX_FIRST_BOUNDRY 300
#define TAX_RATE_FOR_NEXT_150 0.20
#define TAX_SECOND_BOUNDRY 450
#define TAX_RATE_FOR_REST 0.25

float Basic_Pay;

float gross_pay(float Hours_Per_Week);
float Calculate_Taxes(float Gross_Pay);

float gross_pay(float Hours_Per_Week)
{	
	if(Hours_Per_Week > OVERTIME_HOURS)
	{
		return OVERTIME_HOURS * Basic_Pay + (Hours_Per_Week - OVERTIME_HOURS) * Basic_Pay * OVERTIME_INCREMENTOR;
	}
	else
	{
		return Hours_Per_Week * Basic_Pay;
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
	int Choice;
	int flag = 0;

	//printf("************************************************************************\n");
	//printf("Enter the number corresponding to the desired pay rate or action: \n");
	//printf("1) $8.75/hr \t\t\t2) $9.33/hr\n");
	//printf("3) $10.00/hr \t\t\t4) $11.20/hr\n");
	//printf("5) quit\n");
	//printf("*************************************************************************\n");
	
       do
       {
		  printf("************************************************************************\n");
	       	  printf("Enter the number corresponding to the desired pay rate or action: \n");
       		  printf("1) $8.75/hr \t\t\t2) $9.33/hr\n");
       		  printf("3) $10.00/hr \t\t\t4) $11.20/hr\n");
       		  printf("5) quit\n");
        	  printf("*************************************************************************\n");

		again:scanf("%d", &Choice);
		switch(Choice)
		{
			case 1: Basic_Pay = 8.75;
				  printf("Pay rate has been set to $8.75/hr\n");
				  break;
			case 2: Basic_Pay = 9.33;
				  printf("Pay rate has been set to $9.33/hr\n");
				  break;
			case 3: Basic_Pay = 10.00;
				  printf("Pay rate has been set to $10.00/hr\n");
				  break;
			case 4: Basic_Pay = 11.20;
				  printf("Pay rate has been set to $11.20/hr\n");
				  break;
			case 5: flag=1;
				  break;
			default:  printf("Enter a valid Choice!!\n");
				  goto again;
				  break;
		}
		
		if(flag == 1)
		{
			break;	
		}
		printf("Enter the number of hours that you worked for the week:\n");
		if(scanf("%f", &Hours_Per_Week) == 1)
		{
			Gross_Pay = gross_pay(Hours_Per_Week);
			Taxes = Calculate_Taxes(Gross_Pay);
			Net_Pay = Gross_Pay - Taxes;

			printf("For %.1f hours of work you get $%.2f and pay $%.2f taxes.\n\n", Hours_Per_Week, Gross_Pay, Taxes);
			printf("Your Net pay is $%.2f\n", Net_Pay);
		}

	flag = 0;
	}while(1);

    printf("Done!!\n");

	return 0;
}
