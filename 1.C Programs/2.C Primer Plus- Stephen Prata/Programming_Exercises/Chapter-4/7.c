// Que7
#include<stdio.h>
#include<float.h>

int main(void)
{
	double Var1 = 1.0/3.0;
	float Var2 = 1.0/3.0;
	
	printf("The var1 values are:%.4lf %.12lf %.17lf\n", Var1, Var1, Var1);
	printf("The var2 values are:%.4f %.12f %.16f\n", Var2, Var2, Var2);
	printf("The values of FLT_DIG and DBL_DIG are: %d %d\n", FLT_DIG, DBL_DIG);

	return 0;
}
