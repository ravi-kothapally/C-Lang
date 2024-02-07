#include<stdio.h>
char *mytolower(char *s)
{	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<91)
		{	s[i]=s[i]+32;
		}
	}
	return s;
}
	
void main()
{
	char s[100],*s1;
	printf("string");
	scanf("%s",s);
	s1=mytolower(s);
	printf("%s",s1);
}
	
	
