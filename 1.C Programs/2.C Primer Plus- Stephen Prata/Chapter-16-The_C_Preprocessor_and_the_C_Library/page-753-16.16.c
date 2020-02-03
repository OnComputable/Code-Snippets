// byebye.c -- atexit() example
#include<stdio.h>
#include <stdlib.h>
void sign_off(void);
void too_bad(void);

void sign_off(void)
{
	puts("Thus terminats another magnificent program from");
	puts("SeeSaw Software!");
}

void too_bad(void)
{
	puts("SeeSaw Software extends it's heartfelt condolences");
	puts("to you upon the failure of your program.");
}

int main(void)
{
	int n;

	atexit(sign_off);	// register the sign_off() function
	puts("Enter an integer:");
	if (scanf("%d", &n) != 1)
	{
		puts("That's no integer!");
		atexit(too_bad);	// register the too_bad() function
		exit(EXIT_FAILURE);
	}
	printf("%d is %s.\n", n, (n % 2 == 0)? "even" : "odd");

	return 0;
}
