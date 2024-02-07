#include<stdio.h>
char *mytoupper(char *s)
{	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97&&s[i]<123)
		{	s[i]=s[i]-32;
		}
	}
	return s;
}
	
void main()
{
	char s[100],*s1;
	printf("string");
	scanf("%s",s);
	s1=mytoupper(s);
	printf("%s",s1);
}
	
	
