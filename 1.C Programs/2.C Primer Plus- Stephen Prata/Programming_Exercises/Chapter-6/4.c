// Que 4
#include<stdio.h>

int main(void)
{
	char c='A', inc='A';

	for(int i = 0; i<6 ; i++)
	{
		for(; c-inc <= i; c++)
		{
			printf("%c ", c);
		}
		printf("\n");
		inc = c++;
		c = inc;
	}

	return 0;
}
