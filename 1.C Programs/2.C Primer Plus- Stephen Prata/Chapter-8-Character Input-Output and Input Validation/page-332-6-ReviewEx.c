// what will be the output
#include<stdio.h>

int main()
{
	char ch;

	/*while((ch = getchar()) != 'i')
	{
		putchar(ch);		// a. 
	}*/

	while((ch = getchar()) != '\n')
	{
		putchar(ch++);
		putchar(++ch);
	}

	return 0;
}
