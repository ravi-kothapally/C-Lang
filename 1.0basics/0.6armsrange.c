#include <stdio.h>
void main()
{
	int a,b,e,s,sum,r,c=0;
	printf("range starts from=");
	scanf("%d",&a);
	printf("ends at=");
	scanf("%d",&b);
	if (a>b){
		e=a;
		a=b;
		b=a;}
	while(a<b){
		s=a;
		sum=0;
		while(a!=0){
			r=a%10;
			sum=sum+(r*r*r);
			a/=10;}
		a=s+1;			
	if (s==sum)
	{	printf("%d is a armstrong number\n",s);
		c++;}
	}
	if (c==0)
	printf("no armstrong numbers in the range\n");
}	

