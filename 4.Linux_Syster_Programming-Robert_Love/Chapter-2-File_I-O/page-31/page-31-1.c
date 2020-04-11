/********************************************************
 * [ File: The creat() Function ]
 * ******************************************************/ 

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int creat (const char *name, mode_t mode);

int main(void)
{	
	int fd;
	// creat function is a combination of O_WRONLY | O_CREAT | O_TRUNC
	// which is most common modes that are used.
/**************************************************************
 * If creat(); is not present in the system you can
 * implement it as follows:
 *
 * int creat (const char *name, int mode)
 * {
 *	return open (name, O_WRONLY | O_CREAT | O_TRUNC, mode);
 * }
 * *************************************************************/ 
	fd = creat ("pearl", 0664);

/***************************************************************
 * fd = open ("pearl", O_WRONLY | O_CREAT | O_TRUNC, 0644);
 *
 * This and the above creat(); both mean the same thing.
 * ************************************************************/ 

	if (fd == -1)
	{
		// error
		printf("Error in file opening.\n");
	}

	return (0);
}
