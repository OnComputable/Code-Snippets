//https://www.hackerrank.com/challenges/functions-in-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <stdio.h>


int max_of_four(int a, int b, int c, int d)
{

   // You could use multiple ways to do it 
   // but I sticked to this one as it was a 
   // basic example.
   // If the number of numbers would have been large
   // it would be better to take the array
   // If it would have been too large then malloc 
   // would be better choice.
   if(a >b && a>c && a>d)
   {
       return a;
   }
   else if(b>a && b>c && b>d)
   {
       return b;
   }
   else if(c>a && c>b && c>d)
   {
       return c;
   }
   else {
       return d;
   }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // argument passing to the function.
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
