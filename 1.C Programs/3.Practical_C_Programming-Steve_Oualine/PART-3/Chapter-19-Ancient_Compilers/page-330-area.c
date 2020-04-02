/********************************************************
 * [ File: area/area.c ]
 * ******************************************************/ 
#include <stdio.h>

float area(width, height)
{
	int width;
	float height;
	{
		return (width * height);
	}
}

int main()
{
	float size = area(3.0, 2);

	printf("Area is %f\n", size);
	return (0);
}


/********************************************************
 * Que : 19-1: Answer: The use of prototype is wrong
 * 		the first argument needs to be int 
 * 		and the second needs to be float,
 * 		as it is reversed when we look at the 
 * 		function defination. 
 * ******************************************************/ 
