// Que 3
#include<stdio.h>

int main(void)
{
	int inp, Input, T_Even = 0,T_Odd = 0;
	float  Even_Sum = 0, Odd_Sum = 0;

	while( (inp =(scanf("%d", &Input)) != 0) && (Input != 0))
	{
		if(Input == 0)
			continue;
		if(Input % 2 == 0)
		{
			T_Even++;
			Even_Sum += Input; 
		}
		else
		{
			T_Odd++;
			Odd_Sum += Input;
		}	
	}
	printf("Total number of Even no's -> %d , Avg is -> %0.2f. \n", T_Even,(Even_Sum / T_Even) );
	printf("Total number of Odd no's -> %d , Avg is -> %0.2f. \n", T_Odd,(Odd_Sum / T_Odd));

	printf("Done!!\n");


	return 0;
}
