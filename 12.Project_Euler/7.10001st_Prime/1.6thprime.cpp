//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

#include <iostream>
using namespace std;

int main(void)
{
	int primeCount = 2 , number;
	int i = 5;
	while(primeCount != 7)
	{
		int prime;
		if(i%2 != 0)
		{
			for(int j = 2; j < i/2; j++)
			{
				if(i%j == 0)
				{
					prime = 0;
					break;	
				}
				prime = 1;
			}
			number = i;
		}
		if(prime == 1)
		{
			primeCount++;
		}
		i++;
	}

	cout << "Number is " << number << "\n";

	return 0;
}
