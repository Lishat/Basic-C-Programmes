#include<iostream>
#include<string.h>
using namespace std;

void shift(char *p, int b)
{
	int n = strlen(p);
	for(int i = b; i <= n - 3; i++)
	{
		p[i] = p[i+2];
	}
	p[n-2] = '\0';
}

void reb(char *p)
{
	int a, l, b;
	l = strlen(p);
	for(int i = 0; i <= l - 1; i++)
	{
		if(p[i] == '(')
		{
			a = 1;
			b = i;
		}
		else if(p[i] == '{')
		{
			a = 2;
			b = i;
		}
		if(p[i] == '[')
		{
			a = 3;
			b = i;
		}
	} 
	if(a == 1 && p[b+1] ==')')
	{
		shift(p, b);
		reb(p);
	}
	else if(a == 2 && p[b+1] == '}')
	{
		shift(p, b);
		reb(p);
	}
	else if(a == 3 && p[b+1] ==']')
	{
		shift(p, b);
		reb(p);
	}
}
int main()
{
	int m;
	char *p;
	p = new char[1000];
	cin>>p;
	reb(p);
	m = strlen(p);
	if(m == 0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
