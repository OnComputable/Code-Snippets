// Que 6
#include<stdio.h>

int main(void)
{
	long int Square , Cube, Lower, Upper;
	printf("Enter the lower and upper limit of the table respectively: \n");
	scanf("%d %d", &Lower, &Upper);

	printf(" Integer    Square       cube\n\n");

	for(int i=Lower;i<=Upper;i++)
	{
		Square = i*i;
		Cube = i*i*i;

		printf(" %-8d    %-8ld       %-8ld\n", i,Square, Cube);

	}
	
	return 0;
}
