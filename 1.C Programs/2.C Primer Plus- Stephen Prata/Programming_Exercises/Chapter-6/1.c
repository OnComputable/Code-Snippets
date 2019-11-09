// Que 1
#include<stdio.h>

int main(void)
{
	char Letters[26];

	printf("Let's see the program in action: \n");
	// storing input logic
	for(char i = 'a'; i-'a'< 26; i++)
	{
		Letters[i - 'a'] = i;
	}

	// printing the array
	for(int j =0; j<26; j++)
	{
		printf("%c ", Letters[j]);
	}

	printf("\n");

	return 0;
}
