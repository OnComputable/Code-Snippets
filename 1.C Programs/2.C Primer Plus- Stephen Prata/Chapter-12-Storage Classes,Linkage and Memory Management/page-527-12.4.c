// global.c -- uses an external variable

#include <stdio.h>

int units = 0; 		// an external variable

void critic(void);

void critic(void)
{
	// optional redeclaration omitted
	printf("No luck, my friend. Try again.\n");
	scanf("%d", &units);
}

int main(void)
{
	extern int units;	// an optional redeclaration

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic();
	printf("You must have looked it up!\n");

	return 0;
}
