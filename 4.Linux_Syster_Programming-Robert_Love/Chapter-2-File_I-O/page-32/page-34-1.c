/********************************************************
 * [ File: Reading All the Bytes ]
 * ******************************************************/ 

#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>

ssize_t read (int fd, void *buf, size_t len);

int main(void)
{
	int fd;
	ssize_t ret;
	unsigned long buf;
	int len;

	fd = open("pearl", O_WRONLY);

	while (len != 0 && (ret = read (fd, &buf, sizeof(unsigned long) )) != 0) {
		
		if (ret == -1) {
			continue;
		}
		perror("read");
		break;
	}
	len -= ret;
	buf += ret;

	return (0);
}
