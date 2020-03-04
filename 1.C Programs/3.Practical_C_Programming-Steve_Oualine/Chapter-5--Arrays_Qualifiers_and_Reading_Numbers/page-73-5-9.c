/********************************************************
 * [ File: tri/tri.c ]
 * ******************************************************/ 

#include <stdio.h>

char line[100];	 	// line of input data
int height;		// the height of the triangle
int width;		// the width of the triangle
float area;		// area of the triangle (computed)

int main()
{
	printf("Enter width height? ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &width, &height);

	area = (width * height) / 2.0;
	printf("The area is %.2f\n", area);

	return (0);
}

/******************************************************* 
 * Question 5-2: The reason for it not seeing your 
 * 	input is because you don't pass the argument
 * 	on the same line.
 * 	And also make area as float to accept the 
 * 	solution of floating point as well.
 * ******************************************************/ 
