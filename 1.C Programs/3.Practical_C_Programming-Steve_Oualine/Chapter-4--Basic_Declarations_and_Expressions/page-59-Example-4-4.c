/* q_zero/q_zero.c */

#include <stdio.h>	

float answer;	/* The result of our calculation */ 

int main()
{
	answer = 1/3;
	printf("The value of 1/3 is %f\n", answer);

	return (0);
}


/****************************************************** 
 * Que 4-2 : Answer :: Because the values used in the 
 * 	fraction 1/3 are or either of them is not float.
 *
 * The Correct program would be:
 *
 * #include <stdio.h>
 *
 * float answer;
 *
 * int main()
 * {
 * 	answer = 1/3.0;
 * 	printf("The value of 1/3 is %f\n", answer);
 *
 * 	return (0);
 * }
 * ******************************************************/ 
