#include <stdio.h>
void main()
{
	int a,b,c;
	printf("enter a= ");
	scanf("%d",&a);
	printf("enter b= ");	
 	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("before swapping a=%d \n",b);
	printf("                b=%d\n",a);
	printf(" after swapping a=%d \n",a);
	printf("                b=%d \n",b);
}
