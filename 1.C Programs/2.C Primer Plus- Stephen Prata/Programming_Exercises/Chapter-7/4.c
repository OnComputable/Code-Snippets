// Que 4
#include<stdio.h>

int main(void)
{
	char ch;

	while((ch = getchar()) != '#')
	{	

		if(ch == '.')
		{
			printf("!");
		}
		else if(ch == '!')
		{
			printf("!!");
		}
		else
			printf("%c", ch);

	}
	printf("\nDone!!\n");

	return 0;
}
