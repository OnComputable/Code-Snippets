/********************************************************
 * [ File: wbin/wbin.c ]
 * ******************************************************/ 
#include <stdio.h>
#include <stdlib.h>
#ifndef _MSDOS_
#include <unistd.h>
#endif _MSDOS_

int main()
{
	int cur_char;		// current character to write
	FILE *out_file;		// output file

	out_file = fopen("test.out", "w");
	if (out_file == NULL)
	{
		fprintf(stderr, "Cannot open output file\n");
		exit(8);
	}
	
	for (cur_char = 0; cur_char < 128; ++cur_char)
	{
		fputc(cur_char, out_file);
	}
	fclose(out_file);

	return (0);
}

/********************************************************
 * Question: 14-2 : Answer: The reason for the size 
 * 	difference between Windows and UNIX is that 
 * 	of the carriage return character bit added to 
 * 	the end in case of Windows system but in case
 * 	of UNIX system case both ASCII and binary are
 * 	both same. And if we want to open a file
 * 	for binary write in UNIX we can use "wb"
 * 	while opening the file. i.e. with fopen();
 * ******************************************************/ 
