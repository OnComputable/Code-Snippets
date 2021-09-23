//https://www.hackerrank.com/challenges/playing-with-characters/problem?h_r=next-challenge&h_v=zen

// Trailing \n in scanf() is pain in the ass 
// If you are new you should know how it is taken in 
// memory
// i.e.
// C\n
// Language\n
// Welcome_To_C!!\n	Here _ is space as it is invisible :>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Size of String to be stored as limits are given these use 100  
#define MAX_LEN 100

int main() 
{
      char ch, s[MAX_LEN], sen[MAX_LEN];

	scanf("%c", &ch);

	scanf("\n"); // To catch first \n
	scanf("%s", &s);
	
	scanf("\n"); // To catch second \n

	scanf("%[^\n]%*c", &sen); // To get input with space i.e. String input
	
	printf("%c\n%s\n%s", ch, s, sen );
    return 0;
}
