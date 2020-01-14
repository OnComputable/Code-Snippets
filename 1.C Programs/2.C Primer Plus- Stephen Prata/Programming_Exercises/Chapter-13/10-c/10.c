// Que 10.c

#include <stdio.h>
#include <stdlib.h>
#define SLEN 81

void get(char * string, int n);

void get(char * string, int n)
{
	// wrapper for fgets - read from stdin and replace
	// first newline with null character
	
	fgets(string, n, stdin);

	while (*string != '\0')
	{
		if (*string == '\n')
		{
			*string = '\0';
			break;
		}
		string++;
	}
}

int main(void)
{
	FILE *fp;
	char filename[SLEN];
	long pos;
	int ch;

	printf("Enter a filename: ");
	get(filename, SLEN);

	if ((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr,"Could not open file %s.\n", filename);
		exit(EXIT_FAILURE);
	}

	printf("Enter a position: ");
	while (scanf("%ld", &pos) == 1)
	{
		if (pos < 0)
			break;

		fseek(fp, pos, SEEK_SET);
		while ((ch = getc(fp)) != EOF && ch != '\n')
			putchar(ch);
		putchar('\n');

		printf("Enter a position: ");
	}

	fclose(fp);
	puts("Done.");

	return 0;
}
