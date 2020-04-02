/********************************************************
 * [ File: sum/sum.c ]
 * ******************************************************/ 
#include <stdio.h> 

int sum(i1, i2, i3)
{
	int i1;
	int i2;
	int i3;

	return (i1 + i2 + i3);
}

int main()
{
	printf("Sum is %d\n", sum(1, 2, 3));
	return (0);
}

/********************************************************
 * Question : 19-3 : Answer : Expected result was output
 * 		but the program stops with compilation
 * 		error. The program is stopped because of
 * 		redeclaration of the variables i1, i2, i3
 * 		the values of the local variables are
 * 		considered rather than that of passed
 * 		once. But this error is caught by 
 * 		this compiler.
 * ******************************************************/ 
