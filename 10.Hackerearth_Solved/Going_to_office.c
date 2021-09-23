//https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/

#include <stdio.h>

int main()
{
	double D,Oc, Of, Od, Cs, Cb, Cm, Cd, On, Off;
	scanf("%lf",&D);
	scanf("%lf %lf %lf", &Oc, &Of, &Od);
	scanf("%lf %lf %lf %lf", &Cs, &Cb, &Cm, &Cd);

	On = (Oc + (D-Of) * Od);
	Off = (Cb + (D*Cd) + (D*(Cm/Cs)));
	
	if(On < Off)
	{
		printf("Online Taxi");
	}
	else
	{
		printf("Classic Taxi");
	}

	return 0;
}
