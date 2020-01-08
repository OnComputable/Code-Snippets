// when to use &
#include<stdio.h>
int main(void)
{
	int age;	// variable
	float assets;	// variables
	char pet[30];	// string

	printf("Enter your age, assets, and favourite pet.\n");
	scanf("%d %f", &age, &assets);	// use the & here
	scanf("%s", pet);		// no & for char array
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
