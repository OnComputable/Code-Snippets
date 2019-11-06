//Que 6
#include<stdio.h>

int main(void)
{
	int Number, Count=0,Sum=0, square=0;

	printf("Enter the Number for getting sum of the square upto that point:\n");
	scanf("%d", &Number);

	while(Count++ < Number)
	{
		square = Count;
		Sum +=(square*square);
	}

	printf("Sum = %d\n", Sum);

	return 0;
}
