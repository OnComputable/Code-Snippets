//https://www.geeksforgeeks.org/radix-sort/

// Method 2: Radix sort using bucket sort
//
// Radix sort can be applied by applying diffrent sorting algo
// inside it's shell the decision must be taken by our need
// Compile using $g++ -std=c++17 programname.cpp

#include <bits/stdc++.h>
using namespace std;

// Structure for the node
struct node
{
	int data;
	node* next;
};

// structure for creating a Node
struct node* create(int x)
{
	node* temp = new node();
	temp->data = x;
	temp->next = NULL;

	return temp;
}


// function prototypes
void radixSort(vector<int>& arr);
int digits(int);
void insert(node*&, int);
int del(node*&);
void print(vector<int> arr);

int main(void)
{
	vector<int> arr = { 573, 25, 415, 12, 161, 6 };

	radixSort(arr);

	print(arr);

	return 0;
}

void radixSort(vector<int>& arr)
{
	// here size() is a fun from lib
	int sz = arr.size();

	// here max_element() is a funciton from library
	int max_val = *max_element(arr.begin(), arr.end());

	// digits() is fun present in this program
	int d = digits(max_val);

	// bucket creationg for storing pointers.
	node** bins;	// node is a pointer to pointers

	// array of pointers to linked list of size 10
	
	bins = new node*[10];

	// initializing hash array with null values
	for(int i = 0; i < 10; i++)
	{
		bins[i] = NULL;
	}

	for(int i = 0; i < d; i++)
	{
		for(int j = 0; j < sz; j++)
		{
			insert(bins[(arr[j] / (int)pow(10, i)) % 10], arr[j]);// insert is fun written by us
		}
	

		int x = 0, y = 0;

		while(x < 10)
		{
			while(bins[x] != NULL)
			{
				arr[y++] = del(bins[x]);// del is fun written by us
			}
			x++;
		}
	}
}

int digits(int n)
{
	int i = 1;
	if(n <  10)
	{
		return 1;
	}

	// here pow() is fun present in lib
	// it returns number of digits by comparing our max
	// number with powers of 10.
	while(n > (int)pow(10, i))
	{
		i++;
	}	

	return i;
}

void insert(node*& head, int n)
{
	if(head == NULL)
	{
		head = create(n); // create is fun written by us
		return;
	}

	node* t = head;
	while(t->next != NULL)
	{
		t = t->next;
	}
	t->next = create(n);
}

int del(node*& head)
{
	if(head == NULL)
	{
		return 0;
	}
	node* temp = head;
	
	int val = head->data;

	head = head->next;

	delete temp;	// Delete is an operator that is used to destroy array and non-array(pointer) objects which are created by new expression. New operator is used for dynamic memory allocation which puts variables on heap memory
	return val; 
}

void print(vector<int> arr)
{
	for(int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " "; 
	}
	cout << endl;
}
