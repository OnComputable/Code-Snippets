//Que 8
#include<stdio.h>

int main(void)
{
	int Operand_1, Operand_2, Result;

	  printf("This program computes moduli.\n");
	  printf("Enter an integer to serve as the second operand:");
          scanf("%d", &Operand_2);
          printf("Now enter the first operand:");
          scanf("%d", &Operand_1);

	while(Operand_1 > 0)
	{
		Result = Operand_1 % Operand_2;
		//printf("Result %d\n\n", Result);
		printf("%d %% %d is %d\n", Operand_1, Operand_2, Result);

		printf("Enter next number for first operand (<= 0 to quit):\n");
		scanf("%d", &Operand_1);
	}

	return 0;
}
