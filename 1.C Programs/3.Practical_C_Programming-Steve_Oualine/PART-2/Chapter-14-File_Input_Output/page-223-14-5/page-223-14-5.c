/********************************************************
 * [ File: copy2/copy2.c ]
 * ******************************************************/ 

/********************************************************
 * copy -- Copies one file to another.
 *
 * Usage
 * 	copy <from> <to>
 *
 * <from> -- The file to copy from.
 * <to>   -- The file to copy into.
 * ******************************************************/ 

#include <stdio.h>
#ifndef _MSDOS_		// if we are not MS-DOS
#define _UNIX_		// then we are UNIX
#endif	// _MSDOS_

#include <stdlib.h>

#ifdef _UNIX_
#include <sys/types.h>	// file defines for UNIX filesystem
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#endif	// __UNIX__

#ifdef _MSDOS_
#include <fcntl.h>	// file defines for DOS filesystem
#include <sys/stat.h>
#include <io.h>
#endif //_MSDOS_

#ifndef O_BINARY
#define O_BINARY 0	// Define the flag if not defined yet
#endif // O_BINARY

#define BUFFER_SIZE (16 * 1024)	// use 16K buffers

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];	// buffer for data
	int in_file;			// input file descriptor
	int out_file;			// output file descriptor
	int read_size;			// number of bytes on last read

	if (argc != 3)
	{
		fprintf(stderr, "Error:Wrong number of arguments\n");
		fprintf(stderr, "Usage is: copy <from> <to>\n");
		exit(8);
	}

	in_file = open(argv[1], O_RDONLY|O_BINARY);
	if (in_file < 0)
	{
		fprintf("Error:Unable to open %s\n", argv[1]);
		exit(8);
	}
	out_file = open(argv[2], O_WRONLY|O_TRUNC|O_CREAT|O_BINARY, 0666);
	if (out_file < 0)
	{
		fprintf("Error:Unable to open %s\n", argv[2]);
		exit(8);
	}

	while (1)
	{
		read_size = read(in_file, buffer, sizeof(buffer));

		if (read_size == 0)
			break;		// end of file

		if (read_size < 0)
		{
			fprintf(stderr,"Error:Read error\n");
			exit(8);
		}
		write(out_file, buffer, (unsigned int) read_size);
	}	
	close(in_file);
	close(out_file);

	return (0);
}

/********************************************************
 * Question: 14-2 : Answer: The program should have been
 * 	core dumped as fprintf call expects first 
 * 	argument as a filename, but we have passed a
 * 	format string instead. The program works
 * 	with the warnings that warns us about this mistake
 * 	of ours. But handles it internally.
 * ******************************************************/ 
