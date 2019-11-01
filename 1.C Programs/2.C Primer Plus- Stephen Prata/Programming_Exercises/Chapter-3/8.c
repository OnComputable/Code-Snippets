// Que8
#include<stdio.h>

int main(void)
{
	// declarations
	float pint,value, cup, ounces, tablespoon, teaspoon, Cup_Volume;
	pint=cup=ounces=tablespoon=teaspoon=1;

	//pint = 2*cup;
	//cup = 8*ounces;
	//ounces = 2*tablespoon;
       //tablespoon = 3*teaspoon;	

	// printing the output.
	printf("Enter the volume in cups: ");
	scanf("%f", &Cup_Volume);
	cup = Cup_Volume;

	printf("Therefore Volume in: \npints=%.2f\nounces=%.2f\ntablespoons=%.2f\nteaspoon=%.2f\n",0.5*cup,8*cup,2*cup,3*cup);

	return 0;
}
