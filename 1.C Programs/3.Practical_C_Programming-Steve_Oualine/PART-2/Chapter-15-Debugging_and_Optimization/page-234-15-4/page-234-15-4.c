/********************************************************
 * [ File: xgets2/xgets2.c ] [ File: base3/base3.c ]
 * ******************************************************/ 

/********************************************************
 * Database -- A very simple database program to
 * 		look up names in a hardcoded list.
 *
 * Usage:
 * 	database [-S<file>] [-P<file>]
 *
 * 	-S<file>	Specifies save file for
 * 			bebugging purposes.
 *
 * 	-P<file>	Specifies playback file for
 * 			debugginh or demonstration.
 *
 *
 * 		Program will ask you for a name.
 * 		Enter the name; the program will tell
 * 		you if it is in the list.
 *
 * 		A blank name terminates the program.
 * ******************************************************/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *save_file = NULL;		// Save input in this file
FILE *playback_file = NULL;	// Playback data from this file
char *entended_fgets(char *, int, FILE *);

/********************************************************
 * extended_fgets -- Gets a line from the input file
 * 		and records it in a save file if needed.
 *
 *
 * Parameters
 * 	line -- The line to read.
 * 	size -- sizeof(line) -- maximum number of
 * 				characters to read.
 * 	file -- File to read data from
 * 		(normally stdin).
 *
 * Returns
 * 	NULL -- error or end-of-file in read
 * 		otherwise line (just like fgets).
 * ******************************************************/ 
char *extended_fgets(char *line, int size, FILE *file)
{
	extern FILE *save_file;		// file to save strings in
	extern FILE *playback_file;	// file for alternate input

	char *result;			// result of fgets

	if (playback_file != NULL)
	{
		result = fgets(line, size, playback_file);
		// echo the input to the standard out so the user sees it
		fputs(line, stdout);
	}
	else 
	{
		// Get the line normally
		result = fgets(line, size, file);
	}

	// Did someone ask for a save file?
	if (save_file != NULL)
		fputs(line, save_file);		// Save the line in a file

	return (result);
}

/********************************************************
 * lookup -- Looks up a name in a list.
 *
 * Parameters
 * 	name -- Name to look up.
 *
 * Returns
 * 	1 -- Name in the list.
 * 	0 -- Name not in the list.
 * ******************************************************/ 
int lookup(char const *const name)
{
	// List of people int the database
	// Note: Last name is a NULL for end of list
	static char *list[] = {
		"John",
		"Jim",
		"Jane",
		"Clyde",
		"Pawan",
		NULL
	};

	int index;	// index into list

	for (index = 0; list[index] != NULL; ++index)
	{
		if (strcmp(list[index], name) == 0)
			return (1);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	char name[80];		// a Name to look up
	char *save_file_name;	// Name of the save file
	char *playback_file_name;	// Name of the playback file

	int lookup(char const *const name);	// lookup a name

	while ((argc > 1) && (argv[1][0] == '-'))
	{
		switch (argv[1][1])
		{
			// -S<file> Specify save file
			case 'S':
				save_file_name = &argv[1][2];
				save_file = fopen(save_file_name, "w");
				if (save_file == NULL)
					fprintf(stderr, "Warning:Unable to open save file %s\n", save_file_name);
				break;
			// -P<file> Specify playback file
			case 'P':
				playback_file_name = &argv[1][2];
				playback_file = fopen(playback_file_name, "r");
				if (playback_file == NULL)
				{
					fprintf(stderr,"Error:Unable to open playback file %s \n",playback_file_name);
					exit(8);
				}	
				break;
			default:
				fprintf(stderr, "Bad option: %s\n", argv[1]);
				exit(8);
		}
		--argc;
		++argv;
	}

	while (1)
	{	
		printf("Enter name: ");
		extended_fgets(name, sizeof(name), stdin);

		// Check for blank name
		// (remember 1 character for newlinw)
		if (strlen(name) <= 1)
			break;

		// Get rid of newline
		name[strlen(name)-1] = '\0';

		if (lookup(name))
			printf("%s is in the list\n",name);
		else
			printf("%s is not in the list\n",name);
	}	



	return (0);
}
