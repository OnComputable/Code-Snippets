// Que 7.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

char * get(char *, int);

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void editbook(struct book *);

char * get(char *string, int n)
{
	// wrapper for fgets that replaces first newline with null
	
	char *return_value = fgets(string, n, stdin);

	while (*string != '\0')
	{
		if (*string == '\n')
		{	
			*string = '\0';
			break;
		}

		string++;
	}
	return return_value;
}

void editbook(struct book *bk)
{
	puts("Enter new title for book:");
	get(bk->title, MAXTITL);
	puts("Enter new author for book:");
	get(bk->author, MAXAUTL);
	puts("Enter new value for book:");
	scanf("%f", &bk->value);

	while (getchar() != '\n') continue;
}

int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index, filecount, ch;
	FILE * pbooks;
	int size = sizeof(struct book);

	if ((pbooks = fopen("book.dat", "rb")) == NULL)
	{
		fprintf(stderr, "Could not open file 'book.dat'.\n");
		exit(EXIT_FAILURE);
	}

	printf("Current contents of book.dat: \n");
	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	{
		printf("%s by %s: %.2f\n", library[count].title,
				library[count].author, library[count].value);

		printf("Please select an action:\n"
				"[n] next record [d] delete this record "
				"[m] modify this record.\n");
		ch = getchar();
		while (getchar() != '\n') continue;
		switch (ch)
		{
			case ('n'):
			case ('N'):
				break;
			case ('m'):
			case ('M'):
				editbook(&library[count]);
				break;
			case ('d'):
			case ('D'):
				count--;
				break;
			default:
				break;
		}
		count++;
	}

	fclose(pbooks);

	if (count == MAXBKS)
		printf("The file 'books.dat' is full.\n");
	else 
	{
		// if 'book.dat' is not at capacity, prompt user for more books

		puts("Please add new book titles.");
		puts("Press [enter] at the start of a line to stop.");
		while (count < MAXBKS && get(library[count].title, MAXTITL) != NULL
				&& library[count].title[0] != '\0')
		{
			puts("Now enter the author.");
			get(library[count].author, MAXAUTL);
			puts("Now enter the value.");
			scanf("%f", &library[count].value);
			while (getchar() != '\n') continue;
			count++;

			if (count < MAXBKS)
				puts("Enter the next title.");
		}
	}

	if ((pbooks = fopen("book.dat", "wb")) == NULL)
	{
		fprintf(stderr,"Could not open file 'book.dat' for write.\n");
		exit(EXIT_FAILURE);
	}
	
	if (count > 0)
	{
		puts("Here is your list of books:");
		for (index = 0; index < count; index++)
			printf("%s by %s: %.2f\n", library[index].title,
					library[index].author, library[index].value);
		fwrite(library, size, count, pbooks);
	}
	else
	{
		puts("No books? too bad.\n");
	}

	puts("Bye.\n");
	fclose(pbooks);

	return 0;
}
