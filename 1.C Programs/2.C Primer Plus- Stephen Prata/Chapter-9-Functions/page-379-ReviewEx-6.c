// review que 6
#include<stdio.h>


void alter(int *x, int *y);
void alterVer2(int *x, int *y);

void alter(int *x, int *y)
{
	int temp;
	temp = *x + *y;
	*y = *x - *y;
	*x = temp;
}

void alterVer2(int *x, int *y)
{
	*x += *y;
	*y = *x - 2 * *y;
}

int main(void)
{	
	int x = 3, y = 2;

	alterVer2(&x, &y);
	printf("sum = %d , Difference = %d\n", x, y);

	return 0;
}
