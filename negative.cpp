#include<iostream>
using namespace std;

int neg(int *p, int n)
{
	int count;
	for(int i = 0; i <= n - 1; i++)
	{
		if(*(p+i) < 0)
		{
			count++;
		}
	}
	return count; 
}

int main()
{
	int n;
	cin>>n;
	int *p;
	p = new int[n];
	for(int i = 0; i <= n - 1; i++)
	{
		cin>>p[i];
	}
	cout<<neg(p, n)<<endl;
	return 0;
}
