#include<stdio.h>
char* mystrlen(char *s,int i,int j)
{	static char c[100];
	int k=0;
	while(i<=j)
	{ c[k++]=s[i++];
	}
	c[k]='\0';
	return c;
}
void main()
{
	int i,j;
	char s[100],*k;
	printf("enter characters");
	scanf("%s",s);
	printf("enter range");
	scanf("%d%d",&i,&j);
	k=mystrlen(s,i,j);
	printf("%s\n",k);
}
