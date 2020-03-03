/********************************************************
 * [ Write a program that deliberately makes the foll-
 * owing mistakes.
 * - Prints a floating-point number using the %d conversion.
 * - Prints an integer using the %f conversion.
 * - Prints a character using the %d conversion. ]
 * ******************************************************/ 

#include <stdio.h>

int main()
{
	int Int;
	float Float;
	char Char;

	printf("Enter an Integer:\n");
	scanf("%d", &Int);
	printf("This your interger %f.\n", Int);

	printf("Enter a Floating point number:\n");
	scanf("%f", &Float);
	printf("This is your Float %d.\n", Float);
	
	printf("Enter a Character:\n");
	scanf("%c", &Char);
	printf("This is your character %d.\n", Char);

	return (0);
}
