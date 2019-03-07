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

void swap(int A[], int low, int p)
{
	int temp;
	temp = A[low];
	A[low] = A[p];
	A[p] = temp;
}

void selectionsort(int A[], int n)
{
	int sma, i, p, low;
	for(low = 0; low <= n - 1; low++)
	{
		sma = A[low];
		for(i = low; i <=  n - 1; i++)
		{
			if(A[i] <= sma)
			{
				sma = A[i];
				p = i;
			}
		}
		swap(A, low, p);
	}
}

	
int main()
{
	int A[1000000], n;
	scanf("%d", &n);
	scan(A, n);
	selectionsort(A, n);
	print(A, n);
	return 0;
}
