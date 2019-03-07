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

void swap(int A[], int i)
{
	int temp=0;
	temp = A[i];
	A[i] = A[i+1];
	A[i+1] = temp;
}
	
void bubbleSort(int A[], int n)
{
	int i, j;
	for(j = n - 1; j > 0; j--)
	{
		for(i = 0; i <= j - 1; i++)
		{
			if(A[i] >= A[i+1])
			{
				swap(A, i);
				print(A, n);
			}
		}
	}
}
	

int main()
{
	int n, A[1000000];
	scanf("%d", &n);
	scan(A, n);
	bubbleSort(A, n);
	print(A, n);
	return 0;
}

