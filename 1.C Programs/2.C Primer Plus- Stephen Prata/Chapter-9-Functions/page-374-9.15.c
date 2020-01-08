// swap3.c -- using pointers to make swapping work
#include<stdio.h>
void interchange(int *u, int *v);

void interchange(int *u, int *v)
{
	int temp;

	temp = *u;	// temp gets value that u points to
	*u = *v;
	*v = temp;
}

int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);	// send addresses to function
	printf("Now x = %d and y = %d.\n", x, y);

	return 0;
}
