/********************************************************
 * [ File: fun-file/fun-file.c ]
 * ******************************************************/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[100];		// name of the file to use
	FILE *in_file;		// file for input

	printf("Name? ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name)-1] = '\0';

	in_file = fopen(name, "r");
	if (in_file == NULL)
	{
		fprintf(stderr, "Error:Unable to open %s for input\n", name);
		exit(8);
	}
	printf("File found\n");
	fclose(in_file);

	return(0);
}


/*******************************************************************
 * Question: 14-1 : Answer: Here thr problem was with
 * 	the input that is given to the array name. 
 * 	i.e. It contains \n a newline character also 
 * 	which it got from the input. So to get rid
 * 	of that we used the statement name[strlen(name)-1] = '\0'; 
 * *****************************************************************/ 

