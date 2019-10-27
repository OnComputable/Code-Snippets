typedef int length;

Length len, maxlen;
Length *lengths[];

typedef char *String;

String p, lineptr[MAXLINES], alloc(int);
int strcmp(String, String);
p = (String) malloc(100);

typedef struct tnode *Treeptr;

typedef struct tnode{ /* the tree node */
	char *word;	/* points to the text */
	int count;	/* number of occurences */
	struct tnode *left; /* left child */
	struct tnode *right; /* right child */
} Treenode;

Treeptr talloc(void)
{
	return (Treeptr) malloc(sizeof(Treenode));
}

typedef int (*PFI)(char *, char *);

PFI strcmp, numcmp;
