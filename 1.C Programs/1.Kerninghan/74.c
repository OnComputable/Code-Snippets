FILE *fp
FILE *fopen(char *name, char *mode);

fp = fopen(name, mode);

int getc(FILE *fp)
int putc(int c, FILE *fp)

#define getchar()	getc(stdin)
#define putchar(c)	putc((c), stdout)

int fscanf(FILE *fp, char *format, ...)
int fprintf(FILE *fp, char *format, ...)

