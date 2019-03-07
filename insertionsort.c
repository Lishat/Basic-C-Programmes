#include<stdio.h>

void scan(int A[], int n)
{
	int i;
	for(i = 0; i <= n - 1; i++)
	{
		scanf("%d", &A[i]);
	}
}

void print(int A[], int n)
{
	int i;
	for(i = 0; i <= n - 1; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

void sort(int A[], int i)
{
	int j, p = 0, m, temp;
	for(j = 0; j <= i; j++)
	{
		if(A[i] <= A[j])
		{
			temp = A[i];
			p = 1;
			m = j;
			break;
		}
	}
	if(p == 1)
	{
		for(j = i; j >= m + 1; j--)
		{
			A[j] = A[j-1];
		}
	}
	A[m] = temp;
}

void insertionsort(int A[], int n)
{
	int i;
	for(i = 0; i <= n - 1; i++)
	{
		sort(A, i);
	}
}



int main()
{
	int n, A[1000000];
	scanf("%d", &n);
	scan(A, n);
	insertionsort(A, n);
	print(A, n);
	return 0;
}
	
