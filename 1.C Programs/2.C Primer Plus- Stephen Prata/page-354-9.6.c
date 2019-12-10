// recur.c -- recursion illustration
#include<stdio.h>

void up_and_down(int);

void up_and_down(int n)
{
	printf("Level %d: n location %u\n", n, &n);	// 1
	if(n < 4)
		up_and_down(n+1);
	printf("LEVEL %d: n location %u\n", n, &n);	// 2
}

int main(void)
{
	up_and_down(1);

	return 0;
}
