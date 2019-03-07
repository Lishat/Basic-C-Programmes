#include<stdio.h>

int main()
{
	char a;
	FILE *fp1, *fp2;
	fp1 = fopen("input.txt", "r");
	fp2 = fopen("output.txt", "w");
	while(fscanf(fp1, "%c", &a) >= 1)
	{
		a = a + 1;
		fprintf(fp2, "%c", a);
	}
	return 0;
}	
