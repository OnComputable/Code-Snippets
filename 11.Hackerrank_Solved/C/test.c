#include <stdio.h>

int main()
{
	int array[10] = {3,3,5,5,3,6,7,7,7,5}, max = 0;
	int k = 4;
for(int i = 0; i < 5; i++)
{

	if((array[i] < array[i+1]))
	{
		if((array[i+1] < k) && (max < array[i+1]))
		{
			max = array[i+1];
		}
		else if(array[i+1] >= k)
		{
			continue;
		}
	}
	else if(array[i] < k)
	{
		max = array[i];
	}
	else
	{
		continue;
	}

}


printf("%d ", max);
printf("\n");

	return 0;
}
