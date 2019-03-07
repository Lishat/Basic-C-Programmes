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
	int c = 0;
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
		c++;
	}
	printf("\n");
	scanf("%d", &p);
	struct Node *nw, *su, *pr;
	pr = new Node;
	su = new Node;
	int count =  0;
	if(p == c - 1)
	{
		head = first;
		while(head != NULL)
		{
			if(count == c - 2)
			{
				rear = head;
				rear->next = NULL;
				head->next = NULL;
			}
			head = head->next;
			count++;
		}
		pr->next = su;
	}
	else if(p != 0)
	{
		head = first;
		while(head != NULL)
		{
			if(count == p - 1)
			{
				pr = head;
			}
			else if(count == p + 1)
			{
				su = head;
			}
			head = head->next;
			count++;
		}
		pr->next = su;
	}
	else if(p == 0)
	{
		head = first->next;
		first = first->next;
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
