#include<stdio.h>
int mystrcmp(char *s1,char *s2)
{
	int i,k1=0,k2=0,j;
	for(i=0;s1[i]!='\0';i++)
	{	
		k1+=s1[i];
	}
	for(j=0;s2[j]!='\0';j++)
	{
		k2+=s2[j];
	}
	if(k1>k2)
	return 1;
	else if(k1==k2)
	return 0;
	else
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
