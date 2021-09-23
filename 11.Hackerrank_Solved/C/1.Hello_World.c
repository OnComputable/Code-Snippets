//https://www.hackerrank.com/challenges/hello-world-c/problem


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char s[100];

	//So scanf("%[^\n]", s); will read all characters until you reach \n (or EOF) and put them in s. It is a common idiom to read a whole line in C.
	
	scanf("%[^\n]%*c", &s);

	printf("Hello, World!\n%s",s);

	return 0;
}
