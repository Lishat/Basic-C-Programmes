#include<stdio.h>
void incr(int *p)
{
	int i;
	for(i = 0; i <= 100; i++)
	{
		p[i] = i + 1;
	}
}
int main()
{
	int A[1000000], i;
	incr(A);
	for(i = 0; i <= 100; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}
