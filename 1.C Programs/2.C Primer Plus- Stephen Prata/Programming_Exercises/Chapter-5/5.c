// que 5
#include<stdio.h>

int main(void)
{
	int Number, Count=0, Sum = 0;

	printf("Enter the number upto which calculation should proceed:\n");
	scanf("%d", &Number);
	while(Count++ < Number)
	{
		Sum +=Count;
	}
	printf("Sum = %d\n", Sum);

	return 0;
}
