#include<stdio.h>
int myatoi(char *c)
{
	int i;
	i=*c;
	return i;
}
void main()
{
	char c;
	int k;
	printf("enter char");
	scanf("%c",&c);
	k=myatoi(&c);
	printf("%d",k);
}

	
