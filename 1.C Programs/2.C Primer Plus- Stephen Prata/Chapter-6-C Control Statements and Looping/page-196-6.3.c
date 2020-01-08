// watch your braces
// bad conding creates an infinite loop
#include<stdio.h>
int main(void)
{	
	int n = 0;

	while(n<3)
		printf("n is %d\n", n);
		n++;
	printf("That's all this program does\n");
	
	return 0;
}
