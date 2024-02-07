#include<stdio.h>
char *mystrrev(char *s1)
{	int i=0,n,j;
	static char s[100];
	while(s1[i]!='\0')
	{i++;}
	n=i;
	for(i=n-1,j=0;i>=0;i--,j++)
	{	
           s[j]=s1[i];
        }
	s[j]='\0';	
	return s;
}
	
void main()
{	
	char *s2;
        char s1[100];
	printf("string 1");
	scanf("%s",s1);
	s2=mystrrev(s1);
	printf("%s",s2);
}
