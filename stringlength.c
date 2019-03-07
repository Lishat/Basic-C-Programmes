#include<bits/stdc++.h>

int strlen(char s[], int count)
{
	if(s[count] == '\0')
	{
		return count;
	}
	else
	{
		count++;
		return strlen(s, count);
	}
}
		
int main()
{
	int p, count = 0;
	char s[1000000];
	scanf("%s", s);
	p=strlen(s, count);
	printf("%d\n", p);
	return 0;
}
