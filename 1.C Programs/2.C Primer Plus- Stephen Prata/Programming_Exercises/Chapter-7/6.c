// Que 6
#include<stdio.h>

int main(void)
{
	char ch;
	int count = 0;

	while((ch = getchar()) != '#')
	{
		 if(ch == 'e')
		{
		 	ch = getchar();
			if(ch == 'i')
                	{
                       		count++;
               		}
		}
		
	}

	printf("The number of times that 'ei' occurs == %d\n", count);

	return 0;
}
