// Que 10
#include<stdio.h>

int main(void)
{
	int Lower_Limit, Upper_Limit, Answer = 0, status, Low_Copy, High_Copy;

	printf("Enter lower and upper integer limits: ");
	
	while(((status = scanf("%d %d", &Lower_Limit, &Upper_Limit)) == 2) && Lower_Limit != Upper_Limit)
	{
		Low_Copy = Lower_Limit;
		High_Copy = Upper_Limit;
		for(int i = Lower_Limit; i <= Upper_Limit; i++)
		{
			Answer += Lower_Limit*Lower_Limit;
			Lower_Limit++;
		}
		printf("The sum of the squares from %d to %d is %d\n", (Low_Copy*Low_Copy), (High_Copy*High_Copy), Answer);
		printf("Enter next set of limits: ");
		Answer = 0;
	}

	printf("\nDone\n\n");

	return 0;
}
