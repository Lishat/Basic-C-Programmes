#include<stdio.h>

void print(char A[][1000], int m, int n, int i, int j)
{
	if(j == n)
	{
	}
	else if(i != m)
	{
		printf("%c", A[i][j]);
		print(A, m, n, i + 1, j);
	}
	else if(i == m)
	{
		i = 0;
		print(A, m, n, i, j + 1);
	}
}

void mingling(char A[][1000], int m, int n)
{
	int i = 0, j = 0;
	print(A, m, n, i, j);
}


int main()
{
	int m, n, i, j, k, t;
	scanf("%d", &t);
	for(k = 1; k <= t; k++)
	{
		char A[1000][1000];
		scanf("%d %d", &m, &n);
		for(i = 0; i <= m - 1; i++)
		{
			for(j = 0; j <= n - 1; j++)
			{
				scanf(" %c", &A[i][j]);
			}
		}		
		mingling(A, m, n);
		printf("\n");
	}
			
		return 0;
}
