// film.c -- implementation file for linked film list

#include "film.h"

// delete the entire film list and free allocated memory
void delete_list(List * list_ptr)
{
	Film * tmp, * list = * list_ptr;
	while (list != NULL)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}

	*list_ptr = NULL;
}

// add a film to the list;
void add_film(List)
{
	
}
