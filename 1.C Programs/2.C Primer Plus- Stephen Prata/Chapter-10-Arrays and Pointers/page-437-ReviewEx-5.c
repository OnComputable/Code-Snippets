// what will be the output
#include <stdio.h>

int main(void)
{
	int (*ptr)[2];
	//int torf[2][2] = {12, 14, 16};
	int fort[2][2] = { {12}, {14, 16}};
	//ptr = torf;
	ptr = fort;

	printf("%d  %d\n", **ptr, **(ptr + 1));

	return 0;
}
