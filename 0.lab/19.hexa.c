#include<stdio.h>
void main()
{
	int n,sum,r,i;
	int a[100];
	printf("enter num");
	scanf("%d",&n);
	sum=0;
	for(i=0;n!=0;i++)
	{
		r=n%16;
		n/=16;
		if(r<=9)
		a[i]=48+r;
		else
		a[i]=55+r;
	}
	--i;
        for(i;i>=0;i--)
	{
		printf("%c\n",a[i]);
	}
}
