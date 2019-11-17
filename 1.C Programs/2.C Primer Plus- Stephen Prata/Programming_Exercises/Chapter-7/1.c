// Que 1

#include<stdio.h>

int main(void)
{
	int N_Spaces, N_Newline, N_Other;
	char ch;
	N_Spaces = N_Newline = N_Other = 0;

	while((ch = getchar()) != '#')
	{
		if(ch == ' ')
		{
			++N_Spaces;
		}
		else if(ch == '\n')
		{
			++N_Newline;
		}
		else
		{
			++N_Other;
		}
	}
	printf("Spaces = %d , Newline = %d , Other = %d\n", N_Spaces, N_Newline, N_Other);


	return 0;
}
