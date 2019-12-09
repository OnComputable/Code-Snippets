// Que 8
#include <stdio.h>
#include <ctype.h>

int get_first(void);
void print_menu(void);
float get_number(void);

int get_first(void)
{
	// returns first non-whitespace character
	int ch;

	do ch = getchar(); while (isspace(ch));

	while (getchar() != '\n')
		;

	return ch;
}

void print_menu(void)
{
	printf("\nEnter the operation of your choice:\n");
	printf("a. add			s. subtract\n");
	printf("m. multiply		d. divide\n");
	printf("q. quit\n\n");
}

float get_number(void)
{

	int ch;
	float num;

	while (scanf("%f", &num) != 1)
	{
		while ((ch = getchar()) != '\n')	// echo user input and clear stream
			putchar(ch);

		printf(" is not a number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}

	return num;
}

int main(void)
{
	int operation;
	float num1, num2;

	print_menu();

	while ((operation = get_first()) != 'q' )
	{
		// condition is added to filter out the wrong input and not letting it access to the printf statement if it doesn't belong to the menu choices.
		if(operation == 'a' || operation == 's' || operation == 'm' || operation == 'd')
		{
			printf("Enter first number: ");
			num1 = get_number();
			printf("Enter second number: ");
			num2 = get_number();
		}

		switch (operation)
		{
			case ('a') :
				printf("%.3f + %.3f = %.3f = %.3f\n", num1, num2, num1 + num2);
				break;
			case ('s') :
				printf("%.3f - %.3f = %.3f\n", num1, num2, num1 - num2);
				break;
			case ('m') :
				printf("%.3f * %.3f = %.3f\n", num1, num2, num1 * num2);
				break;
			case ('d') :
				while (num2 == 0)
				{
					printf("Enter a number other than 0: ");
					num2 = get_number();
				}
				printf("%.3f / %.3f = %.3f\n", num1, num2, num1 / num2);
				break;
			default :
				printf("I do not recognize that input. Try again.");
		}
		print_menu();
	}

	return 0;
}
