// two_func.c
// program using two function in a single file

#include<stdio.h>

void butler(void);		// function prototyping

void butler(void)
{
	printf("You rang, Sir?\n");
}	

int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVD's.\n");

	return 0;
}
