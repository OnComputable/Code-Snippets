/********************************************************
 * [ File: p_array/p_array.c ]
 * ******************************************************/

#include <stdio.h>

int array[3] [2];	// Array of numbers

int main()
{
	int x, y;	// loop indices

	array[0][0] = 0 * 10 + 0;
	array[0][1] = 0 * 10 + 1;
	array[1][0] = 1 * 10 + 0;
	array[1][1] = 1 * 10 + 1;
	array[2][0] = 2 * 10 + 0;
	array[2][1] = 2 * 10 + 1;

	printf("array[%d] ", 0);
	printf("%d ", array[0,0]);
	printf("%d ", array[0, 1]);
	printf("\n");

	printf("array[%d] ", 1);
	printf("%d ", array[1,0]);
	printf("%d ", array[1,1]);
	printf("\n");

	printf("array[%d] ", 2);
	printf("%d ", array[2,0]);
	printf("%d ", array[2,1]);
	printf("\n");

	return (0);
}

/*******************************************************
 * Question 5-1 : The program prints the wrong value
 * 	because we used array[x,y] not array[x][y].	
 * ******************************************************/ 
