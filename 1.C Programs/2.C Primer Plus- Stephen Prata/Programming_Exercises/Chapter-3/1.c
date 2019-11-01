// Que1
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
	// variable declaration
	int IntegerOverflow = 1;
	float FloatingPointOverflow = 1e+300, FloatingPointUnderflow = 1e-30000;

	// limit values for floating point and integer.
	printf("Limit values of Integer and Float as follows: \n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);

	// testing by giving the values beyond the limits.
	printf("\n\n");
	printf("Integer Overflow from biggest int: %d\n", INT_MAX+IntegerOverflow);
	printf("Floating point overflow with largest double: %e\n", DBL_MAX+FloatingPointOverflow );
	printf("Floating point underflow with smallest normal float: %e\n", FLT_MIN+FloatingPointUnderflow);


	return 0;
}
