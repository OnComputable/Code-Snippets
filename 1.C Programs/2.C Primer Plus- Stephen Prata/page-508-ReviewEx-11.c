// s_gets() function written using strchr()

#include <stdio.h>	// for fgets(), getchar()
#include <string.h>	// for strchr();

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st,'\n');	// look for newline
		if (find)		// if the address is not NULL
			*find = '\0';	// place a null character there
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
