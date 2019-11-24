// Que 10
#include<stdio.h>

#define RATE_1 0.15f
#define RATE_2 0.28f

void flush_input_buffer(void); // used from sgreen lee

void flush_input_buffer(void)
{
	while(getchar() != '\n')
		;
}

int main(void)
{
	int Choice;
	float Income, Bracket, Taxes;

	printf("US 1988 Tax Calculator\n");

	while(1)
	{
		printf("*********************************************************\n");
		printf("\n1] Single		2] Head of Household\n");
		printf("3] Married, joint	4] Married Separate\n");
		printf("Enter your choice or press '5' to quit: ");
		printf("\n*********************************************************\n");
		scanf("%d", &Choice);

		switch(Choice)
		{
			case 1:	Bracket = 17850.0;
				break;
			case 2: Bracket = 23900.0;
				break;
			case 3: Bracket = 29750.0;
				break;
			case 4: Bracket = 14875.0;
				break;
			case 5: printf("Done!\n");
				return 0;
			default:
				flush_input_buffer();
				printf("Enter the correct input (i.e. between 1-5). \n");
				continue;
		}
		printf("Enter your income: ");
		while(scanf("%f",&Income) != 1 || Income < 0)
		{
			flush_input_buffer();
			printf("Invalid input: Please enter a positive number.\n");
			printf("Enter your income: ");
		}

		if(Income > Bracket)
			Taxes = RATE_2 * (Income - Bracket) + RATE_1 * Bracket;
		else
			Taxes = RATE_1 * Income;

		printf("You will owe $%.2f in taxes.\n\n", Taxes);

	}
	return 0;
}
