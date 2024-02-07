#include<stdio.h>
void main()
{
	FILE *fp,*fp1;
	char c;
	fp1=fopen("123.txt","r");
	fp=fopen("abc.txt","w");
	
	while(c!=EOF)
	{
		c=fgetc(fp1);
		if(c!=EOF)
		fputc(c,fp);
	}
}
