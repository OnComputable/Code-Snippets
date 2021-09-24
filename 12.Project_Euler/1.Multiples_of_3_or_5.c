//https://projecteuler.net/problem=1

#include <stdio.h>

int main()
{
	int Mul_of_5_adder = 0, Mul_of_3_adder = 0, Total;
	// Loop iterating over 0-999 numbers
	for(int i = 0; i < 1000; i++)
	{
		// To check if number is divisible by 3
		// if it is, then it is added 
		if(i%3 == 0)
		{
			Mul_of_3_adder += i; 
		}
		// Here else if is used as there are numbers which are divisible by 3 as well as 5. So, to eliminate
		// redundant solution.
		else if(i%5 == 0)
		{
			Mul_of_5_adder += i; 
		}
	}

	// Here total of them is added and shown.
	Total = Mul_of_5_adder + Mul_of_3_adder;
	printf("%d\n",Total );

	return 0;
}
