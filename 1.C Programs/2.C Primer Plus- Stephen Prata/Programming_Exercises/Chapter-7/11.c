// Que 11
// all weight is in pounds
#include<stdio.h>
#include<stdbool.h>
#define ARTICHOKES	2.05f
#define BEETS		1.15f
#define CARROTS		1.09f
#define	DISCOUNT	0.05f	// 5% discount for order above or equal to 100$.
#define SHIPPING_COST_1	6.50f	// order weighing 5 pounds or under.
#define SHIPPING_COST_2	14.00f	// order over 5 pounds and less than 20 pounds.
#define SHIPPING_COST_INCREMENTOR 0.50f	// order above 20 pounds.

void flush_input_buffer(void);

float calculate_shipping(float weight);

void flush_input_buffer(void)
{
	while (getchar() != '\n')
		;
}

float calculate_shipping(float weight)
{
	if(weight < 5.0)
		return SHIPPING_COST_1;
	else if(weight < 20.0)
		return SHIPPING_COST_2;
	else
		return SHIPPING_COST_2 + SHIPPING_COST_INCREMENTOR * (weight - 20.0);
}

int main(void)
{
	float WT_Artichoke = 0, WT_Beet = 0, WT_Carrot = 0, WT_TOT;
	float PR_Artichoke, PR_Beet, PR_Carrot, SubTotal, Discount, Shipping, Total;
	bool Discount_Flag;
	float weight;
	char Choice;

	while(1)
	{
		printf("***********SHRI GURU DATTA PRASANNA********\n");
		printf("***********************************************\n");
		printf("a) Artichokes                b) Beets\n");
		printf("c) Carrots		     q)EXIT\n");
		printf("\n*********************************************\n");
		printf("Enter the item to choose to be bought: ");
		scanf("%c", &Choice);

		switch(Choice)
		{
			case 'a': //artichokes
				printf("How many pounds of artichokes would you like to add? ");
				if(scanf("%f", &weight) == 1)
					WT_Artichoke += weight;
				else
				{
					flush_input_buffer();
					printf("Invalid input. Try again. \n");
					continue;    // main loop repeats
				}
				break;

			case 'b' : // beets
				printf("How many pounds of beets would you like to add? ");
				if(scanf("%f", &weight) == 1)
					WT_Beet += weight;
				else
				{
					flush_input_buffer();
					printf("Invalid input. Try again.\n");
					continue;	// main loop repeats
				}
				break;

			case 'c' : // carrots
				printf("How many pounds of carrots would you like to add? ");
				if(scanf("%f", &weight) == 1)
					WT_Carrot += weight;
				else
				{
					flush_input_buffer();
					printf("Invalid input. Try again. \n");
					continue; // main loop repeats
				}
				break;

			case 'q' :  // EXIT program
				printf("DONE!\n");
				return 0;

			default : 
				printf("Invalid input. Try again.\n");
				continue;	// main program repeats
		}

		// subtotal Calculation
		if(SubTotal >= 100)
		{	
			Discount_Flag = true;
			Discount = DISCOUNT * SubTotal;
		}
		else
			Discount_Flag = false;

		// Shipping Charges
		WT_TOT = WT_Artichoke + WT_Beet + WT_Carrot;
		Shipping = calculate_shipping(WT_TOT);

		// grand total
		Total = SubTotal + Shipping - (Discount_Flag ? Discount : 0.0);

		printf("\n");
		printf("Your Order Summary :\n\n");
		printf("Artichokes: %.2lbs @ $%.2f/lb: $%.2f\n",
				WT_Artichoke, ARTICHOKES, PR_Artichoke );
		printf("Beets: %.2flbs @ $%.2f/lb: $%.2f\n",
				WT_Beet, BEETS, PR_Beet);
		printf("Carrots: %.2flbs @ $%.2f/lb: $%.2f\n",
				WT_Carrot, CARROTS, PR_Carrot);
		printf("\n");
		printf("Subtotal: $%.2f\n", SubTotal);
		if(Discount_Flag)
			printf("%.0f%% discount: $%.2f\n", DISCOUNT * 100, Discount);
		printf("Shipping charges: $%.2f\n", Shipping);
		printf("Grand Total: $%.2f\n", Total);
		printf("\n");

		flush_input_buffer();

	}

 


	return 0;
}
