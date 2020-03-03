/********************************************************
 * [ File: str/str.c ] 
 * ******************************************************/ 

#include <stdio.h>
#include <string.h>

char name[30];	// first name of someone

int main()
{
	strcpy(name, "Pawan");	// initialize the name
	printf("The name is %s\n", name);

	return(0);
}
