// https://www.hackerrank.com/challenges/sum-numbers-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{	
	int a,b;
	float c,d;

	scanf("%d %d", &a, &b);
	scanf("%f %f", &c, &d); // dont say here %.1f here as it's scanning area you should format your output not the input.

	printf("%d %d\n%.1f %.1f", (a+b),(a-b),(c+d),(c-d));

	return 0;
}
