#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sum(char str[],char ex[],int result)
{
	int q;
	q = atoi(ex);
	result = result + q;
	return result;
}

int main()
{
	int i, op, p, r, result,j, s;
	char str[1000000], ex[1000000], em[1000000];
	scanf("%[^\n]s", str);
	p = 0;
	for(i = 0, j = 0; i <= strlen(str) - 1; i++, j++)
	{
		if(str[i] == '+')
		{
			s = sum(str, ex, result);
			result = s;
			j = 0;
			strcpy(ex, em);
		}
		else
		{
			ex[j] = str[i];
			ex[j+1] = '\0';
		}
	}
	printf("%d\n", result);
	return 0;
}
