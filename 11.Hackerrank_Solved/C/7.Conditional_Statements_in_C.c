//https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=false

//***********Code is not working as intended*************
//**********Still new to this fix the problem************



#include <assert.h> // Don't yet know saw google but won't understand until use
#include <limits.h> // To get the limits of datatype
#include <math.h> // math function usage
#include <stdbool.h>// Using boolean variable
#include <stddef.h> //NULL macro is defined here
#include <stdint.h> //specially for int datatype operations
#include <stdio.h> //standard input output
#include <stdlib.h>//malloc and memory related functions reside here
#include <string.h>//String related functions resides here

char* readline();

int main()
{
	char* n_endptr;
	char* n_str = readline();

	// it takes the string and converts it to integer
	int n = strtol(n_str, &n_endptr, 10); 

	if(n_endptr == n_str || *n_endptr != '\0')
	{
		exit(EXIT_FAILURE); // Error macro
	}

	// If input is not in range.
	if(n > 9 || n < 1)
	{
		printf("Greater than 9");
	}

	// Cases to print numbers in string
	switch(n)
	{
		case 1:printf("one");
		       break;
		case 2:printf("two");
		       break;
		case 3:printf("three");
		       break;
		case 4:printf("four");
		       break;
		case 5:printf("five");
		       break;
		case 6:printf("six");
		       break;
		case 7:printf("seven");
		       break;
		case 8:printf("eight");
		       break;
		case 9:printf("nine");
		       break;
	}

	return 0;
}

char* readline()
{
	size_t alloc_length = 1024;
	size_t data_length = 0;
	char* data = malloc(alloc_length); // we are asking to give us size of 1024 bytes through malloc

	while(true) // To infinity and beyond if not broken
	{
		char* cursor = data + data_length;
		char* line = fgets(cursor, alloc_length - data_length,stdin); // better way of taking input than gets as it is more secure. Check Google.

		if(!line) //If there is no input then while breaks
		{
			break;
		}
		data_length += strlen(cursor); // It stores size of data via strlen() from String.h file

		// if allocated memory becomes full then we break
		if(data_length < alloc_length -1 || data[data_length - 1] == '\n')
		{
			break;
		}
	
		// Left shift by one that means
		// we previously had 1024 bytes
		// but it wasn't enough. 10000000000
		// now it would want 100000000000 bytes.
		size_t new_length = alloc_length << 1;
		data = realloc(data, new_length);

		if(!data)
		{
			break;
		}

		alloc_length = new_length;
	}
		if(data[data_length -1] == '\n')
		{	
			data[data_length -1] == '\0';
		}

		data = realloc(data,data_length);

	return data;
}
