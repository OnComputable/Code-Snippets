#include<stdio.h>
#define IN 1 // inside the word
#define OUT 0 // outside the word


main()
{
 int c,nl,nw,nc,state;

 state = OUT;
 nl = nw = nc =0;
 while ((c=getchar()) != EOF) {
	++nc;
	if (c=='\n')
		++nl;

	//This simple variable state takes care of not missing the word and taking ' ' or \n or \t as character
	if (c==' ' || c == '\n' || c=='\t')
		state = OUT;
	else if (state == OUT){
		state = IN;
		++nw;
	}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
