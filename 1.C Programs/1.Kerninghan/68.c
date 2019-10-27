union u_tag
{
	int ival;
	float fval;
	char *sval;
}u;

struct{
	char *name;
	int flags;
	int utype;
	union{
		int ival;
		float fval;
		char *sval;
	}u;
}symtab[NSYM];

symtab[i].u.ival
*symtab[i].u.sval[0]


if(utype == INT)
	printf("%d\n", u.ival);
if(utype == FLOAT)
	printf("%f\n", u.fval);
if(utype == STRING)
	printf("%s\n", u.sval);
else
	printf("bad type %d in utype\n", utype);

