#include<stdio.h>
int lower(char *s)
{
	
		if(*s>=65&&*s<91)
		return 1;
		if(*s>96&&*s<123)
		return 0;
}
	
void main()
{	int i;
	char s;
	printf("CHARACTER");
	scanf("%c",&s);
	i=lower(&s);
	if(i==1)
	printf("upper");
	if(i==0)
	printf("lower");
	
}
	
	
