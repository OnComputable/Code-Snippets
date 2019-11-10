// Que 5
#include<stdio.h>

int main(void)
{
	int spaces;
	char c_value;
	char Input;
	int Rows;

	printf("Enter the letter for the pyramid pattern:\n");
	scanf("%c",&Input);
	Input = (Input - 'A');
	Rows = (int)Input;
	spaces = Rows;
	//printf("Rows are: %d\n\n\n", Rows);


	for(int i = 0; i<=Rows;i++)
	{
		for(int j = spaces; j>0; j-- )
                {
                        printf(" ");
                }
		for(char c = 'A'; c-'A'<=i; c++)
		{
			printf("%c",c);
			c_value = c-1;
		}
		for(char ch = c_value; c_value-ch <i;--ch)
		{
			printf("%c",ch);
		}
		printf("\n");
		--spaces;
	}

	return 0;
}
