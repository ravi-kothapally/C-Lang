#include<stdio.h>
char* myitoa(int i)
{
	static char s;
	s=i;
	return &s;
} 
void main()
{
	int i;
	char* c;
	printf("enter int");
	scanf("%d",&i);
	c=myitoa(i);
	printf("%c\n",*c);
}

	
	
