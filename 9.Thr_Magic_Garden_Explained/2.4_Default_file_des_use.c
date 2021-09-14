#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


char error[] = "Error\n";

int main()
{
	char mybuf[512];
	int count;
	while((count = read(0,mybuf,512)) > 0)
		if(write(1,mybuf,count) != count)
		{
			count = -1;
			break;
		}

	if(count < 0)
	{
		write(2,error,sizeof(error));
		exit(1);
	}

	exit(0);
}
