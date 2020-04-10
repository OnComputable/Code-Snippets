/********************************************************
 * [ File: open() system call ]
 * ******************************************************/ 
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/******************************************************* 
int open (const char *name, int flags);
int open (const char *name, int flags, mode_t mode);
********************************************************/ 

int main(void)
{
	int fd;

	// File - page 26-1
	//fd = open ("home/kidd/madagascar", O_RDONLY); 
	
/******************************************************* 
* File can be opened in only one mode O_RDONLY or
*  O_WRONLY or O_RDWR.
*
*  The flags argument may be bitwise-ORed with zero 
*  or more of the following values - 
*  O_APPEND
*  O_ASYNC
*  O_CLOEXEC
*  O_CREAT
*  O_DIRECT
*  O_DIRECTORY
*  O_EXCL
*  O_LARGEFILE
*  O_NOATIME+
*  O_NOCTTY
*  O_NOFOLLOW
*  O_NONBLOCK
*  O_SYNC
*  O_TRUNC
******************************************************/ 
	// File - page 27-1
	//fd = open ("home/teach/pearl", O_WRONLY | O_TRUNC);
	

/********************************************************
 * Permissions to file can be given as follows:
 *
 * S_IRWXU
 * S_IRUSR
 * S_IXUSR
 * S_IRWXG
 * S_IRGRP
 * S_IWGRP
 * S_IXGRP
 * S_IRWXO
 * S_IROTH
 * S_IWOTH
 * S_IXOTH
 * ******************************************************/ 


	if (fd == -1)
	{
		// Error
		printf("Error openning the file.\n");
	}
	return (0);
}
