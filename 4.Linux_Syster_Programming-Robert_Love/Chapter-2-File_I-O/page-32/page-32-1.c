/********************************************************
 * [ File: Reading via read() ]
 * ******************************************************/ 
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>

ssize_t read (int fd, void *buf, size_t len);

int main(void)
{
	//int fd = 0; // Here fd = 0; i.e. file desciptor of stdin file
	int fd;
	int fdval;
	unsigned long word;
	ssize_t nr;

	fd = open ("pearl",O_WRONLY | O_CREAT, 0777);
	fdval = fd;
	printf("The value of fd is: %d\n", fd);
	printf("The value of fdval is: %d\n", fdval);
	if (fd == -1)
	{
		// error
		printf("Not able to open the file.\n");
	}
	// read a couple bytes int 'word' from  'fd'
	nr = read (fd, &word, sizeof (unsigned long));
	printf("The value of fd is: %d\n", fd);
	printf("The value of fdval is: %d\n", fdval);
	if (nr == -1)
	{
		// error
		printf("Cannot read.\n");
	}
	else {
	printf("Read Successfully\n");
	}

	return (0);
}
