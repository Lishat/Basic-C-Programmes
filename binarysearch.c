#include<stdio.h>

void scan(int A[], int n)
{
	int i;
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &A[i]);
	}
}

void binarysearch(int A[], int low, int high, int mid, int k)
{
	if(A[mid] == k)
	{
		printf("YES\n");
	}
	else if(low == mid)
	{
		printf("NO\n");
	}
	else if(A[mid] > k)
	{
		high = mid;
		mid = (low + high)/2;
		binarysearch(A, low, high, mid, k);
	}
	else if(A[mid] < k)
	{
		low = mid;
		mid = (low + high)/2;
		binarysearch(A, low, high, mid, k);
	}
}

int main()
{
	int A[1000000], n, k, low, high, mid;
	scanf("%d", &k);
	scanf("%d", &n);
	scan(A, n);
	low = 1;
	high = n;
	mid = n/2;
	binarysearch(A, low, high, mid, k);
	return 0;
}
