/*
 *https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/
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

void push(Node** head_ref, int new_data);
