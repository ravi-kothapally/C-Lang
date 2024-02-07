#include<stdio.h>
void main()
{
	int n;
	printf("enter ritcher scale reading");
	scanf("%d",&n);
	if(n<5)
	printf("little or no damage");
	if((n>=5)&&(n<5.5))
	printf("some damage");
	if((n>=5.5)&&(n<6.5))
	printf("severe damage");
	if((n>=6.5)&&(n<7.5))
	printf("disaster");
	if(n>=7.5)
	printf("catastophe");
}

	
