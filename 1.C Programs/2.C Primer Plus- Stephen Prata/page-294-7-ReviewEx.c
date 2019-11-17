// fix the program
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	int lc, uc, oc;
	lc = uc = oc = 0;

	while((ch = getchar()) != '#')
	{
		if(islower(ch))
			lc++;
		else if(isupper(ch) )
			uc++;
		oc++;
	}

	printf("%d lowercase, %d uppercase, %d other",  lc, uc, oc);

	return 0;
}
