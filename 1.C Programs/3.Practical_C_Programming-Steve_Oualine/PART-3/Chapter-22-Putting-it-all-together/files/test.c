/********************************************************
 * [ File: stat/test.out ]
 * ******************************************************/ 

/* This is a single line comment */
/*
 * This is a multiline
 * comment.
 */
#include <string.h>

int main()
{
	/*A procedure*/
	int i;		/* Comment / code line */
	char foo[10];

	strcpy(foo, "abc");	/* String */
	strcpy(foo, "a\"bc");	/* String with special character */

	foo[0] = 'a';		/* Character */
	foo[1] = '\'';		/* Character with escape */
	
	i = 3 / 2;		/* Slash that's not a comment */
	i = 3;			/* Normal number */
	i = 0x123ABC;		/* Hex number */

	i = ((1 + 2) * (3 + 4));	/* Nested () */

	{
		int j;			/* Nested () */
	}

	return (0);
}
