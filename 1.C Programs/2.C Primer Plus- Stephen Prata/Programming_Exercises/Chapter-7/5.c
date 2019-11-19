// Que 5
#include<stdio.h>

int main(void)
{
	char ch;

	while((ch = getchar()) != '#')
	{
		switch(ch)
		{
			case '.' : printf("!");
				   break;

			case '!' : printf("!!");
			 	  break;

			default: printf("%c", ch);
				 break;
		}
	}
	printf("\n");
	return 0;
}
