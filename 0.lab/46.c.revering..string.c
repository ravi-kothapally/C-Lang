#include<stdio.h>
void rev(char a[],int i)
{
	if(a[i]!='\0')
	{
		rev(a,i+1);
		printf("%c",a[i]);
	}
}
void main()
{	int i=0;
	char a[100];
	printf("enter ");
	scanf("%s",a);
	rev(a,i);
}
