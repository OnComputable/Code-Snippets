// Que 2

#include<stdio.h>

int main(void)
{
	int ch, count = 0;

	while((ch = getchar()) != '#')
	{
		count++;
		if(count % 9 == 0)
		{
			printf("\n");
		}
		printf("%c -> %d ", ch,ch);
	}

	printf("\nDone!!\n");

	return 0;
}
