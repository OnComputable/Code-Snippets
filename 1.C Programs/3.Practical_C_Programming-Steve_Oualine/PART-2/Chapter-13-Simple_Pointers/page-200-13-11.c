/********************************************************
 * [ File: tmp-name/tmp-name.c ]
 * ******************************************************/

#include <stdio.h>
#include <string.h>

/********************************************************
 * tmp_name -- Return a temporary filename.
 *
 * Each time this function is called, a new name will
 * be returned.
 *
 * Returns
 * 	Pointer to the new filename.
 * ******************************************************/ 
char *tmp_name(void)
{
        char name[30];	// The name we are generating
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
	char *tmp_name(void);	// Get name of temporary file

	printf("Name: %s\n", tmp_name());

	return (0);
}


/********************************************************
 * Question 13-1 : Answer :  Make name variable as 
 * 		static as it is loosing it's value
 * 		when function call gets popped off
 * 		from the stack.
 * ******************************************************/ 
