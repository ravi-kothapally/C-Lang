#include<stdio.h> 
void main()
{
	int a,b,c,d,e,f,k;
	a=10;
	b=15;
	c=a&b;
	d=a|b;
	e=~a;
	f=a^b;
	k=a>=b;
	printf("%d\n%d\n%d\n%d\n%d\n",c,d,e,f,k);
}
