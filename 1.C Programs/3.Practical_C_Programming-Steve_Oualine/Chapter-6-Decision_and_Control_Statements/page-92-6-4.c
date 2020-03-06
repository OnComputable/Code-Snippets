/********************************************************
 * [ File: owe0/owe0.c ]
 * ******************************************************/ 
#include <stdio.h>
char line[80];		// input line
int balance_owed;	// amount owed

int main()
{
	printf("Enter number of dollers owed:");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &balance_owed);

	if (balance_owed = 0)
		printf("You owe nothing.\n");
	else
		printf("You owe %d dollers.\n", balance_owed);

	return (0);
}

/********************************************************
 * Que 6-1: The program gives wrong output because
 * 	Balance_owed = 0 istead of Balance_owed == 0
 * 	i.e assingment operator is used in place of 
 * 	comparison operator.
 * ******************************************************/ 
