#include <stdio.h>
#include <stdbool.h>

bool Prime_Check(unsigned long int);

int main()
{	
	printf("Enter a Number: ");
	unsigned long int Number;
	scanf("%ld", &Number);

	int arr[5000];

	for(int i = 2, j =0; i<= Number/2; i++)
	{
		if(Number%i == 0)
		{
			if(Prime_Check(i) == true)
			{
				arr[j] = Number;
				++j;
			}
		}
	}

	int max = 1;

	for(int i = 0 ; i<5000; i++)
	{
		if(arr[i] > max)
		{	
			max = arr[i];
		}
	}

	printf("LPF =  %d\n\n", max);


	return 0;
}


bool Prime_Check(unsigned long int Number)
{
	if(Number <= 1)
	{
		return false;
	}

	for(int i = 2; i<= Number/2; i++)
	{
		if(Number%i == 0)
		{
			return false;
		}
	}

	return true;
}

