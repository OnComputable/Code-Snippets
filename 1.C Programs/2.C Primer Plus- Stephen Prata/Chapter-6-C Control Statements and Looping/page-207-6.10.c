// a counting loop
#include<stdio.h>
int main(void)
{
	const int NUMBER = 22;
	int count = 1;		// initialization

	while(count <= NUMBER)
	{
		printf("Be my Valentine!\n");	// action
		count++;			// upate count
	}

	return 0;
}
