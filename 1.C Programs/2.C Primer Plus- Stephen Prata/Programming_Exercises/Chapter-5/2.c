// Que 2
#include<stdio.h>
int main(void)
{
	int Number,Store;

	printf("Enter a Number:");
	scanf("%d", &Number);
	Store = Number;
	while(Number <= Store + 10)
	{
		printf("%d ", Number++);
	}
	printf("\n");
	return 0;
}
