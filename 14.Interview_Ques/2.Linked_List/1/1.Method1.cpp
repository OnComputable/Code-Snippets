// https://www.geeksforgeeks.org/nth-node-from-the-end-of-a-linked-list/

// Method1 : Use length of linked list

#include <bits/stdc++.h>
using namespace std;

//Self referential structure
struct Node
{
	int data;
	struct Node* next;
};


void printNthFromLast(struct Node*, int);
void push(struct Node**, int);

int main(void)
{
	// empty list
	struct Node* head = NULL;

	// Here linked list is 35->15->4->20
	// pushing ele into the list
	push(&head, 20);
	push(&head, 4);
	push(&head, 15);	
	push(&head, 35);

	printNthFromLast(head, 4);	// pointer to first node and the nth ele to be printed  from  last is passed i.e. 4
	

	return 0;
}

void push(struct Node** head_ref, int new_data)
{
	// allocate node
	struct Node* new_node = new Node();

	// put in the data
	new_node->data = new_data;

	// link old list off the new node
	new_node->next = (*head_ref);

	// now move the head to point to the new node
	(*head_ref) = new_node;

}

void printNthFromLast(struct Node* head, int n)
{	
	int len = 0, i;
	struct Node* temp = head;

	// counting number of nodes in linked list
	while(temp != NULL)
	{
		temp = temp->next;
		len++;	// var storing length of linked list
	}

	if(len < n)
	{
		return;
	}

	temp = head;

	// getting the corresponding ele from the first instead of last 
	for(i = 1; i < len - n + 1; i++)
	{
		temp = temp->next;
	}

	cout << temp->data;

	return;
}	
