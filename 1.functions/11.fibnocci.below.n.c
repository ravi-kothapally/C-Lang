#include <stdio.h>
void fibnocci(int n)
{	int f,s,r;
	f=0;s=1;
	printf("%d,%d,",f,s);
	while(f+s<n){
			r=f+s;
			f=s;
			s=r;
			printf("%d,",r);}
}
void main()
{
	int f,s,n,r,c;
	printf("enter a number");
	scanf("%d",&n);
	fibnocci(n);
}
