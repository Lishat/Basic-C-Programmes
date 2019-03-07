#include<stdio.h>

struct Node
{
	int data;
	struct Node *next;
};

void display(struct Node *p)
{
	while(p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
}

int main()
{
	Node *p1, *p2, *p3, *head;
	p1 = new Node;
	p2 = new Node;
	p3 = new Node;
		
	p1->data = 10;
	p2->data = 20;
	p3->data = 30;
	 
	 p1->next = p2;
	 p2->next = p3;
	 p3->next = NULL;
	 head = p1;
	 display(head);
}
