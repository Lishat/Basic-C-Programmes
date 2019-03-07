#include<stdio.h>

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	
	struct Node *node;
	struct Node *first;
	first =  new Node;
	scanf("%d ", &first->data);
	struct Node *head = first;
	first->next = head;
	struct Node *rear = first;
	for(;;)
	{
		node = new Node;
		scanf("%d", &node->data);
		if(node->data == 0)
		{
			break;
		}
		else
		{
			node->next = NULL;
			rear->next = node;
			rear = node;
		}
	
	}
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	return 0;
}
