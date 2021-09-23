//https://www.hackerrank.com/challenges/reverse-array-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, *arr, i;
	scanf("%d", &num);

	// remember here we have used malloc
	// and we typecasted into int as we
	// are using an integer array
	// But here error cases are not 
	// handled as, if malloc doesn't have memory it 
	// returns null that is what is not handled.
	arr = (int*) malloc(num * sizeof(int));
	
	// for taking input into the array
	for(i = 0; i < num; i++)
	{
		scanf("%d", arr + i);
	}

	// Printing the array backwards
	// we just parse it backward we haven't changed the array
	for(i = num-1; i >= 0; i--)
	{
		printf("%d ", *(arr + i));
	}
	
	return 0;
}
