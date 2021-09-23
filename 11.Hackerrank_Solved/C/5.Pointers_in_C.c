//https://www.hackerrank.com/challenges/pointer-in-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

/*
#include<stdio.h>
int main(){printf("HEllo World");return 0;}
*/

// Above code is just an experimentation
// Someone told me you could write program in one line
// You Can't!!!
// Compiler throws an error that - Extra token at the end of #include :>


#include <stdio.h>
#include <stdlib.h>  // used for abs(int) function.

void update(int *a,int *b) {
    
	// Used this two variable
	// so that original values won't change
	int c,d;
     c = *a + *b;
     d = *a - *b;
     *a = c;
     *b = abs(d);  // abs() also taks abs(*a) pointer values as they are nothing but original values and * is a dereferencing operator that points to the original address.:>
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
