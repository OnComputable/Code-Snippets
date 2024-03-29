// Que 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int max_int(int *arr, int arr_size);	// function prototype

int max_int(int *arr, int arr_size)
{
	int max = arr[0];
	for (int i = 1; i < arr_size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}


int main(void)
{
	int test[SIZE];

	srand(time(NULL));	// seed random number generator

	// initialize test array with random ints between 0 and 99
	for (int i = 0; i < SIZE; i++)
		test[i] = rand() % 100;

	printf("The maximum of ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", test[i]);
	printf("is: %d\n",max_int(test, SIZE));

	return 0;
}
