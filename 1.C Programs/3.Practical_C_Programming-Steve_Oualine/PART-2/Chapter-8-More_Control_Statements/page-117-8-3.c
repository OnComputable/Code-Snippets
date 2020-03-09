/********************************************************
 * [ File: cent/cent.c ]
 * ******************************************************/ 
#include <stdio.h>
/*
 * This program produces a Celcius to Fahrenheit conversion
 * 	chart for the numbers 0 to 100.
 */

// The current Celcius temperature we are working with
int celsius;
int main()
{
	for (celsius = 0; celsius <= 100; ++celsius);
		printf("Celcius: %d Fahrenheit: %d\n", celsius, (celsius * 9) / 5 + 32);

	return (0);
}

/********************************************************
 * Que 8-1: It prints Celsius:101 Fahrenheit:213
 * 	Because the for loop doesn't have an entering 
 * 	point it is ended with a semicolon.
 * 	That is why we get the value as such.
 * 	To fix the program just remove the semicolon.
 * ******************************************************/

