/******************************************************* 
 * Que2: Write a program to calculate the volume of a 
 * 	sphere. 4/3Pier^3
 * ******************************************************/ 

#include <stdio.h>

// Algo
// var declaration float volume, radius;
// const float pie = 3.14
// Print results.

int main()
{
	float Volume, Rad;
	const float PIE = 3.14;

	printf("Enter the radii value to calculate volume of sphere: \n");
	scanf("%f", &Rad);
	printf("The volume of sphere with radii %.2f is : %.2f\n", Rad, (4/3.0)*PIE*(Rad*Rad*Rad) );
	printf("Bye!\n");
	return (0);
}
