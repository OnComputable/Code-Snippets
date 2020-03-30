/********************************************************
 * [ File: find/find.c ]
 * ******************************************************/ 

#include <stdio.h>
#include <string.h>

struct linked_list {
	struct linked_list *next_ptr;		// Next item in the list
	char *data;				// Data for the list
};

struct linked_list *first_ptr;
/********************************************************
 * find -- Looks for a data item in the list.
 *
 * Parameters
 * 	name -- Name to look for in the list.
 *
 * Returns
 * 	1 if name is found.
 * 	0 if name is not found.
 * ******************************************************/ 
int find(char *name)
{
	// current structure we are looking at
	struct linked_list *current_ptr;

	current_ptr = first_ptr;

	while ((strcmp(current_ptr->data, name) != 0) && (current_ptr != NULL))
		current_ptr = (*current_ptr)->next_ptr;

	/*
	 * If current_ptr is null, we fell off the end of the list and
	 * didn't find the name
	 */
	return (current_ptr != NULL);
}


/********************************************************
 * Question: 17-1: Answer : The problem is caused by 
 * 	while statement in which we directly use the 
 * 	current_ptr for data before checking that it
 * 	is NULL or not.
 * 	so the statements should be - 
 * 	while (current_ptr != NULL) {
 *		if (strcmp(current_ptr->data, name) == 0)
 *			break;
 * 	}
 * ******************************************************/ 
