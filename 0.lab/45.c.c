#include<stdio.h>
int mystrlen(char *s)
{	int i=0;
	while(s[i]!='\0')
	{ i++;
	}
	return i;
}
void main()
{
	int k;
	char s[100];
	printf("enter characters");
	scanf("%s",s);
	k=mystrlen(s);
	printf("%d\n",k);
}
