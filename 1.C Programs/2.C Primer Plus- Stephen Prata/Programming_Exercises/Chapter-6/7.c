// Que 7
#include<stdio.h>
#include<string.h>

int main(void)
{
	char Array[20];
	

	printf("Enter a string:\n");
	for(int i = 0; i < 5; i++)
	{
		scanf("%c", &Array[i]);
	}


	printf("\nNow let's get the String Backwards:\n\n");

	for(int j=strlen(Array);  j >= 0; j--)
	{
		printf("%c", Array[j]);
	}

	printf("\nThat's it!!\n");

	return 0;
}
