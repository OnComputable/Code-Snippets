// Que 17
#include<stdio.h>

int main(void)
{
	float Chucky_Won = 1000000;
	const float Interest_Per_Year = 0.08f;
	float Final_Remaining_Amt = Chucky_Won, Final_Amt = 1;
	int years = 0;

	while(Final_Amt > 0 )
	{
		Final_Remaining_Amt *= (1.0+(Interest_Per_Year));
	 	Final_Remaining_Amt -= 100000;      
	       if(Final_Remaining_Amt < 100000)
	       {
			Final_Amt = 0;
	       } 
       		++years;	       
	}

	printf("It took Chucky %d years to become broke again!!\n with %.2f money.\n", years, Final_Remaining_Amt);


	return 0;
}
