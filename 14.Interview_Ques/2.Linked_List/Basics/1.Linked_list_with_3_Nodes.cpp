/*
 * https://www.geeksforgeeks.org/linked-list-set-1-introduction/
 *
 */

#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
};

int main(void)
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocating the 3 nodes in heap using "new"
	
	head = new Node();
	second = new Node();
	third = new Node();

	// putting and linking the linked list
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;

	// printing the linked list
	for(int i = 0; i < 3; i++)
	{
		cout << head->data << " ";
		head = head->next;
	}



	return 0;
}
