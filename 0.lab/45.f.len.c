#include<stdio.h>
int mystrlen(char *s)
{	int i=0;
	while(s[i]!='\0')
	{ i++;
	}
	return i;
}
int mystrcmp(char *s1,char *s2)
{
	int l1,l2;
	l1=mystrlen(s1);
	l2=mystrlen(s2);
	if(l1>l2)
	return 1;
	if(l1==l2)
	return 0;
	if(l1<l2)
	return -1;
}
void main()
{	
	int k;
	char s1[100],s2[100];
	printf("string 1");
	scanf("%s",s1);
	printf("string 2");
	scanf("%s",s2);
	k=mystrcmp(s1,s2);
	if(k==1)
	printf("string 1 is bigger");
	if(k==0)
	printf("strings r equal");
	if(k==-1)
	printf("string 2 is bigger");
}
	
