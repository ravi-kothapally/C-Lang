#include<stdio.h>
char *mystrcat(char *s1,char *s2)
{
	static char c[100];
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		c[i]=s1[i];
		i++;
	}
	while(s2[j]!='\0')
	{
		c[i++]=s2[j++];
	}
	c[i]='\0';
 return c;
}
	
void main()
{
	char s1[100],s2[100],*s;
	printf("string 1");
	scanf("%s",s1);
	printf("string 2");
	scanf("%s",s2);
	s=mystrcat(s1,s2);
	printf("%s",s);
}
	
