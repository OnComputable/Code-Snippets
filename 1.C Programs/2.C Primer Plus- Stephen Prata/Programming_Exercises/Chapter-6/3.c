// Que 3
#include<stdio.h>

int main(void)
{
	for(int i=1; i<=6; i++)
	{
		for(char c = 'F'; 'F' -c< i; c--)
		{
			printf("%c", c);
		}
		printf("\n");
	}

	return 0;
}
