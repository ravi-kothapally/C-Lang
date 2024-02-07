#include<stdio.h>
void main()
{
	int k,n1,n2;
	printf("enter 2 num");
	scanf("%d%d",&n1,&n2);
	while(n2>0)
	{
		k=n1;
		n1=n2;
		n2=k%n1;
	}
	printf("%d\n",n1);
}
