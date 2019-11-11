// Que 11
#include<stdio.h>

int main(void)
{
	int Array[8];
	int *p = Array;
	int i,j;

	printf("Enter the eight integers to be stored in  array: \n");
	for(i = 0,j = 7; i < (sizeof(Array)/sizeof(int)),j>=0; i++, j--)
	{
		scanf("%d", (p+j));
	}

	printf("The array in reverse order is:\n");
	for(int k=0; k<8; k++)
	{
		printf("%d ", Array[k]);
	}

	printf("\nDone!!\n");

	return 0;
}
