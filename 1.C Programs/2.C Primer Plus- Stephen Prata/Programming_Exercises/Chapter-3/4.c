// Que4
#include<stdio.h>

int main(void)
{
	// variable declaration.
	float Test_Number;

	// user input
	printf("Enter a floating-point value: ");
	scanf("%f", &Test_Number);
	 
	// value representations.
	printf("fixed point notation: %d\n", Test_Number);
	printf("exponential notation: %e\n", Test_Number);
	printf("p notation: %p\n", Test_Number);

	return 0;
}
