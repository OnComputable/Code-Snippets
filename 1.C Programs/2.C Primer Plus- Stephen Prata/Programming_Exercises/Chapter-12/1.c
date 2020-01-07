// Que 1.c

#include <stdio.h>

void critic(int *units);

void critic(int *units)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", units);
}

int main(void)
{
	int units;	// an optional redeclaration

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic(&units);
	printf("You must have looked it up!\n");

	return 0;
}
