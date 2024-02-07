#include<stdio.h>
int add(int c,int d)
{
	int m;
	m=c+d;
	return m;
}
int subtract(int c,int d)
{
	int m;
	m=c-d;
	return m;
}
int product(int c,int d)
{
	int m;
	m=c*d;
	return m;
}
int quotient(int c,int d)
{
	int m;
	m=c/d;
	return m;
}
int modulo(int c,int d)
{
	int m;
	m=c%d;
	return m;
}
void main()
{
	int a,b,c,e,f,d,g;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	d=subtract(a,b);
	e=product(a,b);
	f=quotient(a,b);
	g=modulo(a,b);
	printf("%d\n%d\n%d\n%d\n%d\n",c,d,e,f,g);
}
