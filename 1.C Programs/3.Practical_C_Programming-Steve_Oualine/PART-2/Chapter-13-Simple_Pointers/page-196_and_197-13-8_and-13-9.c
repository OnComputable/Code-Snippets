/********************************************************
 * [ File: Cryptic Use of Pointers ]
 * ******************************************************/ 

void copy_string(char *p, char *q)
{
	while (*p++ == *q++);
}



/********************************************************
 * [ File: Redable Use of pointers ]
 * ******************************************************/ 
 
/********************************************************
 * copy_string -- Copies one string to another.
 *
 * Parameters
 * 	dest -- Where to put the string
 * 	source -- Where to get it
 * ******************************************************/ 

void copy_string(char *dest, char *source)
{
	while (1)
	{
		*dest = *source;

		// Exit if we copied the end of string
		if (*dest == '\0')
			return;

		++dest;
		++source;
	}
}

