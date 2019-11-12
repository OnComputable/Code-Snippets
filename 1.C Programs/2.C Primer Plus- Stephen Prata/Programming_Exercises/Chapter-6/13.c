// Que 13
#include<stdio.h>

int main(void)
{
	int Array[8], i, power_of_two = 1, j = 0;
	
	for(i = 0; i<8; i++)
	{
		power_of_two *=2;
		Array[i] = power_of_two;
	}

	printf("The array is:\n");
	do
	{
		printf("%d ", Array[j]);
		j++;
	}while(j < 8);

	printf("\nDone!!\n");

	return 0;
}
