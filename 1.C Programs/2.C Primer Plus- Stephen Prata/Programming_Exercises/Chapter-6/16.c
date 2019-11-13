// Que 16
// to use math.h you need to give -lm along with the gcc command

#include<stdio.h>
#include<math.h>
#define SIMPLE_INTEREST_DAPHNE 10.0
#define COMPOUND_INTEREST_DEIRDRE 5.0
#define DAPHNE_PRINCIPLE_AMT 100.0
#define DEIRDRE_PRINCIPLE_AMT 100.0

int main(void)
{
	float Final_Amt_Daphne = 0, Final_Amt_Deirdre = 0, temp;
	int n = 0, status;

	while(Final_Amt_Deirdre <= Final_Amt_Daphne)
	{
	Final_Amt_Daphne += DAPHNE_PRINCIPLE_AMT*(1+(SIMPLE_INTEREST_DAPHNE/100));
	temp =1.0+(COMPOUND_INTEREST_DEIRDRE/100);
	Final_Amt_Deirdre += DEIRDRE_PRINCIPLE_AMT*pow(temp,n);
			n++;
	}

	printf("It takes %d years.\n", n);
	printf("NOW Daphene's Investment = %.3f , & Deirdre's Investment = %.3f\n", Final_Amt_Daphne, Final_Amt_Deirdre);
		

	return 0;
}
