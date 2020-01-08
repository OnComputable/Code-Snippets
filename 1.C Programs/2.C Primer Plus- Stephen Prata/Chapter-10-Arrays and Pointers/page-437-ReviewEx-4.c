// what is value of *ptr and *(ptr + 2)

#include <stdio.h>

int main(void)
{
	int *ptr;
	//int torf[2][2] = {12,14,16};
	int fort[2][2] = { {12}, {14,16} };
	//ptr = torf[0];
	ptr = fort[0];

	printf("%d  %d\n", *ptr, *(ptr + 2));

	return 0;
}
