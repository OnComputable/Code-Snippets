// Que2
#include<stdio.h>

int main(void)
{
	char F_NAME[20];

	printf("Enter your first name:\n");
	scanf("%s", F_NAME);

	printf("a. \"%s\"\n",F_NAME);
	printf("b. \"%20s\"\n",F_NAME);
	printf("c. \"%-20s\"\n", F_NAME);
	printf("d. \"%-.5s\"\n",F_NAME);

	return 0;
}
