// list.h -- header file for a simple list type

#ifndef LIST_H_
#define LIST_H_

#include <stdbool.h>
#define TSIZE 45	// size of array to hold title
#define MAXSIZE 100

struct film
{
	char title[TSIZE];
	int rating;
};

// general type definitions
typedef struct film Item;

typedef struct list {
	Item entries[MAXSIZE];		// array of items
	int items;			// number of items in list
} List;

// function prototypes

// operation: initialize a list
// preconditions: plist points to a list
// postcondition: the list is initialized to empty
void InitializeList(List * plist);

// operation: Determine if list is empty
// preconditions: plist points to an initialized list
// postcondition: funcition returns true if list is empty and false otherwise
bool ListIsEmpty(const List * plist);

// operation: Determine if list is full
// preconditions: plist points to an initialized list
// postcondition: Function returns true if list is full and false otherwise
bool ListIsFull(const List * plist);

// operation: Determine number of items in list
// preconditions: plist points to an initialized list
// postconditions: function returns number of item in list
unsigned int ListItemCount(const List * plist);

// operation: Add item to end of list
// preconditions: Item is an item to be added to list
// 		plist points to an initialized list
// postcondition: If possible, Function adds item to end
// 		  of list and returns True; otherwise the function returns False
bool AddItem(Item item, List * plist);

// operation: Apply a function to each item in list
// preconditions : plist points to an initialized list
// 		  pfun points to a function that takes an Item argument and has no
// 		  return value
// postcondition: The function pointed to by pfun is
// 	 	  executed once for each item in the list
void Traverse (const List *plist, void (* pfun)(Item item));

// operation: Free allocated memory, if any
// precondition: plist points to an initialized list
// postcondition: any memory allocated for the list is freed and the list is set to empty
void EmptyTheList(List * plist);

#endif
