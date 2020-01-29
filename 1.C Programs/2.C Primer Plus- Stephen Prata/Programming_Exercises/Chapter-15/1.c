// Que 1.c

#include <stdio.h>

int parsebinarystring(const char * string);

int parsebinarystring(const char * string)
{
	// convert a binary string to a numeric value
	
	int retval = 0;
	while (*string != '\0')
	{
		retval <<= 1;
		if (*string == '1')
			retval |= 1;
		string++;
	}
	return retval;
}

int main(void)
{
	// test parsebinarystring()
	int result;
	char * binstring = "01001001";
	printf("%s in base-10 is %d.\n", binstring, parsebinarystring(binstring));

	return 0;
}
