/********************************************************
 * [ File: tri-sub/tri-sub.c ]
 * ******************************************************/ 

#include <stdio.h>
/******************************************************** 
 * triangle -- Computes area of a triangle.		*
 *							*
 * Parameters						*
 * 	width -- Width of the triangle.			*
 * 	height -- Height of the triangle.		*
 *							*
 * Returns						*
 * 	area of the triangle.				*
 * ******************************************************/ 

float triangle(float width, float height)
{
	float area;	// Area of the triangle

	area = width * height / 2.0;
	return (area);
}
