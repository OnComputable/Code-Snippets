/*
 *
 * https://www.geeksforgeeks.org/linked-list-set-1-introduction/
 *
 */

#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
};

void printList(Node* n);

int main(void)
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocating mem for nodes
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	printList(head);

	return 0;
}

void printList(Node* n)
{	
	while(n != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}
