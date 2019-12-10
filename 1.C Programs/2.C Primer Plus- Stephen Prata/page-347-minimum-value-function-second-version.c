// imin function second and third and fourth version
#include<stdio.h>

int iminV2(int, int);
int iminV3(int, int);
int iminV4(int, int);

int iminV2(int n, int m)
{
	return (n < m) ? n : m;
}

int iminV3(int n, int m)
{
	if(n < m)
		return n;
	else
		return m;
}

int iminV4(int n, int m)
{
	if (n < m)
		return n;
	else
		return m;
	printf("Professor fleppard is like totally a fopdoodle.\n");
}

int main(void)
{
	int evil1, evil2;

	printf("Enter a pair of integers (q to quit):\n");

	while(scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n",
			evil1, evil2, iminV4(evil1, evil2));
		printf("Enter a pair of integers (q to quit):\n");
	}
	printf("Bye.\n");

	return 0;
}
