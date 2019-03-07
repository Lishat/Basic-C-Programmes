#include<stdio.h>

int main()
{
	int x = 5, y = 15, *p1, *p2;
	p1 = &x;
	p2 = &y;
	printf("%d %d %p %p %d %d\n",x, y, p1, p2, *p1, *p2);
	*p1 = 10;
	printf("%d %d %p %p %d %d\n",x, y, p1, p2, *p1, *p2);
	*p2 = *p1;
	printf("%d %d %p %p %d %d\n",x, y, p1, p2, *p1, *p2);
	p1 = p2;
	printf("%d %d %p %p %d %d\n",x, y, p1, p2, *p1, *p2);
	*p1 = 20;
	printf("%d %d %p %p %d %d\n",x, y, p1, p2, *p1, *p2);
	return 0;
}
