// Que 12
#include<stdio.h>

int main(void)
{
	double Result_1 = 1.0, Result_2 = 1.0;
	int status, Num_of_Terms;

	printf("Enter the limit: ");
        scanf("%d",&Num_of_Terms);

	do
	{	

	printf("Series in +ve terms of 1.0 + 1.0/x where x is changing variable:\n\n");

	for(int i = 2; i<=Num_of_Terms; i++)
	{
		Result_1 += (1.0/(float)i);
	}
	printf("%lf\n", Result_1);

	printf("Series in alternate sign of terms are evaluated as 1.0 - 1.0/x\n\n");

	for(int j = 2; j<=Num_of_Terms; j++)
	{
		if(j%2 == 1)
		{
		Result_2 += (1.0/(float)j);  
		}
		else
		{
		Result_2 -= (1.0/(float)j);
		}
	}
	printf("%lf\n", Result_2);

	printf("Enter the limit to continue or press q to quit.\n\n");


	}while((status = scanf("%d", &Num_of_Terms)) == 1);


	return 0;
}
