// review example 7
#include<stdio.h>

void salami(int num);

void salami(int num)
{
	int count;

	for( count = 1; count <= num; count++)
	{
		printf(" O salami mio!\n");
	}
}

int main(void)
{
	int num;
	num = 2;
	salami(num);

	return 0;
}
