#include<stdio.h>

int sum(int n, int s)
{
	if(n == 0)
	{
		return s;
	}
	else
	{
		s = s + (n%10);
		return sum(n/10, s);
	}
}

int main()
{
	int n, p, s=0;
	scanf("%d", &n);
	p=sum(n, s);
	printf("%d\n", p);
	return 0;
}
	
