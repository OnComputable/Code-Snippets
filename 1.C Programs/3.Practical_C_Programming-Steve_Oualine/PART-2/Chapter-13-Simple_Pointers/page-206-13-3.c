/********************************************************
 * [ File: tmp2/tmp2.c ]
 * ******************************************************/ 

#include <stdio.h>
#include <string.h>

/********************************************************
 * tmp_name -- Returns a temporary filename.
 *
 * Each time this function is called, a new name will
 * be returned.
 *
 * Warning: There should be a warning here, but if we
 * 	put it in, we would answer the question.
 *
 * Returns
 * 	Pointer to the new filename.
 * ******************************************************/ 
char *tmp_name(void)
{
	static char name[30];	// The name we are generating
	static int sequence = 0;	// Sequence number for last digit

	++sequence;	// Move to the next filename

	strcpy(name, "tmp");

	// But in the sequence digit
	name[3] = sequence + '0';

	// End the string
	name[4] = '\0';

	return(name);
}

int main()
{
	char *tmp_name(void);	// get name of temporary file
	char *name1;		// name of a temporary file
	char *name2;		// name of a temporary file

	name1 = tmp_name();
	name2 = tmp_name();

	printf("Name1: %s\n", name1);
	printf("Name2: %s\n", name2);

	return (0);
}
