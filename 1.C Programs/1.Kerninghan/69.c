#define KEYWORD 01
#define EXTERNAL 02
#define STATIC 04

//or

enum{ KEYWORD = 01, EXTERNAL = 02, STATIC = 04};

/*idioms ->*/

flags |= EXTERNAL | STATIC;

flags &= ~(EXTERNAL | STATIC);

if((flags & (EXTERNAL | STATIC)) == 0)


struct
{
	unsigned int is_keyword : 1;
	unsigned int is_extern  : 1;
	unsigned int is_static  : 1;
}flags;


flags.is_extern = flags.is_static = 1;

flags.is_extern = flags.is_static = 0;

if(flags.is_extern == 0 && flags.is_static == 0)



