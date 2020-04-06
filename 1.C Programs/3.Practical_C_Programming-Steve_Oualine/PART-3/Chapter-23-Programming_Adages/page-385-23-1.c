/********************************************************
 * [ File: not2/not2.c ]
 * ******************************************************/ 
#include <stdio.h>
int main(void)
{
	char line[80];
	int number;

	printf("Enter the number: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &number);

	if (number =! 2)
		printf("Number is not two\n");
	else
		printf("Number is two\n");

	return (0);
}

/********************************************************
 * Question: 23-1 : Answer: The reason why it is not
 * 		working the way it should be because
 * 		of the logical error made in the if 
 * 		statement condition that is the statement
 * 		should be if (number != 2)
 * ******************************************************/ 
