/********************************************************
 * [ File: list/list.p1 ] [ File: list/list.p2 ]
 * ******************************************************/ 

void enter(struct item *first_ptr, const int value)
{
	struct item *before_ptr;	// Item before this one
	struct item *after_ptr;		// Item after this one
	struct item *new_item_ptr;	// Item to add

	// Create new item to add to the list
	
	before_ptr = first_ptr;		// Start at the beginning
	after_ptr = before_ptr->next_ptr;

	while (1)
	{
		if (after_ptr == NULL)
			break;

		if (after_ptr->value >= value)
			break;

		// Advance the pointers
		after_ptr = after_ptr->next_ptr;
		before_ptr = before_ptr->next_ptr;
		
		new_item_ptr = malloc(sizeof(struct item));
		new_item_ptr->value = value;	// Set value of item

		before_ptr->next_ptr = new_item_ptr;
		new_item_ptr->next_ptr = after_ptr;
	}
}
