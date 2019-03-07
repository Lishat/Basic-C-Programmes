#include<stdio.h>
#include<string.h>

struct Date
{
	int day;
	char month[100];
	int year;
};

void scan(Date D[])
{
	int i;
	for(i = 0; i <= 4; i++)
	{
		scanf("%d %s %d", &D[i].day, D[i].month, &D[i].year);
	}
}

void sort(struct Date D[])
{
	struct Date temp;
	int i, j;
	for(j = 3; j >= 0; j--)
	{
		for(i = 0; i <= j; i++)
		{
			if(strcmp(D[i].month, D[i+1].month) >= 0)
			{
				temp = D[i];
				D[i] = D[i+1];
				D[i+1] = temp;
			}
		}
	}
}	 

void print(struct Date D[])
{
	int i;
	for(i = 0; i <= 4; i++)
	{
		printf("%d %s %d\n", D[i].day, D[i].month, D[i].year);
	}
}

int main()
{
	struct Date D[5];
	scan(D);
	sort(D);
	print(D);
	return 0;
}
	
