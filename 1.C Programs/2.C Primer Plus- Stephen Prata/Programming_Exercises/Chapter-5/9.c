//Que 9
#include<stdio.h>

void Temperatures(double Fahr);

void Temperatures(double Fahr)
{
	double const Celsius_Const = 5.0/9.0;
	double const Kelvin_Const = 273.16;
	double Celsius, Kelvin;

	Celsius = Celsius_Const * (Fahr - 32.0);
	Kelvin = Celsius + Kelvin_Const;

	printf("The Fahrenheit value in Celsius = %.0lf and Kelvin = %.0lf.\n\n", Celsius, Kelvin);
	printf("Enter next value of Fahrneit. (To quit press 0 <=)\n");

}

int main(void)
{
	double Fahrenheit;	
	
	printf("Enter the temperature in Fahrenheit:\n");
	scanf("%lf", &Fahrenheit);

	while(Fahrenheit > 0)
	{
		Temperatures(Fahrenheit);
		scanf("%lf", &Fahrenheit);
	}
	return 0;
}
