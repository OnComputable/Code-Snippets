// Version 1

#include <stdio.h>	// for NULL definition

char * strblk(char * string)
{
	while (*string != ' ' && *string != '\0')
		string++;	// stops at first blank or null
	if (*string == '\0')
		return NULL;	// NULL is the null pointer
	else 
		return string;
}

// Version 2

#include <stdio.h>	// for NULL definition

char * strblk(const char * string)
{
	while (*string != ' ' && *string != '\0')
		string++;	// stops at first blank or null
	if (*string == '\0')
		return NULL;	// NULL is the null pointer
	else
		return (char *) string;
}
