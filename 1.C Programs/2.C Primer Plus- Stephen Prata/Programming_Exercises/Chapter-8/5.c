// Que 5

#include <stdio.h>

int main(void)
{
	// initial search parameters
	int UPPER_BOUND = 100;
	int LOWER_BOUND = 0;
	int GUESS = 50;

	// while loop parameter
	char ch;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it. \nRespond with a y if my guess is right, with a h if it's");
	printf("\ntoo high and an l if it's too low.\n");
	printf("Uh...is your number %d?\n", GUESS);

	while((ch = getchar()) != 'y')
	{
		while (getchar() != '\n')  // clear input stream
			;
		if (ch == 'h')
			UPPER_BOUND = GUESS;
		else if (ch == 'l')
			LOWER_BOUND = GUESS;
		else
		{
			printf("Invalid valid input. Try again.\n");
			continue;
		}
		GUESS = (UPPER_BOUND + LOWER_BOUND) / 2.0;
		printf("Well, then is it %d?\n", GUESS);
	}

	printf("I knew I could do it!\n");

	return 0;
}
