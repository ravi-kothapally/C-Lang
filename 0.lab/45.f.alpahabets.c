#include<stdio.h>
int mystrcmp(char *s1,char *s2)
{
	int i=0;
	while(s1[i]==s2[i])
	{
		if(s1[i]!='\0'&&s2[i]!='\0')
		i++;
		else
		break;
	}
	if(s1[i]=='\0'&&s2[i]=='\0')
	return 0;
	else
	if(s1[i]>s2[i])
	return 1;
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
