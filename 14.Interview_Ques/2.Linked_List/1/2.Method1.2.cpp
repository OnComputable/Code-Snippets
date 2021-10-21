//https://www.geeksforgeeks.org/nth-node-from-the-end-of-a-linked-list/
// Recursive method for using length of linked list

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;	// self referential for linked list
};


void printNthFromLast(struct Node*, int);
void push(struct Node**, int);


int main(void)
{
	struct Node* head = NULL;

	// create list as 35->15->4->20
	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 35);

	printNthFromLast(head, 1);

	return 0;
}

void push(struct Node** head_ref, int new_data)
{
	// allocate Node
	struct Node* new_node = new Node();

	// putting the data
	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void printNthFromLast(struct Node* head, int n)
{
	int i = 0;

	if(head == NULL)	// base condition
	{
		return;
	}

	printNthFromLast(head->next, n);

	if(++i == n)
	{
		cout <<head->data << "\n";
	}
}

// Program is not working as intended trace the recursion
