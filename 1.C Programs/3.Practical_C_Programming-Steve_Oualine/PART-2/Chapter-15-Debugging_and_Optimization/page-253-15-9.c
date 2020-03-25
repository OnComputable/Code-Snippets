/********************************************************
 * [ File: cstop/cstop.c ]
 * ******************************************************/ 
extern float lookup(int index);

float point_color(int point_number)
{
	float correction;	// color correction factor
	extern float red, green, blue;	// current colors

	correction = lookup(point_number);
	return (red*correction * 100.00 + blue*correction * 10.0 + green*correction);
}

/***********************************************************************************
 * Lines to be added : if (point_number == 735)	// ### Temp code ###
 * 			point_number = point_number;	// ### Line to stop on ###
 * ********************************************************************************/ 
