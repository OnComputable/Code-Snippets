// Que 8

#include<stdio.h>

void one_three();
void two();
void three();

void one_three()
{
	printf("one\n");
	two();
	three();
}

void two()
{
	printf("two\n");
}

void three()
{
	printf("three\n");
}


void main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
}
