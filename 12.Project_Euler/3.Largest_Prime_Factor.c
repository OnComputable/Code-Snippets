#include <stdio.h>

int Check_Prime(unsigned long int);
int LargestPrimeFactor_Calc(unsigned long int);

int main()
{	
	// Taking input For Number
	unsigned long int Number;
	printf("Enter a number to find out it's GREATEST PRIME FACTOR: \n");
	scanf("%ld", &Number);

	Check_Prime(Number);	

	return 0;
}


int Check_Prime(unsigned long int Number)
{
	int prime = 1;
	// Fixed cases and error checking	
	if(Number == 2)
	{
		printf("Prime\n LPF = 2\n");
	       	return 0;	//  Prime
	}
	else if(Number <= 1)
	{
		printf("Not Valid\n");
		return  0; // Not Prime
	}
	// Checking for prime
	else
	{
		unsigned long int Factor = 0;
		// We only need iteration upto half
       		Factor = Number/2;
		
		// For checking if Number is divisible
		for(unsigned long int i = 2; i <= Factor; i++)
		{
			if(Number%i == 0)
			{
		 		prime = 0; 	// Not prime
			}
		}
	}

	
	// Printing if Prime or Not
	if(prime == 1)
	{
		printf("Prime\n\n");
		printf("LARGEST PRIME FACTOR == %d\n\n", Number);
		return 1;
	}	
	else
	{
//		printf("Not Prime\n\n");
		LargestPrimeFactor_Calc(Number);
		return 0;
	}	

}


int LargestPrimeFactor_Calc(unsigned long int Number)
{	
	unsigned long int Factor = Number/2;
	//--Factor;

	for(unsigned long int i = Factor; i > 1; i--)
	{
		if(Number%i == 0 )
		{
			continue;
		}
		else
		{	
			int prime;
			prime = Check_Prime(i);
			if((prime == 1) && (Number%i == 0))
			{
				printf("LARGEST PRIME FACTOR == %ld\n",i);
				break;
			}
			else
			{
				continue;
			}

		}
	}
	
	return 0;
}
