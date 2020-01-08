// Review Ex 8
#include<stdio.h>

int largest(int n1, int n2, int n3);

int largest(int n1, int n2, int n3)
{
	int large = n1;
	if (n2 > large)
		large = n2;
	if (n3 > large)
		large = n3;

	return large;
}

int main(void)
{
	int n1, n2, n3;
	int big;

	n1 = 1;
	n2 = 2;
	n3 = 3;
	
	big = largest(n1,n2,n3);	
	printf("Largest of them is %d.\n", big);

	return 0;
}
