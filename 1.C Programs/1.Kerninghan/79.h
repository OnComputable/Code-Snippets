#include "syscall.h"

main() /* copy input to output */
{
	char buf[BUFSIZ];
	int n;

	while((n = read(0, buff, BUFSIZ)) > 0)
		write(1,buf,n);
	return 0;
}

