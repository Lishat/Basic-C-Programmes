#include<stdio.h>

int main(int argc, char *argv[])
{
	char ch;
	FILE *fp1 = fopen(argv[1], "r");
	FILE *fp2 = fopen(argv[2], "w");
	while((fscanf(fp1, "%c", &ch)) >= 1)
	{
		fprintf(fp2, "%c", ch);
	}
	return 0;
}
