// Que 7.c

// compile  with 7-b.c

#include <stdio.h>
#include "7.h"

void clear_input_stream(void);

void clear_input_stream(void)
{
	while (getchar() != '\n')
		continue;
}

int main(void)
{
	int sets, dice, sides;

	puts("Enter the number of sets; enter q to stop.");
	while (scanf("%d", &sets) == 1 && sets > 0)
	{
		dice = sides = -1;
		printf("How many sides and how many dice? ");
		scanf("%d %d", &sides, &dice);
		while (dice < 0 || sides < 0)
		{
			clear_input_stream();
			puts("Invalid input. Postive integers only.");
			puts("How many sides and how many dice? ");
			scanf("%d %d", &sides, &dice);
		}

		dicerolls(sets, dice, sides);

		puts("How many sets? Enter q to stop.");
	}

	return 0;
}
