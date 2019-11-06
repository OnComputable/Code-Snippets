//Que 3
#include<stdio.h>
#define WEEK 7

int main()
{
	int Num_of_Days, Num_of_Weeks;

	printf("Enter 0 to exit!!\n");
	printf("Enter the Number of Days:");
	scanf("%d", &Num_of_Days);

	while(Num_of_Days > 0)
	{
		Num_of_Weeks = Num_of_Days / WEEK;
		Num_of_Days = Num_of_Days % WEEK;

		printf("Weeks = %d, Days = %d \n", Num_of_Weeks, Num_of_Days);

		printf("Next Input\n");
		printf("Enter Number of days:");
		scanf("%d", &Num_of_Days);
	}

	return 0;
}
