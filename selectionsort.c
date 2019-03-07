#include<stdio.h>

int main()
{
	int A[1000000], n, i, b, j, temp, k;
	scanf("%d", &n);
	for(i = 0; i <= n - 1; i++)
	{
		scanf("%d", &A[i]);
	}
	for(k = 0; k <= n - 1; k++)
	{
		b = A[k];
		j = k;
		for(i = k; i <= n - 1; i++)
		{
			if(A[i] <= b)
			{
				j = i;
				b = A[i];
			}
		}
		temp = A[j];
		A[j] = A[k];
		A[k] = temp;
	}
	for(i = 0; i <= n - 1; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}
	 
	
