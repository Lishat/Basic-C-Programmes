#include<iostream>
using namespace std;

int sma(int *p, int n)
{
	int i, b;
	b = *p;
	for(i = 0; i <= n - 1; i++)
	{
		if(*(p+i) < b)
		{
			b = *(p+i);
		}
	}
	return b;
}

int main()
{
	int *p, n, l, i;
	cin>>n;
	p = new int[n];
	for(i = 0; i <= n - 1; i++)
	{
		cin>>*(p+i);
	}
	l = sma(p, n);
	cout<<l<<endl;
	return 0;
}
