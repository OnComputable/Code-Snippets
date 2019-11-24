// Que 11
// all weight is in pounds
#include<stdio.h>
#define ARTICHOKES	2.05f
#define BEETS		1.15f
#define CARROTS		1.09f
#define	DISCOUNT	0.05f	// 5% discount for order above or equal to 100$.
#define SHIPPING_COST_1	6.50f	// order weighing 5 pounds or under.
#define SHIPPING_COST_2	14.00f	// order over 5 pounds and less than 20 pounds.
#define SHIPPING_COST_INCREMENTOR 0.50f	// order above 20 pounds.



int main(void)
{
	char Choice;

	printf("***********************************************\n");
	printf("a) Artichokes                b) Beets\n");
	printf("c) Carrots		     q)EXIT\n");
	printf("\n*********************************************\n");
	printf("Enter the item to choose to be bought: ");
	scanf("%c", &Choice);





	return 0;
}
