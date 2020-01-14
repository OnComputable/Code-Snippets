// Que 14.c

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ROWS 20
#define COLS 30

void deglitch(int data[ROWS][COLS]);

void deglitch(int data[ROWS][COLS])
{
	
}

int main(int argc, char *argv[])
{
	FILE *fp;
	int data[ROWS][COLS];
	char img[ROWS][COLS + 1];
	char ch;

	if (argc != 3)
	{
		printf("Usage: %s <data file> <image file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	// open data file
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	// read ints from file
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (fscanf(fp, "%d", *(data + i) + j) != 1)
			{
				fprintf(stderr,"Invalid or corrupted data file.\n");
				exit(EXIT_FAILURE);
			}
	fclose(fp);	// done with fp for now

	// de-glitch the data
	deglitch(data);

	return 0;
}
