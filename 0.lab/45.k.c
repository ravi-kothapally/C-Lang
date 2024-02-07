#include<stdio.h>
int abb(int i)
{	
        int k;
        k=-i;
	return k;
}
void main()
{
	int i,j;
	scanf("%d",&i);
	j=abb(i);
	printf("%d",j);
}
