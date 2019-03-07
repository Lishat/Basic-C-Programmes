#include<stdio.h>

int main(int argc, char **argv)
{
	char ch;
	FILE *fp1 = fopen(argv[1], "r"); 
	FILE *fp2 = fopen(argv[2], "w");
	while((fscanf(fp1, "%c", &ch)) != EOF)
	{
		fprintf(fp2, "%c", ch);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
