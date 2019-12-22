// Que 7.c

#include <stdio.h>
#include <stdlib.h>

void copy_ptr(double *target, double *source, int arr_len);
void print_row(double (*arr)[10], int row);

void copy_ptr(double *target, double *source, int arr_len)
{
	// copy array using pointer notation
	
	for (int i = 0; i < arr_len; i++)
	{
		*(target + i) = *(source + i);
	}
}

void print_row(double (*arr)[10], int row)
{
	// print a row from a n by 10 array of doubles
	
	for (int i = 0; i < 10; i++)
	{
		printf("%.2f ", arr[row][i]);
	}
}

int main(void)
{
	// copy one 10 by 10 array to another 10 by 10 array
	
	double source[10][10];
	double target[10][10];

	// initilize source array
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			source[i][j] = rand() / (double) RAND_MAX;

	// copy source array to target
	for (int i = 0; i < 10; i++)
		copy_ptr(target[i], source[i], 10);

	// print arrays
	printf("%-50s", "Source");
	printf("  ");
	printf("%-50s", "Target");
	putchar('\n');
	for (int i = 0; i < 103; i++)
		putchar('-');
	putchar('\n');
	for (int i = 0; i < 10; i++)
	{
		print_row(source, i);
		printf("  ");
		print_row(target, i);
		putchar('\n');
	}

	return 0;
}
