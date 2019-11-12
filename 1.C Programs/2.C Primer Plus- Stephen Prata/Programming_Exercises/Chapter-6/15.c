// Que 15
#include<stdio.h>
#include<string.h>


int main(void)
{
	char Array[255];
	int i = 0;
	
	printf("Enter the line to get it's reverse:\n");

	while(scanf("%c", &Array[i]),Array[i] != '\n')
	{
		//scanf("%c", &Array[i]);
		i++;
	}

	for(int j = i; j>0; j--)
	{
		printf("%c", Array[j]);
	}
	printf("\n\n");


	// Behaviour that i dont understand occured 
	// while loop when used for checking if it is an end of the line or not
	// failed to terminate when even end of the loop was appeared.
	// reasons i still didn't understood well.
	
	/*while (scanf("%c", &line[i]), line[i] != '\n')
		i++;

	for (; 0 <= i; i--) // previous loop leaves i in right position
		printf("%c", line[i]);

	printf("\n");*/


	return 0;
}
