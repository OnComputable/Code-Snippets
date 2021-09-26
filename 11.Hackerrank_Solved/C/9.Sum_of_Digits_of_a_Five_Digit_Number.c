//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=false&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, holder, sum = 0;
    scanf("%d", &n);
    while(n!=0)
    {
        holder = n % 10; // modulus op to get the digit at units place
        n = n/10; // Trimming the digit of it's units place.
	sum += holder;
    }
    printf("%d", sum);
    return 0;
}
