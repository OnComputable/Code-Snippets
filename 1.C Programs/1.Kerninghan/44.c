#include<stdio.h>

int rand(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int) (next/65536) % 32768;
}

void strand(unsigned int seed)
{
	next = seed;
}
main()
{
 rand();
 strand();
}
