//https://www.codechef.com/problems/FLOW006

#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    int array_Numbers[T];
    // Taking input
    for(int i = 0; i < T; i++ )
    {
        scanf("%d", &array_Numbers[i]);
    }

    int array_sum[T];

    for(int i = 0; i < T; i++)
    {   int Temp, sum = 0;
        Temp = array_Numbers[i];
        for(int j = 0; j < 8; j++)
        {
            sum += (Temp%10);
            Temp /= 10;
        }
        array_sum[i] = sum;
    }
	
    for(int i = 0; i < T; i++)
    {
	printf("%d\n", array_sum[i]);
    }

	return 0;
}


