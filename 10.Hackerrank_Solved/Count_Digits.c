//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/tutorial/


#include <stdio.h>
#include <string.h>

int main()
{
	char String[100]; 
	gets(String);
	int Counter;

	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j<strlen(String); j++)
		{
			if((String[j]-48) == i )
			{
				++Counter;
			}
		}
		printf("%d %d\n",i, Counter);
		Counter = 0;
	}

	return 0;
}
