// Que6
#include<stdio.h>
#define One_Quart 950

int main(void)
{
	// declaration
	double Molecules_Mass_Water = 3.0e-23, Quart_of_Water;

	// user input
	printf("Enter the amount of water in quarts: ");
	scanf("%lf", &Quart_of_Water);
	Quart_of_Water *= One_Quart;
	Molecules_Mass_Water *= Quart_of_Water;
	printf("The number of water molecules in that amount is : %e\n", Molecules_Mass_Water);

	return 0;
}
