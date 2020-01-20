// a, b, c, d, e, f, g, h
// written wrong need to fix it


#include <stdio.h>
#include <string.h>

struct fullname {
	char fname[20];
	char lname[20];
};

struct bard {
	struct fullname name;
	int born;
	int died;
};

struct bard willie = 
{
	{"Pawan", "Wankhede"},
	1996,
	0
};

struct bard *pt = &willie;
	
int main(void)
{	
/*	struct bard willie = 
	{
		{"Pawan", "Wankhede"},
		1996,
		0
	};

	struct bard *pt = &willie;
*/
	printf("%d \n", willie.born );
	printf("%d \n", pt->born);
	scanf("%d \n", &willie.born);
	scanf("%d", &pt->born);
	scanf("%s", willie.name.lname);
	scanf("%s", pt->name.lname);
	printf("%s \n", willie.name.fname[2]);
	printf("%d \n", strlen(willie.name.fname) + strlen(willie.name.lname));

	return 0;
}
