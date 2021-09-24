// https://projecteuler.net/problem=2

#include <stdio.h>
#define IAMMILLION 4000000

// To approach this problem you should understand their
// ranges that is they want number value not to exceed
// over 4 million, Hence the #define IAMMILLION
// And they want the addition of even numbers only.
int main()
{
	int First = 1, Second = 2, n = 1, Total = 2;
	
	//printf("%d %d ", First, Second);
	while(n < IAMMILLION)
	{	int Third;
		Third = First + Second;
		First  = Second;
		Second = Third;
		
		n = Third;
		if(n > IAMMILLION)
		{
			break;
		}

		if(Third %2 == 0 )
		{	
			Total = Total + Third;
		}
		//printf("%d ", Third);

	}
	printf("\n%d\n", Total);


	return 0;
}
