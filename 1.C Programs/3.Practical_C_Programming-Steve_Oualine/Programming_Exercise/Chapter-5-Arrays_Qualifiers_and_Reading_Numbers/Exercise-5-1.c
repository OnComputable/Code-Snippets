/********************************************************
 * Que: Write a program that converts Centigrade to 
 * 	Fahrenheit. F = 9/5C + 32.
 * ******************************************************/ 
// Algo
// delcare var float: Celcius, Fahr, 
// Fahr = 9/5C + 32
// print results

#include <stdio.h>

int main()
{	
	float Celcius, Fahr;

	printf("Enter the value in Celcius: ");
	scanf("%f", &Celcius);
	printf("The value of  %.2f in Fahr is: %.2f\n", Celcius, (9.0/5)*Celcius + 32);
	printf("Bye!\n");

	return (0);
}
