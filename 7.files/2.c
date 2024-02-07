#include<stdio.h>
void main()
{
	FILE *fp,*fp1;
	char *c;
	int i=0;
	fp1=fopen("123.txt","r");
	fp=fopen("abc.txt","w");
	
	while(c[i]!=EOF)
	{
		fscanf(fp1,"%s",c);
		if(c[i]!=EOF)
		fprintf(fp,"%s",c);
		i++;
	}
}
