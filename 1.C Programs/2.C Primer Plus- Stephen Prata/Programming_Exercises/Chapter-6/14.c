// Que 14
#include<stdio.h>

int main(void)
{
	double Array1[8], Array2[8], Storage_for_Array2;

	printf("Please enter the elements of the first array:\n");
	for(int i = 0; i<8; i++)
	{
		scanf("%lf", &Array1[i]);

	     	Storage_for_Array2 += Array1[i];
		Array2[i] = Storage_for_Array2;

	}

	printf("Array 1 is:\n");
	for(int j = 0; j<8; j++)
	{
		printf("%.2lf ", Array1[j]);
	}
	printf("\n");

	printf("Array 2 is:\n");
	for(int k = 0; k<8; k++)
	{
		printf("%.2lf ", Array2[k]);
	}
	printf("\n");

	return 0;
}
