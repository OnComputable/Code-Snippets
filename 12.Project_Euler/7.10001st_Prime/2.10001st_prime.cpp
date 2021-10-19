//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// This code is very clumsy change later.

#include <iostream>
using namespace std;

int main(void)
{
	int primeCount = 3;
	int i = 5;
	while(primeCount != 10002)
	{
		int prime = 1;
		if(i%2 != 0)
		{
			for(int j = 2; j < i; j++)
			{
				if(i%j == 0)
				{
					prime = 0;
					break;	
				}
			}

			if(prime == 1)
			{
				primeCount++;
			}
		}
		i++;
	}

	cout << "Number is " << i-1 << "\n";

	return 0;
}
