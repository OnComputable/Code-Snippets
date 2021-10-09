//https://www.geeksforgeeks.org/majority-element/

// Using Binary Search Tree

#include <bits/stdc++.h>
using namespace std;

// structure for binary tree
struct node
{
	int key;	// key in node
	int c = 0;	// count of the element
	struct node *left, *right; // tree elment at left and right
};

// Creation of BST node using above structure
struct node* newNode(int item)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));//  [dynamic mem allocation]

	temp->key = item;	// key into node value
	temp->c = 1;
	temp->left = temp->right = NULL; // initializing left and right with NULL

	return temp;
}



// Inserting node into BST
struct node* insert(struct node* node, int key, int& ma)
{	
	if(node == NULL)
	{
		if(ma == 0)
		{
			ma = 1;
		}
		return newNode(key); // returning and calling newNode fun with key.
	}

	// recursively check and then insert
	if(key < node->key)
	{
		node->left = insert(node->left, key, ma);
	}
	else if(key > node->key) // same as if but it is for right.
	{
		node->right = insert(node->right, key, ma);
	}
	else // Increase count of the node if it's equal to current root
	{
		node->c++;
	}


	ma = max(ma, node->c);

	return node;
}


// inorder of BST to get max element
void inorder(struct node* root, int s)
{
	if(root != NULL)
	{
		inorder(root->left, s);

		// if it's count is majority print the number
		if(root->c > (s/2))
		{
			printf("%d \n", root->key);
		}

		inorder(root->right, s);
	}
}


int main(void)
{
	int a[] = { 1, 3, 3, 3, 2 };
	int size = (sizeof(a)) / sizeof(a[0]); // size of array

	struct node* root = NULL;	// initializing root with NULL
       int ma = 0;		// Maximum count.

	for(int  i = 0; i < size; i++)
	{
		root = insert(root, a[i], ma);  // inserting element
	}	

	if(ma > (size / 2))
	{
		inorder(root, size);
	}
	else
	{
		cout << "No majority element\n";
	}

	return 0;
}


// Visualization  - here node [ele , Count]
//
//
//		[1, 1]
//		   \
//		    \
//		    [3, 3]
//		    /
//		   /
//		  [2, 2]
//
//
//T(n) = O(n^2)
//Becoz BST can be skewed. 
