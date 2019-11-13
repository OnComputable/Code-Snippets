// Que 18
#include<stdio.h>

int main(void)
{
	int Dunbar_Number = 150, Friend_Count = 5, week =0;
	

	while(Friend_Count < Dunbar_Number)
	{
		printf("%4d\t%7d\n", week, Friend_Count);
		week++;
		Friend_Count -= week;
		Friend_Count *= 2;	
	}

	printf("You have reached your cognitive Limit!! at %d\n", Friend_Count);

	return 0;
}
