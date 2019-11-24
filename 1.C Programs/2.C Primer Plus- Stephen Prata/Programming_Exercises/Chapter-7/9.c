// Que 9

#include<stdio.h>
#include<stdbool.h>

void flush_input(void);

void flush_input(void)
{
	while(getchar() != '\n')
		;
}

int main(void)
{
	int Integer_Positive;
	bool flag;
	printf("Enter a positive number:");
	while(scanf("%d", &Integer_Positive)!= 1 || Integer_Positive < 1)
	{
		flush_input();
		printf("Enter a positive integer:\n");
	}

	for(int i = 2; i<=Integer_Positive; i++)
	{
		flag = true;
		for(int j = 2; j<i; j++)
		{
			if(i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			printf("%d is prime.\n",i);
		}

	}
	



	return 0;
}
