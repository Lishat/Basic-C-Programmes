#include<stdio.h>

void call(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	call(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}
