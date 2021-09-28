#include <stdio.h>

int Palindrome(int,int);
int threeDigit(int,int);


int  max = 0;
int main()
{	/* test1.txt
	for(int i = 99; i > 0; i--)
	{
		for(int j = 99; j > 0; j--)
		{
			printf("%d * %d = %d\n", i, j, (i*j) );
		}
	}
	*/

	/* test2.txt
	for(int i = 999; i > 0; i--)
	{
		for(int j = 999; j > 0; j--)
		{
			printf("%d * %d = %d\n", i, j, (i*j) );
		}
	}

	*/
	for(int i = 999; i > 0; i--)
	{
		for(int j = 999; j > 0; j--)
		{
			if(threeDigit(i,j))
			{
				if((i*j) == Palindrome(i,j))
				{

					//printf("%d * %d = %d\n", i, j, (i*j) );
					if(max < (i*j))
					{
						max =  (i*j);
					}

				}
			}
		}
	}
	
	printf("max = %d\n\n", max);

	return 0;
}


int Palindrome(int i, int j)
{
	int product = i*j;
	int reverse_of_Product = 0, n = product, rTemp;

	while(n > 0)
	{
		rTemp = n%10;
		reverse_of_Product = reverse_of_Product*10 + rTemp;
		n=n/10;
	}	

	if(reverse_of_Product == product)
	{
		return product;
	}
	return 0;
}

int threeDigit(int i, int j)
{
	int count_i = 0, count_j = 0;
	do
	{	
		i /= 10;
		++count_i;
		
	}while(i != 0);

	do
	{
		j /= 10;
		++count_j;

	}while(j != 0);

	if((count_i == 3) && (count_j == 3))
	{
		return 1;
	}
	return 0;

}
