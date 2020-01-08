// what's my behaviour on funtion call with certain input
#include <stdio.h>

char *pr(char *str);

char *pr(char *str)
{
	char *pc;

	pc = str;
	while (*pc)
		putchar(*pc++);
	do {
		putchar(*--pc);
	   } while (pc - str);
	return (pc);
}

int main(void)
{
	char * x;

	x = pr("Ho Ho Ho!");

	return 0;
}
