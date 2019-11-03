//Que8
#include<stdio.h>

int main(void)
{
	float Miles, Gasoline_Gallons, Liters_per_100KM, Liters, KM;

	printf("Enter the number of miles and gasoline consumed in gallons:\n");
	scanf("%f %f", &Miles, &Gasoline_Gallons);

	KM = Miles*1.609;
	Liters =Gasoline_Gallons*3.785;

	Liters_per_100KM = Liters/(100*KM);
	printf("You traveled at the rate of %.1f miles per gallon.\n", Miles/Gasoline_Gallons);
	
	printf("You have traveled by using %f Liters per 100KM.\n", Liters_per_100KM);


	return 0;
}
