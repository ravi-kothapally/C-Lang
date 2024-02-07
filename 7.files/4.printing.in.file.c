//recieves strings from keyboard and writes to file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char s[100];
	fp=fopen("4.print","w");
	if(fp==NULL)
	{
		puts("cannot open");
		exit(1);
	}
	printf("enter string");
	while(strlen(gets(s))>0)
	{
		fputs(s,fp);
		fputs("\n",fp);
	}
	fclose(fp);
}
