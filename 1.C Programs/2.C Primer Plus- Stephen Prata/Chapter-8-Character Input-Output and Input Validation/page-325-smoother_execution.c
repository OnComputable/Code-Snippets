#include<stdio.h>
char get_choice(void);
void count(void);
char get_choice_reimproved(void);		// getchoice by accepting only first character and discarding the rest
char get_first(void);		// function for internal implementation of get_choice2()
void count_reimproved(void);

char get_choice(void)
{
	int ch;

	printf("Enter the letter of your choice:\n");
	printf("a. advice		b. bell\n");
	printf("c. count		q. quit\n");
	ch = getchar();
	while((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Please respond with a, b, c, or q.\n");
		ch = getchar();
	}

	return ch;
}

char get_choice_reimproved(void)
{
	int ch;

	printf("Enter the letter of your choice:\n");
	printf("a. advice		b. bell\n");
	printf("c. count		q. quit\n");
	ch = get_first();
	while((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Please respond with a, b, c, or q.\n");
		ch = get_first()
	}

	return ch;
}

char get_first(void)
{
	int ch;

	ch = getchar();		// read the next character
	while(getchar() != '\n')
	{	
		continue;	// skip rest of line
	}	
	return ch;
}

void count(void)
{
	int n,i;

	printf("Count how far? Enter an integer:\n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		printf("%d\n", i);
}

void count_reimproved(void)
{
	int n,i;

	printf("Count how far? Enter an integer:\n");
	n = get_int();
	for(i = 1; i <= n; i++)
		printf("%d\n", i,);
	while(getchar() != '\n')
		continue;
}

int get_int(void)
{
	int input;
	char ch;

	while(scanf("%d", &input) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);	// dispose of bad input
		printf(" is not an integer.\nPlease enter an ");
		printf("integer value, such as 25, -178, or 3: ");
	}	

	return input;
}

int main(void)
{
	int choice;

	while((choice = get_choice()) != 'q')
	{
		switch(choice)
		{
			case 'a' : printf("Buy low, sell high.\n");
				   break;
			case 'b' : putchar('\a');	// ANSI
				   break;
			case 'c' : count();
				   break;
			default  : printf("Program error!\n");
				   break;
		}
	}

	return 0;
}
