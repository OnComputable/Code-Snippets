// que 1
#include<stdio.h>
#define HOUR 60

int main(void)
{
	int Hour, Minutes = 1;
	
	printf("Enter 0 as number of minutes to exit!!\n\n");
	printf("Enter Number of Minutes:");
	scanf("%d", &Minutes);

	while(Minutes > 0)
	{
		Hour = Minutes/HOUR;
		Minutes %=HOUR;

		printf("Hour = %d, Minutes = %d\n", Hour, Minutes);	
		printf("Next input?\n");
		scanf("%d", &Minutes);
	}

	return 0;
}
