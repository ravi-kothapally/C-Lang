//assigns null if file open fails
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("mat","r");
	if(fp==NULL)
	{
		puts("cannot open");
		exit(1);
	}
}
