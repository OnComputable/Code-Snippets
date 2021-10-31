/*
 * https://youtu.be/ERgOR3_8k9A?list=PLU7J10KW9nLCOM20EQgrHKDcUJfXvuCGG&t=1968
 */

#include <stdio.h>
#include <stdlib.h>	// for - exit(0)  system call
#include <malloc.h>	// for dynamic memory allocation

struct node
{
	int data;
	struct node *next;
}*head;


void create(int);
int display(void);
void add_at_beg(int);

int  main(void)
{
	head = NULL;	// new node created it is an empty linked list

	int ch;	// choice to the user
	// taking input from user
	int n, v, i;
	while(1)
	{
		printf("\n0) Exit \n1) Create \n2) Display \n3) Add node at front\n");
		printf("\nEnter your choice: \n");
		scanf("%d", &ch);

		switch(ch)
		{
			case 0:
				exit(0);
				break;
		
			case 1:
				printf("\nHow many nodes are you willing to create: ");
				scanf("%d", &n);	
				for(int i = 0; i < n; i++)
				{
					printf("\nEnter the element : ");
					scanf("%d", &v);
					create(v);
				}
				break;

			case 2:
				display();
				break;

			case 3:
				printf("\nEnter the node to be added : ");
				scanf("%d", &i);
				add_at_beg(i);
				display();
				break;

			default:	
				printf("\nEnter a valid choice!!\n");
		}

	}

	return 0;
}

void create(int v)
{
	struct node *tmp, *q;	// here q is dummy var
	tmp = malloc(sizeof(struct node));
	tmp->data = v;	// v in data
	tmp->next = NULL;	// next of tmp is nothing
	
	// list empty condition
	if(head == NULL)
	{
		head = tmp;
	}
	// list not empty condition
	else
	{
		q = head;
		while(q->next != NULL)
		{
			q = q->next;
		}

		q->next = tmp;
	}

	printf("%d", tmp->data);
}


int display(void)
{
	struct node *q;	// for iterating
	
	// if list is empty
	if(head == NULL)
	{
		printf("\nList is empty\n");
		return 0;
	}
	// list is not empty
	q = head;
	printf("\nThe list is =");
	
	while(q != NULL)
	{
		printf("%d ", q->data);
		q = q->next;
	}
}


void add_at_beg(int i)
{
	struct node *tmp;
	tmp = malloc(sizeof(struct node));
	
	// data insertion
	tmp->data = i;
	tmp->next = head;
	head = tmp;
}
