// Que 4
#include<stdio.h>

int main(void)
{
	float Height_In_Centi, Height_In_Meters;
	char Name[20];

	printf("Enter your height and name in centimeter respectively:\n");
	scanf("%f %s", &Height_In_Centi, Name);
	Height_In_Meters = Height_In_Centi/100;
	printf("%s, you are %.3f meter tall\n", Name, Height_In_Meters);

	return 0;
}
