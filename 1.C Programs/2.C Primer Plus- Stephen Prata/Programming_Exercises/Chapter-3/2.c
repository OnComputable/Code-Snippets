// Que2
#include<stdio.h>

int main(void)
{
	int ASCII_Value_Holder /*ASCII_Character_Printer*/;

	//user input
	printf("Please enter an ASCII value: \n");
	scanf("%d", &ASCII_Value_Holder);
	printf("ASCII character for the given ASCII value is: %c\n",ASCII_Value_Holder);// Characters are internally stored as int only, you just have to make changes while interpreting.

	return 0;
}

