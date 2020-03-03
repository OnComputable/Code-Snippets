/******************************************************* 
 * [ Write a program to compute the area and perimeter 
 * of a rectangle with a width of three inches and a 
 * height of five inches. What changes must be made
 * to the program so that it works for a rectangle with
 * a width of 6.8 inches and a length of 2.3 inches?. ]
 *******************************************************/

#include <stdio.h>

int main()
{
	float area, rectangle, side_1, side_2;
	
	printf("Enter the side 1 and side 2 respectively:\n");
	scanf("%f %f", &side_1, &side_2);
	printf("The area of the triangle is:%.2f\n", side_1 * side_2);
	printf("The perimeter of the trianle is:%.2f\n", 2 * (side_1 + side_2) );

	printf("Bye!\n");

	return (0);
}

