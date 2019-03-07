#include<stdio.h>

void scan(int A[], int n)
{
	int i;
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &A[i]);
	}
}

int binarysearch(int A[], int low, int high, int mid, int k)
{
	int p = 0;
	while(low != high)
	{
		mid = (high + low)/2;
		if(A[mid] == k)
		{
			p = 1;
			low = high;
		}
		else if(A[mid] > k)
		{
			high = mid;
		}
		else if(A[mid] < k)
		{
			low = mid;
		}
	}
	return p;
}

int main()
{
	int A[1000000], n, k, low, high, mid, p;
	scanf("%d", &k);
	scanf("%d", &n);
	scan(A, n);
	low = 1;
	high = n;
	mid = n/2;
	p = binarysearch(A, low, high, mid, k);
	if(p == 0)
	{
		printf("NO\n");
	}
	else if(p == 1)
	{
		printf("YES\n");
	}
	return 0;
}
