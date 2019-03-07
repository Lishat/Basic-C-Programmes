#include<stdio.h>

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	int i, n, p;
	scanf("%d", &n);
	struct Node *temp;
	struct Node *first;
	first =  new Node;
	scanf("%d ", &first->data);
	struct Node *head = first;
	first->next = head;
	struct Node *rear = first;
	for(i = 1;i <= n - 1;i++)
	{
		temp = new Node;
		scanf("%d", &temp->data);
		temp->next = NULL;
		rear->next = temp;
		rear = temp;	
	}
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
	int nw;
	scanf("%d %d", &p, &nw);
	int count = 0;
	head = first;
	while(head != NULL)
	{
		if(p == count)
		{
			head->data = nw;
		}
		head=head->next;
		count++;
	}
	head = first;
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
	return 0;
}
